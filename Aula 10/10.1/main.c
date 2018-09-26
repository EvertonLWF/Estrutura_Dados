#include <stdio.h>
#include <stdlib.h>
#include"PilhaSE.h"
main(){
	Pilha p;
	int d,op,m;
	printf("0-sair\n1-Cria Pilha\n");
	scanf("%d",&op);
	while(op<0||op>1){
		printf("\nOpcao invalida\n");
		scanf("%d",&op);
	}
	while(op!=0){
		m=-1;
		switch(op){
			case 1:
				criaPilha(&p);
				break;
			case 2:
				m=desempilha(&p,&d);
				if(m==0){
					printf(" desempilhando o valor %d",d);
					sleep(2);
				}
				break;
			case 3:
				m=consultaPilha(p,&d);
				if(m==0){
					printf("\nTopo = %d\n",d);
					sleep(2);
				}
				break;
			case 4:
				printf("\nDigite o dado\n");
				scanf("%d",&d);
				m=empilha(&p,d);
				break;
		}
		system("cls");
		printf("0-sair\n1-Cria Pilha\n2-Desempilha\n3-Consulta\n4-Empilha\n");
		msn(m);
		exibe(p);
		printf("\n\n");
		scanf("%d",&op);
		while(op<0||op>4){
			printf("\nOpcao invalida\n");
			scanf("%d",&op);
		}
		
	}
}
