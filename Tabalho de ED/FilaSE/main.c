#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "FilaSE.h"


main(){
	int m,o,a,active=0;
	Voo d;
	Fila l;
	criaFila(&l);
	printf("0-Fim\n1-Insere um voo\n2-Retira um voo\n3-Consulta a existencia de um voo\n4-Quantidade de avioes\n5-Exibe todos os voos\n");
	scanf("%d",&o);
	while(o!=0&&o!=1){
			printf("\n Ops, tente Inserir um voo antes!!!\n");
			scanf("%d",&o);
		}
	while(o!=0){
		m=-1;
		switch(o){
			case 1:
				printf("\nInforme o numero e a Cia\n");
				scanf("%d%s",&d.num,&d.cia);
				m=insere(&l,d);
				break;
			case 2:
				m=retira(&l,&d);
				if(m==0){
					printf("\nDecolando Voo numero = %d Cia = %s\n",d.num,d.cia);
					sleep(2);
				}
				break;

			case 3:
				printf("\nInforme um numero\n");
				scanf("%d",&a);
				m=consultaExistencia(l,a);
				break;
			case 4:
				m=quantidadeVoo(l);
				printf("\nQuantidade de voos = %d",m);
				sleep(2);
				break;
			case 5:
				if(active==0){
					printf("Deseja manter a lista:\n1-sempre ativa\n2-Apenas exibir por 5 segundos\n");
					scanf("%d",&active);
					while(active<1||active>2){
						printf("Esta opcao e para escolher APENAS 1 ou 2 !!!!!");
						scanf("%d",&active);
					}
				}else{
					printf("Deseja manter a lista:\n1-sempre ativa\n2-Continuar exibindo por 5 segundos\n");
					scanf("%d",&active);
					while(active<1||active>2){
						printf("POW mestre eh 1 ou 2 !!!!!");
						scanf("%d",&active);
					}
				}
				break;			
		}
		if(active==2){
				int y;
				for(y=5;y>=0;y--){
					system("cls");
					printf("0-Fim\n1-Insere um voo\n2-Retira um voo\n3-Consulta a existencia de um voo\n4-Quantidade de avioes\n5-Exibe todos os voos\n");
					exibeFila(l);
					printf("\n\nexibir acaba em: %ds",y);
					sleep(1);
				}
			}
					
		system("cls");
		printf("0-Fim\n1-Insere um voo\n2-Retira um voo\n3-Consulta a existencia de um voo\n4-Quantidade de avioes\n5-Exibe todos os voos\n");
		printf("\n");
		msn(m);
		printf("\n");
		
		if(active==1){
			exibeFila(l);
		}
		scanf("%d",&o);
		while(o<0||o>5){
			printf("\n Esta opcao nao existe !!!!!\n");
			scanf("%d",&o);
		}
		
	}
}


