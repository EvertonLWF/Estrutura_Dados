#include<stdio.h>
#include<stdlib.h>
#include "PilhaSE.h"

void criaPilha(PilhaSE *p){
	p->topo=NULL;
}
int empilha(PilhaSE *p,Funcionario func){
	Nodo *pNodo;
	pNodo=(Nodo *) malloc (sizeof(Nodo));
	if(pNodo==NULL)
	return FALTOU_MEMORIA;
	else{
		pNodo->func=func;
		pNodo->prox=p->topo;
		p->topo=pNodo;
		return SUCESSO;
	}
}
int desempilha(PilhaSE *p,Funcionario *func){
	Nodo *pTemp;
	if(p->topo==NULL)
	return PILHA_VAZIA;
	else{
		func=p->topo;
		pTemp=p->topo;
		p->topo=p->topo->prox;
		free(pTemp);
		return SUCESSO;
	}
}
void exibePilha(PilhaSE p){
	Nodo *pNodo;
	pNodo=p.topo;
	if(p.topo==NULL)
	return PILHA_VAZIA;
	else{
		while(pNodo!=NULL){
			printf("Código: %d Salário:%f \n",pNodo->func.cod,pNodo->func.salario);
			pNodo=pNodo->prox;
		}
	}
}
int estaVazia(PilhaSE p){
	if(p.topo==NULL)
	return 1;
	else
	return 0;
}
int consultaExistencia(PilhaSE p,int cod){
	Nodo *pNodo;
	PilhaSE paux;
	criaPilha(&paux);
	if(p.topo==NULL)
	return PILHA_VAZIA;
	else{
		pNodo=p.topo;
		while(pNodo!=NULL){
			if(cod==pNodo->func.cod){
				
			
				return SUCESSO;
			}	
			pNodo=pNodo->prox;	
		}
		return CODIGO_INEXISTENTE;
		
	}
}

