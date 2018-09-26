#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pilha.h"

main(){
	Pilha a,b;
	Dado d;
	int i,x,m;
	char c[10];
	printf("\n0-Sair\n1-Criar pilhas\n");
	scanf("%d",&x);
	while(x<0||x>1){
		printf("\nOpcao invalida\n");
		scanf("%d",&x);
	}
	while(x!=0){
		switch (x){
			case 1:
				m=criaPilha(&a);
				break;
			case 2:
				printf("\nInforme um numero e um nome\n");
				scanf("%d%s",&d.nr,&d.nm);
				m=empilha(&a,d);
				break;
			case 3:
				m=desempilha(&a,&d);
				printf("\nDesempilhado valor = %d Nome = %s\n",&d.nr,&d.nm);
				break;
			case 4:
				printf("\nDigite os dados a serem consultados\n");
				scanf("%d%s",&d.nr,&d.nm);
				m=verificaExistencia(a,d);
				break;
		}
		system("cls");
		printf("\n0-Sair\n1-Criar pilha\n2-Empilha \n3-Desempilha\n4-Verifica existencia\n");
		msn(m);
		printf("\n\n\n+-------Pilha-------+\n");
		exibe(a);
		scanf("%d",&x);	
		while(x<0||x>4){
			system("cls");
			printf("\n0-Sair\n1-Criar pilha\n2-Empilha \n3-Desempilha\n4-Verifica existencia\n");
			msn(m);
			printf("\n\n\n+-------Pilha-------+\n");
			exibe(a);
			printf("\nOpcao invalida\n");
			scanf("%d",&x);
		}
	}
}
