#include <stdio.h>
#include <stdlib.h>
#include "FilaSE.h"

void criaFila(Fila *f){
	f->frente=NULL;
	f->re=NULL;
}
int insere(Fila *f,int d){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc (sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	if(f->frente==NULL){
		f->re=nNodo;
		f->frente=nNodo;
		nNodo->prox=NULL;
		return SUCESSO;
		
	}else{
		f->re->prox=nNodo;
		f->re=nNodo;
		nNodo->prox=NULL;	
		return SUCESSO;		
	}	
}
int retira(Fila *f,int *d){
	if(f->frente==NULL){
		return FILA_VAZIA;
		
	}
	Nodo *nAux;
	nAux=f->frente;
	*d=nAux->info;
	f->frente=nAux->prox;
	free(nAux);
	return SUCESSO;
	
}
int consulta(Fila f,int *d){
	if(f.frente==NULL){
		return FILA_VAZIA;
	}
	*d=f.frente->info;
	return SUCESSO;
}

int estaVazia(Fila f){
	
}
void msn(int m){
	switch (m){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nFila vazia\n");
			break;
		case 2:
			printf("\nSem memoria\n");
			break;
	}
}
void exibe(Fila f){
	Nodo *nAux;
	nAux=f.frente;
	printf("\n");
	while(nAux!=NULL){
		printf("Atual = %d info = %d Prox = %d|",nAux,nAux->info,nAux->prox);
		nAux=nAux->prox;
	}
}
