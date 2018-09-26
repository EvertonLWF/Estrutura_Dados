#include<stdio.h>
#include<stdlib.h>
#include "lista_7.h"
#include <string.h>


int empilha(pilhaCF *p,int dado){
	if(p->t==MAX_NODOS-1){
		return LISTA_CHEIA;
	}else{
		p->t++;
		p->a[p->t]=dado;
		return SUCESSO;	
	}
	
}
int desempilha(pilhaCF *p,int *dado){
	if(p->t==-1){
		return LISTA_VAZIA;
	}else{
		*dado=p->a[p->t];
		p->t--;	
		
	}
}
int estaCheia(pilhaCF p){
	if(p.t==MAX_NODOS-1){
		return LISTA_CHEIA;
	}
}
int estaVazia(pilhaCF p){
	if(p.t==-1){
		return LISTA_VAZIA;
	}
}
int criaLista(Li *a,pilhaCF *b,int Maxnodos){
	a->p.a[Maxnodos];
	a->p.t=-1;
}
int incluiNoInicio(Li *a,pilhaCF *b,int dado){
	int i;
	for(i=0;i<a->p->t;i++){
		b->
	}
}
int incluiNoFim(Li *a,int dado);
int excluiDoInicio(Li *a, int *dado);
int excluiDoFim(Li *a, int *dado);

