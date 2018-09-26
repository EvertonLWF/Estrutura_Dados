#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "ListaSE.h"

void criaLista(Lista *l){
	l->inicio=NULL;
}
int incluiNoInicio(Lista *l,Contato c){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=c;
	if(l->inicio==NULL){
		nNodo->prox=NULL;
		l->inicio=nNodo;		
		return SUCESSO;
	}else{
		nNodo->prox=l->inicio;
		l->inicio=nNodo;
		return SUCESSO;
	}
	
	return SUCESSO;	
}
int incluiAntes(Lista *l,Contato c,int cod){
	int x=1;
	Nodo *nNodo,*nAux,*nAnt;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	if(l->inicio==NULL){
		return LISTA_VAZIA;
	}
	nNodo->info=c;
	nAux=l->inicio;
	while(nAux!=NULL){
		
		if(cod==x){
			if(cod==1){
				nNodo->prox=l->inicio;
				l->inicio=nNodo;
				return SUCESSO;
			}
			nNodo->prox=nAux;
			nAnt->prox=nNodo;
			return SUCESSO;
		}
		nAnt=nAux;
		nAux=nAux->prox;
		x++;
	}
	return CONTATO_INEXISTENTE;
}
void exibeLista(Lista l){
	int x=1;
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		printf("\nAtual = %.9d prox = %.9d |Posicao %.3d | Numero = %.9d | Nome = %s\n",nAux,nAux->prox,x,nAux->info.num,nAux->info.nome);
		nAux=nAux->prox;
		x++;
	}
}
int consultaContato(Lista l,Contato *c,int num){
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		if(num==nAux->info.num){
			*c=nAux->info;
			return SUCESSO;
		}
		nAux=nAux->prox;
	}
	return CONTATO_INEXISTENTE;
	
}
int incluiDepois(Lista *l,Contato c,int cod){
	int x=1;
	Nodo *nNodo,*nAux;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	if(l->inicio==NULL){
		return LISTA_VAZIA;
	}
	nNodo->info=c;
	nAux=l->inicio;
	while(nAux!=NULL){
		if(cod==x){
			if(nAux->prox==NULL){
				nNodo->prox=NULL;
				nAux->prox=nNodo;
				return SUCESSO;
			}
			nNodo->prox=nAux->prox;
			nAux->prox=nNodo;
			return SUCESSO;
		}
		nAux=nAux->prox;
		x++;
	}
	return CONTATO_INEXISTENTE;
}
int excluiContato(Lista *l,Contato *c,int cod){
	int x=1;
	Nodo *nAux,*nAnt;
	if(l->inicio==NULL){
		return LISTA_VAZIA;
	}
	nAux=l->inicio;
	while(nAux!=NULL){
		if(cod==nAux->info.num){
			if(nAux->prox==NULL&&x==1){
				*c=nAux->info;
				l->inicio=NULL;
				free(nAux);
				return SUCESSO;
			}
			if(nAux->prox!=NULL&&x==1){
				*c=nAux->info;
				l->inicio=nAux->prox;
				free(nAux);
				return SUCESSO;
			}
			if(nAux->prox==NULL&&x>1){
				*c=nAux->info;
				nAnt->prox=NULL;
				free(nAux);
				return SUCESSO;
			}
			*c=nAux->info;
			nAnt->prox=nAux->prox;
			free(nAux);
			return SUCESSO;
		}
		nAnt=nAux;
		nAux=nAux->prox;
		x++;
	}
	return CONTATO_INEXISTENTE;
}
void msn(int a){
	switch(a){
		case 0:
			printf("\nSUCESSO\n");
			break;
		case 1:
			printf("\nLISTA_VAZIA\n");
			break;
		case 2:
			printf("\nFALTOU MEMORIA\n");
			break;
		case 3:
			printf("\nCONTATO INEXISTENTE\n");
			break;
	}
}
