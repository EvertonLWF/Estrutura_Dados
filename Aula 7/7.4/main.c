#include <stdio.h>
#include <stdlib.h>
#include "lista_7.h"
void exibe(int b,pilhaCF a){
	switch (b){
		case -1:
		
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|   |   |   |   |   |\t\t|%.2d|\n",b);
			printf("+---+---+---+---+---+\t\t+---+\n");
	  break;
		case 0:
			
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |   |   |   |   |\t\t|%.2d |\n",a.a[0],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 1:
	
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |   |   |   |\t\t|%.2d |\n",a.a[0],a.a[1],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 2:
		
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |%.2d |   |   |\t\t|%.2d |\n",a.a[0],a.a[1],a.a[2],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 3:
			
			printf("+---+---+---+---+---+\t\t+---+\n");
			printf("|%.2d |%.2d |%.2d |%.2d |   |\t\t|%.2d |\n",a.a[0],a.a[1],a.a[2],a.a[3],b);
			printf("+---+---+---+---+---+\t\t+---+\n");
			break;
		case 4:
			
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
	
	pilhaCF a,b;
	int X,d,m,sta,stb,y=99,za,zb,i;
	a.t=-1;
	b.t=-1;
	while(y!=0){
		sta=a.t;
		stb=b.t;
		printf("\nP1\n");
		exibe(sta,a);
		printf("\nP2\n");
		exibe(stb,b);
		printf("0-Sair\n1-Empilhar\n2-Desempilhar\n3-Mover todos os elementos de uma pilha p1 para uma pilha p2 armazenando-os na ordem inversa.");
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
				za=a.t;
				zb=b.t;
				for(i=0;i<=zb;i++){
					desempilha(&b,&d);
				}
				for(i=0;i<=za;i++){
					desempilha(&a,&d);
					empilha(&b,d);
				}
		}
		msn(m);
		sleep(2);
		system("cls");
	}
	
	
	
}
