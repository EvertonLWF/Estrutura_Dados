#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "Fila.h"

main(){
	Fila f;
	Dado d;
	int i,x,m;
	printf("\n0-Sair\n1-Criar Fila Circular\n");
	scanf("%d",&x);
	while(x>1||x<0){
		system("cls");
		printf("\n0-Sair\n1-Criar Fila Circular\n");
		printf("\nOpcao invalida\n");
		scanf("%d",&x);	
	}
	while(x!=0){
		switch (x){
			case 1:
				m=criaFila(&f);
				break;
			case 2:
				printf("\nInforme um numero e um nome\n");
				scanf("%d%s",&d.nr,&d.nm);
				m=insere(&f,d);
				break;
			case 3:
				m=retira(&f,&d);
				break;
			case 4:
				exibe(f);
				break;
		}
		system("cls");
		printf("\n0-Sair\n1-Criar Fila Circular\n2-Insere \n3-Retira\n4-Exibe Fila\n");
		msn(m);
		exibe(f);
		printf("\n\n");
		scanf("%d",&x);
		while(x>4||x<0){
			system("cls");
			printf("\n0-Sair\n1-Criar Fila Circular\n2-Insere \n3-Retira\n4-Exibe Fila\n");
			msn(m);
			exibe(f);
			printf("\n\n");
			printf("\nOpcao invalida\n");
			scanf("%d",&x);	
		}
	}
}
	
