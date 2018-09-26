#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ListaSE.h"


main(){
	int m,o,a,active=0;
	Contato d;
	Lista l;
	criaLista(&l);
	printf("0-Fim\n\n\n\n\n\n6-Inclui no fim\n");
	scanf("%d",&o);
	while(o!=0&&o!=6){
			printf("\n Ops, opcao invalida!!!\n");
			scanf("%d",&o);
		}
	while(o!=0){
		m=-1;
		switch(o){
			case 1:
				printf("\nInforme a posicao\n");
				scanf("%d",&a);
				printf("\nInforme o numero e nome\n");
				scanf("%d%s",&d.num,&d.nome);
				m=incluiAntes(&l,d,a);
				break;
			case 2:
				printf("\nInforme a posicao\n");
				scanf("%d",&a);
				printf("\nInforme o numero e nome\n");
				scanf("%d%s",&d.num,&d.nome);
				m=incluiDepois(&l,d,a);
				break;

			case 3:
				printf("\nInforme o telefone a ser consultado\n");
				scanf("%d",&a);
				m=consultaContato(l,&d,a);
				if(m==SUCESSO){
					printf("Existe o contato : Nome = %s Telefone = %d",d.nome,d.num);
					sleep(3);
				}
				break;
			case 4:
				printf("\nInforme o numero de telefone a ser excluido\n");
				scanf("%d",&a);
				
				m=excluiContato(&l,&d,a);
				if(m==SUCESSO){
					printf("Exluido o contato : %s",d.nome);
					sleep(3);
				}
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
			case 6:
				printf("\nInforme o numero e nome\n");
				scanf("%d%s",&d.num,&d.nome);
				m=incluiNoInicio(&l,d);				
				break;
			}
			
			if(active==2){
				int y;
				for(y=5;y>=0;y--){
					system("cls");
					printf("0-Fim\n1-Inclui Contato Antes\n2-Inclui Contato depois\n3-Consulta Contato\n4-Exclui Contato\n5-Exibe Lista\n6-Inclui no fim\n\n");
					exibeLista(l);
					printf("\n\nexibir acaba em: %ds",y);
					sleep(1);
				}
			}
					
		system("cls");
		
		
		printf("0-Fim\n1-Inclui Contato Antes\n2-Inclui Contato depois\n3-Consulta Contato\n4-Exclui Contato\n5-Exibe Lista\n6-Inclui no fim\n\n");
		if(active==1){
			exibeLista(l);
		}
		printf("\n");
		msn(m);
		printf("\n");
		scanf("%d",&o);
		while(o<0||o>6){
			printf("\n Ops, opcao invalida!!!\n");
			scanf("%d",&o);			
		}
	}
}


