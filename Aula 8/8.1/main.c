#include <stdio.h>
#include <stdlib.h>
#include "fila.h"
void msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nLista Vazia\n");
			break;
		case 2:
			printf("\nLista Cheia\n");
			break;
	}
}



main(){
	int a,dado,m;
	FilaCF b[MAX_NODOS];
	
	
	
	
	
	printf("\n0-Sair\n1-Cria Fila\n2-Insere\n3-Retira\n4-Exibe\n5-Consulta\n");
	scanf("%d",&a);
	while(a!=0){
		switch (a){
			case 1:
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
		}
		system("cls");
		printf("\n0-Sair\n1-Cria Fila\n2-Insere\n3-Retira\n4-Exibe\n5-Consulta\n");
		scanf("%d",&a);
		msn(m);
	}
	
}
