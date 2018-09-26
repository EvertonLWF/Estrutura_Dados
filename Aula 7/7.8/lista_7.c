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
void realizaConta(pilhaCF *a,pilhaCF *b,float *r){
	char s[20];
	int i,j,x,simb,v1,v2,c,d=0,si;
	scanf("%s",&s);
		x=strlen(s);
		printf("\nCalculo de %s  = ",s);
		for(i=0;i<x;i++){
			if(s[i]=='+'||s[i]=='/'||s[i]=='*'||s[i]=='-'){
				simb=s[i];
				empilha(b,simb);
			}
			if(s[i]>=48&&s[i]<=57){
				simb=s[i];
				for(c=48;c<=58;c++){
					if(simb==c){
						simb=d;
					}
					d++;
				}
				d=0;
				empilha(a,simb);
			}
			if(s[i]==41){
				if(a->t>0){
					desempilha(a,&v2);
					desempilha(a,&v1);
					if(b->a[b->t]=='+'){
						*r=v1+v2;
						empilha(a,*r);
						desempilha(b,&si);
					}
					if(b->a[b->t]=='-'){
						*r=v1-v2;
						empilha(a,*r);
						desempilha(b,&si);
					}
					if(b->a[b->t]=='/'){
						*r=v1/v2;
						empilha(a,*r);
						desempilha(b,&si);
					}
					if(b->a[b->t]=='*'){
						*r=v1*v2;
						empilha(a,*r);
						desempilha(b,&si);
					}				
				}
				else{
					printf("\nOperacao invalida\n");
					return ERRO;
				}
			}
		}
}

