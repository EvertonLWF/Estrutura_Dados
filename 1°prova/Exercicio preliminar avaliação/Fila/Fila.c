#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Fila.h"

int insere(Fila *f,Dado d){
	if(f->re==max-1){
		return full;
	}
	f->re++;
	f->d[f->re]=d;
	return ok;
}
int retira(Fila *f,Dado *d){
	if(f->re==-1){
		return empty;
	}
	*d=f->d[f->re];
	f->fr++;
	return ok;
}
int criaFila(Fila *f){
	f->fr=0;
	f->re=-1;
	return ok;
}
void exibe(Fila f){
	int i;
	printf("+------------+------------+------------+------------+------------+\n|");
	for(i=f.fr;i<=f.re;i++){
		printf("%2d%10s|",f.d[i].nr,f.d[i].nm);
	}
	printf("\n+------------+------------+------------+------------+------------+\n");
}

void msn(int a){
	switch (a){
		case 0:
			printf("\n\nSucesso\n");
			break;
		case 1:
			printf("\n\nErro !!!!!\n");
			break;
		case 2:
			printf("\n\nLista esta Vazia\n");
			break;
		case 3:
			printf("\n\nLista esta Cheia\n");
			break;
		
	}
	
}

