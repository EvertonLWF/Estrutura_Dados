#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"
void msn(int a){
	switch (a){
		case 1:
			printf("\n\nSucesso\n");
			break;
		case 2:
			printf("\n\nErro !!!!!\n");
			break;
		case 3:
			printf("\n\nLista esta cheia\n");
			break;
		case 4:
			printf("\n\nLista esta vazia\n");
			break;
	}
	
}

int criaLista(Lista *a){
	a->n=0;
	return ok;
}
int incluiAntes(Lista *a,Dado b,int c){
	int i,j;
	if(a->n==max){
		return full;
	}
	for(i=0;i<a->n;i++){
		if(c==i){
			for(j=a->n;j>=i;j--){
				a->d[j]=a->d[j-1];
			}
			a->d[c]=b;
			a->n++;
			return ok;
		}
	}
	return not_ok;
}
exibeLista(Lista a){
	int i;
	if(a.n!=0){
		for(i=0;i<a.n;i++){
			printf("\nNodo = %d Numero = %d Nome = %s\n",i,a.d[i].nr,a.d[i].nm);
		}	
	}
}
int excluiNodo(Lista *a,Dado *b,int c){
	int i,j;
	for(i=0;i<a->n;i++){
		if(c==i){
			for(j=i;j<a->n;j++){
				a->d[j]=a->d[j+1];
			}
			a->n--;
			return ok;
		}
	}
	return not_ok;
}
int insereInicio(Lista *a,Dado b){
	int i;
	if(a->n==max){
		system("pause");
		return full;
	}
	
	for(i=a->n;i>0;i--){
		a->d[i]=a->d[i-1];
	}
	a->d[0]=b;
	a->n++;
	return ok;
}
int inserirNoFim(Lista *a,Dado b){
	if(a->n==max){
		return full;
	}
	a->d[a->n]=b;
	a->n++;
	return ok;
	
}

