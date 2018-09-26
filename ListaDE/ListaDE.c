#include <stdio.h>
#include <stdlib.h>
#include "ListaDE.h"

void criaLista(ListaDE *l){
	l->inicio=NULL;
	l->fim=NULL;
	l->n=0;
}
void exibe(ListaDE l){
	Nodo *nAux;
	nAux=l.inicio;
	int x=1;
	while(nAux!=NULL){
		printf(" Anterior = %.8d Atual = %.8d Proximo = %.8d Posicao %.3d  cod = %.3d peso = %.2f\n",nAux->ant,nAux,nAux->prox,x,nAux->info.cod,nAux->info.peso);
		x++;
		nAux=nAux->prox;
	}
}
int estaVazia(ListaDE l){
	if(l.n==0){
		return LISTA_VAZIA;
	}
	return 0;
}
int incluiNoFim(ListaDE *l,Dado d){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc (sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	if(l->n==0){
		nNodo->ant=NULL;
		nNodo->prox=NULL;
		l->inicio=nNodo;
		l->fim=nNodo;
	}else{
		nNodo->ant=l->fim;
		nNodo->prox=NULL;
		l->fim->prox=nNodo;
		l->fim=nNodo;
	}	
	l->n++;
	return SUCESSO;
}
int existe(ListaDE l,int cod){
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		if(cod==nAux->info.cod){
			return 0;
		}
		nAux=nAux->prox;
	}
	return 3;
}
int incluiDepois(ListaDE *l,int cod,Dado d){
	int i;
	Nodo *nNodo,*nAux;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nAux=l->inicio;
	while(nAux!=NULL){
		if(cod==nAux->info.cod){
			if(nAux->ant==NULL&&nAux->prox==NULL&&l->n==1){//Condição de apenas 1 nodo
				nNodo->ant=nAux;
				nNodo->prox=NULL;
				nAux->prox=nNodo;
				l->n++;
				return SUCESSO;
			}
			if(nAux->ant!=NULL&&nAux->prox==NULL&&l->n>1){//Condição de sendo o ultimo nodo
				nNodo->ant=nAux;
				nNodo->prox=NULL;
				nAux->prox=nNodo;
				l->n++;
				return SUCESSO;
			}
			if(nAux->ant!=NULL&&nAux->prox!=NULL&&l->n>1||nAux->ant==NULL&&nAux->prox!=NULL&&l->n>1){//Condição sendo no meio 
				nNodo->ant=nAux;
				nNodo->prox=nAux->prox;
				nAux->prox->ant=nNodo;
				nAux->prox=nNodo;
				l->n++;
				return SUCESSO;
			}
		}
		nAux=nAux->prox;
	}
	return CODIGO_N;
}
int incluiNoInicio(ListaDE *l,Dado d){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc (sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nNodo->ant=NULL;
	nNodo->prox=l->inicio;
	l->inicio=nNodo;
	
	if(l->n==0){
		l->fim=nNodo;
	}else{
		l->inicio->prox->ant=nNodo;
	}
	l->n++;
	return SUCESSO;
}
void quantidadeDeNodos(ListaDE l){
	if(l.n==0){
		printf("\nLista nao possui Nodos\n");
	}
	if(l.n==1){
		printf("\nLista possui apenas 1 Nodo\n");
	}
	if(l.n>1){
		printf("\nLista possui %d Nodos\n",l.n);
	}
	sleep(2);
}
int excluiDoInicio(ListaDE *l,Dado *d){
	Nodo *nAux;
	if(estaVazia(*l)==1){
		return LISTA_VAZIA;
	}
	nAux=l->inicio;
	*d=nAux->info;
	if(l->n==1){
		l->inicio=NULL;
		l->fim=NULL;
		l->n--;
		free(nAux);
		return SUCESSO;
	}
	
	l->inicio=nAux->prox;
	nAux->prox->ant=NULL;
	l->n--;
	free(nAux);
	return SUCESSO;
}
int excluiDoFim(ListaDE *l,Dado *d){
	Nodo *nAux;
	nAux=l->fim;
	if(estaVazia(*l)==1){
		return LISTA_VAZIA;
	}
	*d=nAux->info;
	if(nAux->ant==NULL&&nAux->prox==NULL&&l->n==1){
		l->inicio=NULL;
		l->fim=NULL;
		l->n--;
		free(nAux);
		return SUCESSO;
	}
	nAux->ant->prox=NULL;
	l->fim=nAux->ant;
	l->n--;
	free(nAux);
	return SUCESSO;
}
int excluiNodo(ListaDE *l,int cod,Dado *d){
	Nodo *nAux;
	nAux=l->inicio;
	while(l->n!=0){
		if(cod==nAux->info.cod){
			*d=nAux->info;
			if(nAux->ant==NULL&&nAux->prox==NULL&&l->n==1){
				l->fim=NULL;
				l->inicio=NULL;
				l->n--;
				free(nAux);
				return SUCESSO;
			}
			if(nAux->ant==NULL&&nAux->prox!=NULL&&l->n>1){
				l->inicio=nAux->prox;
				nAux->prox->ant=NULL;
				free(nAux);
				l->n--;
				return SUCESSO;
			}
			if(nAux->ant!=NULL&&nAux->prox!=NULL&&l->n>1){
				nAux->ant->prox=nAux->prox;
				nAux->prox->ant=nAux->ant;
				free(nAux);
				l->n--;
				return SUCESSO;
			}
			if(nAux->ant!=NULL&&nAux->prox==NULL&&l->n>1){
				nAux->ant->prox=NULL;
				l->fim=nAux->ant;
				free(nAux);
				l->n--;
				return SUCESSO;
			}
		}
		nAux=nAux->prox;
	}
	return CODIGO_N;
}
int msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nLista esta vazia\n");
			break;
		case 2:
			printf("\nFaltou memoria\n");
			break;
		case 3:
			printf("\nCodigo nao existe\n");
			break;
	}
}
int exibeSituacaoDaLista(ListaDE l){
	if(l.n==0){
		return LISTA_VAZIA;
	}
	return SUCESSO;
}
int consultaPorCodigo(ListaDE l,int c,Dado *d){
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=0){
		if(c==nAux->info.cod){
			*d=nAux->info;
			return SUCESSO;
		}
		nAux=nAux->prox;
	}
	return CODIGO_N;
}
