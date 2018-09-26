#include <stdio.h>
#include <stdlib.h>
#include "lista_7.h"
void exibe(int b,pilhaCF a){
	switch (b){
		case -1:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|   |   |   |   |   |\t\t|%.2d|\n",b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 0:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |   |   |   |   |\t\t|%.2d |\n",a.a[0],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 1:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |   |   |   |\t\t|%.2d |\n",a.a[0],a.a[1],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 2:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |%.2d |   |   |\t\t|%.2d |\n",a.a[0],a.a[1],a.a[2],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 3:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |%.2d |%.2d |   |\t\t|%.2d |\n",a.a[0],a.a[1],a.a[2],a.a[3],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 4:
			system("cls");
			printf("digite o valores para empilhar\n");
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |%.2d |%.2d |%.2d |\t\t|%.2d |\n",a.a[0],a.a[1],a.a[2],a.a[3],a.a[4],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;	
	}
}
void msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nPilha Cheia\n");
			break;
		case 2:
			printf("\nPilha Vazia\n");
			break;	
	}
}
main(){
	
	pilhaCF a;
	int X,d,m,st,y=99;
	a.t=-1;
	while(y!=0){
		st=a.t;
		exibe(st,a);
		printf("0-Sair\n1-Empilhar\n2-Desempilhar\n3-Salvar na variavel X o segundo nodo a partir do topo da pilha,\n deixando-a sem seus 2 nodos superiores\n");
		scanf("%d",&y);
		switch (y){
			case 1:
				printf("\nDigite um valor\n");
				scanf("%d",&d);
				m=empilha(&a,d);
				break;
			case 2:
				m=desempilha(&a,&d);
				break;
			case 3:
				if(a.t>=2){
					m=desempilha(&a,&d);
					m=desempilha(&a,&d);
					X=a.a[a.t];
					printf("Variavel X = %d",X);
				}else{
					printf("\nNumero insuficiente de nodos para esta operacao\n");
				}
		}
		msn(m);
		m=99;
		sleep(1);
		system("cls");
	}
	
	
	
}
