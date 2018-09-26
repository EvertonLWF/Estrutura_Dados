#include <stdio.h>
#include <stdlib.h>
#include "ListaSE.h"

void criaLista(ListaSE *l){
	l->inicio=NULL;
}
void exibe(ListaSE l){
	Nodo *pAux;
	pAux=l.inicio;
	while(pAux != NULL){
		printf("\n%d - %.2f\n",pAux->info.cod,pAux->info.peso);
		pAux=pAux->prox;
	}
	
}
int estaVazia(ListaSE l){
	if(l.inicio==NULL){
		return LISTA_VAZIA;
	}
}
int incluiNoFim(ListaSE *l,Dado d){
	if(l->inicio==NULL){
		incluiNoInicio(l,d);
		return SUCESSO;
	}
	Nodo *nAux,*pNodo;
	nAux=l->inicio;
	while(nAux->prox!=NULL){
		nAux=nAux->prox;
	}
	pNodo=(Nodo*) malloc(sizeof(Nodo));
	nAux->prox=pNodo;
	pNodo->info=d;
	pNodo->prox=NULL;
	return SUCESSO;
	
}
int existe(ListaSE l,int cod){
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		if(nAux->info.cod==cod){
			return EXISTE;
		}
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
	
}
int incluiDepois(ListaSE *l,int cod,Dado d){
	Nodo *nNodo,*nAux;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nAux=l->inicio;
	while(nAux!=NULL){
		if(nAux->info.cod==cod){
			nNodo->prox=nAux->prox;
			nAux->prox=nNodo;
			return SUCESSO;
		}
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
	
}
int incluiNoInicio(ListaSE *l,Dado d){
	Nodo *pNodo;
	pNodo=(Nodo *) malloc(sizeof(Nodo));
	if(pNodo==NULL){
		return FALTOU_MEMORIA;
	}
	else{
		pNodo->info=d;
		pNodo->prox=l->inicio;
		l->inicio=pNodo;
		return SUCESSO;
	}
}
void quantidadeDeNodos(ListaSE l){
	int cont=0;
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		cont++;
		nAux=nAux->prox;
	}
	printf("\n%d Nodos\n",cont);
	sleep(3);
}
int excluiDoInicio(ListaSE *l,Dado *d){
	Nodo *nAux;
	nAux=l->inicio;
	if(l->inicio==NULL){
		return LISTA_VAZIA;
	}else{
		*d=nAux->info;
		l->inicio=nAux->prox;
		free(nAux);
		return SUCESSO;
	}
	
}
int excluiDoFim(ListaSE *l,Dado *d){
	Nodo *nAux,*end;
	nAux=l->inicio;
	if(nAux==NULL){
		return LISTA_VAZIA;
	}
	if(nAux->prox==NULL){
		*d=nAux->info;
		free(nAux);
		l->inicio=NULL;
		return SUCESSO;
	}
	while(nAux->prox!=NULL){
		end=nAux;
		nAux=nAux->prox;
	}
	*d=nAux->info;
	free(nAux);
	end->prox=NULL;
	return SUCESSO;
}
int excluiNodo(ListaSE *l,int cod,Dado *d){
	int x=0;
	if(l->inicio==NULL){
		return LISTA_VAZIA;
	}
	Nodo *nAux,*nAnt;
	nAux=l->inicio;
	while(nAux!=NULL){
		if(nAux->info.cod==cod){
			if(x==0&&nAux->prox==NULL){
				*d=nAux->info;
				free(nAux);
				l->inicio=NULL;
				return SUCESSO;
			}
			if(x==0){
				*d=nAux->info;
				l->inicio=nAux->prox;
				free(nAux);
				return SUCESSO;		
			}
			*d=nAux->info;
			nAnt->prox=nAux->prox;
			free(nAux);
			return SUCESSO;
		}	
		x++;
		nAnt=nAux;
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
}
int msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nLista Vazia\n");
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
int exibeSituacaoDaLista(ListaSE l){
	if(l.inicio==NULL){
		return LISTA_VAZIA;
	}
	printf("\n1 ou mais nodos\n");
	sleep(2);
}
int consultaPorCodigo(ListaSE l,int c,Dado *d){

	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		if(nAux->info.cod==c){
			*d=nAux->info;
			return SUCESSO;
			}
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
}
