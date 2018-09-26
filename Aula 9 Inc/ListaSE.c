#include <stdio.h>
#include <stdlib.h>
#include "ListaSE.h"

void criaLista(ListaSE *l){
	l->inicio=NULL;
}
void exibe(ListaSE l){
	Nodo *nAux;
	int x=1;
	nAux=l.inicio;
	while(nAux!=NULL){
		printf("\nEnd atual = %d Pos = %d cod = %d Peso = %.2f Proximo end = %d",nAux,x,nAux->info.cod,nAux->info.peso,nAux->prox);
		x++;
		nAux=nAux->prox;
	}
}
int incluiNoFim(ListaSE *l,Dado d){
	Nodo *nNodo,*nAux;
	nNodo=(Nodo*) malloc (sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nAux=l->inicio;
	if(nAux==NULL){
		nNodo->prox=NULL;
		l->inicio=nNodo;
		return SUCESSO;
	}
	while(nAux!=NULL){
		if(nAux->prox==NULL){
			nNodo->prox=NULL;
			nAux->prox=nNodo;
			return SUCESSO;
			
		}
		nAux=nAux->prox;
	}
}
int incluiDepois(ListaSE *l,int cod,Dado d){
	Nodo *nAux,*nNodo;
	nNodo=(Nodo*) malloc (sizeof(Nodo));
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
	Nodo *nNodo;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->info=d;
	nNodo->prox=l->inicio;
	l->inicio=nNodo;
	return SUCESSO;
}

int excluiDoInicio(ListaSE *l,Dado *d){
	Nodo *nAux;
	nAux=l->inicio;
	if(nAux==NULL){
		return LISTA_VAZIA;
	}
	*d=nAux->info;
	l->inicio=nAux->prox;
	free(nAux);
	
	return SUCESSO;
	
}
int excluiDoFim(ListaSE *l,Dado *d){
	int x=0;
	Nodo *nAux,*pNodo;
	nAux=l->inicio;
	if(nAux==NULL){
		return LISTA_VAZIA;
	}
	while(nAux->prox!=NULL){
		pNodo=nAux;
		nAux=nAux->prox;
		x++;
		
	}
	if(nAux->prox==NULL&&x==0){
		*d=nAux->info;
		l->inicio=NULL;
		free(nAux);
		return SUCESSO;
	}
	
	*d=nAux->info;
	pNodo->prox=NULL;
	free(nAux);
	return SUCESSO;
	
}
int excluiNodo(ListaSE *l,int cod,Dado *d){
	Nodo *nAux,*nAnt;
//	int x=0;
	nAux=l->inicio;
	if(nAux==NULL){
		return LISTA_VAZIA;
	}
	while(nAux!=NULL){
		
		if(nAux->info.cod==cod){
			if(nAux->prox==NULL&&x==0){//Quando possui apenas 1 nodo
				*d=nAux->info;
				l->inicio=NULL;
				free(nAux);
				return SUCESSO;
			}
			if(nAux->prox==NULL){//Quando eh o ultimo nodo
				*d=nAux->info;
				nAnt->prox=NULL;
				free(nAux);
				return SUCESSO;
			}
			
//			if(x==0){//Quando eh o 1°nodo
//				*d=nAux->info;
//				l->inicio=nAux->prox;
//				free(nAux);
//				return SUCESSO;
//			}
			*d=nAux->info;
			nAnt->prox=nAux->prox;
			free(nAux);
			return SUCESSO;
		}
//		x++;
		nAnt=nAux;		
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
}


void quantidadeDeNodos(ListaSE l){
	Nodo *nAux;
	int x=1;
	nAux=l.inicio;
	if(nAux==NULL){
		printf("\nLISTA VAZIA\n");
		sleep(2);
	}
	else{
		while(nAux->prox!=NULL){
			x++;
			nAux=nAux->prox;
	    }
	    if(x==1){
	    	printf("Lista possui %d Nodo",x);
	    	sleep(2);
		}else{
				printf("Lista possui %d Nodos",x);
				sleep(2);
		}
	}
		
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
	Nodo *nAux;
	nAux=l.inicio;
	int x=0;
	while(nAux!=NULL){
		nAux=nAux->prox;
		x++;
	}
	if(x==0){
		printf("A lista esta vazia");
		sleep(2);
	}
	if(x!=0){
		printf("A lista possui %d Nodos",x);
		sleep(2);
	}
	
	
}

int consultaPorCodigo(ListaSE l,int cod,Dado *d){
	Nodo *nAux;
	nAux=l.inicio;
	while(nAux!=NULL){
		if(nAux->info.cod==cod){
			*d=nAux->info;
			return SUCESSO;
		}
		nAux=nAux->prox;
	}
	return CODIGO_INEXISTENTE;
}

int estaVazia(ListaSE l){
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
