#include <stdio.h>
#include <stdlib.h>
#include "ListaDE.h"


main(){
	int m,o,a,active=0;
	Dado d;
	ListaDE l;
	criaLista(&l);
	printf("0-Fim\n1-Inclui no inicio\n2-exibe lista\n3-Quantidade de nodos\n4-Exibe situacao da lista\n5-Exclui do Inicio\n6-Inclui no fim\n7-Exclui do fim\n8-Verifica existencia\n9-Consulta por codigo\n10-Inclui Depois\n11-Exclui nodo");
	scanf("%d",&o);
	while(o<0||o>11){
			printf("\n Ops, opcao invalida!!!\n");
			scanf("%d",&o);
		}
	while(o!=0){
		m=-1;
		switch(o){
			case 1:
				printf("Informe os dados");
				scanf("%d%f",&d.cod,&d.peso);
				m=incluiNoInicio(&l,d);
				break;
			case 2:
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
			case 3:
				quantidadeDeNodos(l);
				break;
			case 4:
				m=exibeSituacaoDaLista(l);
				if(m==0){
					printf("\nLista possui %d nodos\n",l.n);
					sleep(2);
				}
				break;
			case 5:
				m=excluiDoInicio(&l,&d);
				if(m==0){
					printf("\nExcluido %d - %.2f\n",d.cod,d.peso);
					sleep(2);
				}
				
				break;
			case 6:
				printf("Informe os dados");
				scanf("%d%f",&d.cod,&d.peso);
				m=incluiNoFim(&l,d);			
				break;
			case 7:
				m=excluiDoFim(&l,&d);
				if(m==0){
					printf("\nExcluido %d - %.2f\n",d.cod,d.peso);
					sleep(2);
				}			
				break;
			case 8:
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				m=existe(l,a);
				if(m==0){
					printf("\nNodo esta na lista\n");
				}
				if(m==3){
					printf("\nNodo NAO esta na lista\n");
				}
				sleep(2);
				m=0;
				break;
			case 9:
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				m=consultaPorCodigo(l,a,&d);
				if(m==0){
					printf("\nConteudo da consulta = %d - %.2f\n",d.cod,d.peso);
					sleep(2);
				}			
				break;
			case 10://ok
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				printf("\nInforme os dados\n");
				scanf("%d%f",&d.cod,&d.peso);
				m=incluiDepois(&l,a,d);
				
				
				break;
			case 11://ok
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				m=excluiNodo(&l,a,&d);
				if(m==0){
					printf("\nexcluido nodo %d - %.2f\n",d.cod,d.peso);
					sleep(2);
				}
				break;
				
				
		}
		if(active==2){
			int y;
			for(y=5;y>=0;y--){
				system("cls");
				exibe(l);
				printf("0-Fim\n1-Inclui no inicio\n2-exibe lista\n3-Quantidade de nodos\n4-Exibe situacao da lista\n5-Exclui do Inicio\n6-Inclui no fim\n7-Exclui do fim\n8-Verifica existencia\n9-Consulta por codigo\n10-Inclui Depois\n11-Exclui nodo");
				printf("\n\nexibir acaba em: %ds",y);
				sleep(1);
			}
		}		
		system("cls");
		if(active==1){
			exibe(l);
		}
		
		printf("0-Fim\n1-Inclui no inicio\n2-exibe lista\n3-Quantidade de nodos\n4-Exibe situacao da lista\n5-Exclui do Inicio\n6-Inclui no fim\n7-Exclui do fim\n8-Verifica existencia\n9-Consulta por codigo\n10-Inclui Depois\n11-Exclui nodo");
		msn(m);
		scanf("%d",&o);
		while(o<0||o>11){
			printf("\n Ops, opcao invalida!!!\n");
			scanf("%d",&o);
		}
	}	
}

