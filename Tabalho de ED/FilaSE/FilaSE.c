#include "FilaSE.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void criaFila(Fila *f){
	f->frente=NULL;
	f->re=NULL;
}
int quantidadeVoo(Fila f){
	Fila f1,f2;
	Voo v;
	int x=0;
	criaFila(&f2);
	f1=f;
	while(f1.frente!=NULL){
		x++;
		retira(&f1,&v);
		insere(&f2,v);		
	}
	return x;
}
int retira(Fila *f,Voo *v){
	Nodo *nAux;
	nAux=f->frente;
	if(f->frente==NULL&&f->re==NULL){
		return FILA_VAZIA;
	}
	if(f->frente==f->re){
		*v=nAux->v;
		free(nAux);
		f->frente=NULL;
		f->re=NULL;
		return SUCESSO;
	}
	*v=nAux->v;
	f->frente=nAux->prox;
	free(nAux);
	return SUCESSO;
}
int exibeFila(Fila f){
	Fila f1,f2;
	Voo v;
	criaFila(&f2);
	f1=f;
	while(f1.frente!=NULL){
		retira(&f1,&v);
		insere(&f2,v);
		printf("\nVoo = %d CIA = %s\n",v.num,v.cia);
		
	}
}
int insere(Fila *f,Voo v){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->v=v;
	if(f->frente==NULL&&f->re==NULL){
		nNodo->prox=NULL;
		f->frente=nNodo;
		f->re=nNodo;
		return SUCESSO;
	}
	nNodo->prox=NULL;
	f->re->prox=nNodo;
	f->re=nNodo;
	return SUCESSO;
	
}
int consultaExistencia(Fila f,int a){
	Fila f1,f2;
	Nodo *nAux;
	Voo v;
	criaFila(&f2);
	f1=f;
	nAux=f1.frente;
	while(f1.frente!=NULL){
		nAux=f1.frente;
		if(a==nAux->v.num){
			return VOO_ESTA;
		}
		retira(&f1,&v);
		insere(&f2,v);
	}
	return NUMERO_INEXISTENTE;
}
void msn(int a){
	switch(a){
		case 0:
			printf("\nSUCESSO\n");
			break;
		case 1:
			printf("\nFILA_VAZIA\n");
			break;
		case 2:
			printf("\nFALTOU MEMORIA\n");
			break;
		case 3:
			printf("\nCODIGO INEXISTENTE\n");
			break;
		case 4:
			printf("\nVOO ESTA NA FILA\n");
			break;
	}
}

