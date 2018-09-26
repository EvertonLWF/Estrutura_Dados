#include <stdio.h>
#include <stdlib.h>
#include "PilhaSE.h"

void criaPilha(Pilha *p){
	p->topo=NULL;
	
}
void exibe(Pilha p){
	Nodo *nAux;
	nAux=p.topo;
	if(nAux==NULL){
		return PILHA_VAZIA;
	}
	while(nAux!=NULL){
		printf("\n%d",nAux->info);
		nAux=nAux->prox;
	}
	return SUCESSO;
}
int empilha(Pilha *p,int d){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc(sizeof(Pilha));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nNodo->prox=p->topo;
	p->topo=nNodo;
	return SUCESSO;
}
int desempilha(Pilha *p,int *d){
	if(p->topo==NULL){
		return PILHA_VAZIA;
	}
	Nodo *nAux;
	nAux=p->topo;
	*d=nAux->info;
	p->topo=nAux->prox;
	free(nAux);
	return SUCESSO;
	
}
int consultaPilha(Pilha p,int *d){
	Nodo *nAux;
	nAux=p.topo;
	if(nAux==NULL){
		return PILHA_VAZIA;
	}
	*d=nAux->info;
	return SUCESSO;	
}

int msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nPilha Vazia\n");
			break;
		case 2:
			printf("\nFaltou memoria\n");
			break;
		case 3:
			printf("\nCodigo inexistente\n");
			break;
		case 4:
			printf("\nNodo existente\n");
			break;
			
			
	}
}
