#include<stdio.h>
#include<stdlib.h>
#include"PilhaSE.h"

void criaPilha(Pilha *p){
	p->topo=NULL;
}
int estaVazia(Pilha p){
	if(p.topo==NULL){
		return PILHA_VAZIA;
	}
}
int desempilha(Pilha *p,Funcionario *f){
	if(p->topo==NULL){
		return PILHA_VAZIA;
	}
	Nodo *nAux;
	
	nAux=p->topo;
	*f=nAux->func;
	p->topo=nAux->prox;
	free(nAux);
	return SUCESSO;
}
int exibePilha(Pilha p){
	Nodo *nAux,*pAux;
	nAux=p.topo;	
	Funcionario f;
	while(nAux!=NULL){
		
		desempilha(&nAux,&f);
		empilha(&pAux,f);
		printf("\nId do funcionario = %d Salario = R$%.2f\n",f.cod,f.salario);
		
	}
	while(pAux!=NULL){
		
		desempilha(&pAux,&f);
		empilha(&nAux,f);
		
	}
}
int empilha(Pilha *p,Funcionario f){
	Nodo *nNodo;
	nNodo=(Nodo*) malloc(sizeof(Nodo));
	if(nNodo==NULL){
		return FALTOU_MEMORIA;
	}
	nNodo->func=f;
	if(p->topo==NULL){
		nNodo->prox=NULL;
		p->topo=nNodo;
		return SUCESSO;
	}		
	nNodo->prox=p->topo;
	p->topo=nNodo;
	return SUCESSO;
}
int consultaExistencia(Pilha p,int cod){	
	Nodo *nAux,*pAux;
	nAux=p.topo;
	if(estaVazia(p)==1){
		return PILHA_VAZIA;
	}
	criaPilha(&pAux);
	Funcionario f;
	while(nAux!=NULL){
		if(cod==nAux->func.cod){
			while(pAux!=NULL){
				desempilha(&pAux,&f);
				empilha(&nAux,f);
			}
			return SUCESSO;
		}else{
			desempilha(&nAux,&f);
			empilha(&pAux,f);
		}
	}
	while(pAux!=NULL){
		desempilha(&pAux,&f);
		empilha(&nAux,f);
	}
	return CODIGO_INEXISTENTE;
}
void msn(int a){
	switch (a){
		case 0:
			printf("\nSUCESSO\n");
			break;
		case 1:
			printf("\nPILHA VAZIA\n");
			break;
		case 2:
			printf("\nFALTOU MEMORIA\n");
			break;
		case 3:
			printf("\nCODIGO INEXISTENTE\n");
			break;
			
	}
}
