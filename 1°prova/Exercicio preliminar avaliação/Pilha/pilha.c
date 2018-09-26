#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"
void msn(int a){
	switch (a){
		case 1:
			printf("\n\nSucesso\n");
			break;
		case 2:
			printf("\n\nErro !!!!!\n");
			break;
		case 3:
			printf("\n\nPilha esta cheia\n");
			break;
		case 4:
			printf("\n\nPilha esta vazia\n");
			break;
		case 6:
			printf("\n\nEsta na pilha\n");
			break;
		case 7:
			printf("\n\nNao Esta na pilha\n");
			break;
	}
	
}
int criaPilha(Pilha *a){
	a->topo=-1;
	return ok;
}
int empilha(Pilha *a,Dado b){
	if(a->topo==max-1){
		return full;
	}
	a->topo++;
	a->d[a->topo]=b;
	return ok;
}
int desempilha(Pilha *a,Dado *b){
	if(a->topo==-1){
		return empty;
	}
	*b=a->d[a->topo];
	a->topo--;
	return ok;
}
int verificaExistencia(Pilha a,Dado b){
	int i;
	for(i=0;i<=a.topo;i++){
		if(a.d[i].nr==b.nr&&strcmp(a.d[i].nm,b.nm)==0){
			return exist;
		}
	}
	return dont_exist;
	
}
void exibe(Pilha a){
	int i;
	
	for(i=a.topo;i>=0;i--){
		printf("| %2d    - %10s|\n",a.d[i].nr,a.d[i].nm);
	}
	printf("+-------------------+\n");	
}
