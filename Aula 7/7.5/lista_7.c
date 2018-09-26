#include<stdio.h>
#include<stdlib.h>
#include "lista_7.h"

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

