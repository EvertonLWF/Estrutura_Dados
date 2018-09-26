#include <stdio.h>
#include <stdlib.h>
#include "ListaSE.h"


main(){
	int m,o,a;
	Dado d;
	ListaSE l;
	criaLista(&l);
	printf("0-Fim\n1-Inclui no inicio\n2-exibe lista\n3-Quantidade de nodos\n4-Exibe situacao da lista\n5-Exclui do Inicio\n6-Inclui no fim\n7-Exclui do fim\n8-Verifica existencia\n9-Consulta por codigo\n10-Inclui Depois\n11-Exclui nodo");
	scanf("%d",&o);
	while(o>11||o<0){
		printf("\nOpcao invalida\n");
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
				exibe(l);
				break;
			case 3:
				quantidadeDeNodos(l);
				break;
			case 4:
				m=exibeSituacaoDaLista(l);
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
			case 10:
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				printf("\nInforme os dados\n");
				scanf("%d%f",&d.cod,&d.peso);
				m=incluiDepois(&l,a,d);
				
				
				break;
			case 11:
				printf("\nInforme um codigo\n");
				scanf("%d",&a);
				m=excluiNodo(&l,a,&d);
				if(m==0){
					printf("\nexcluido nodo %d - %.2f\n",d.cod,d.peso);
					sleep(2);
				}
				
				break;
				
				
		}		
		system("cls");
		exibe(l);
		printf("0-Fim\n1-Inclui no inicio\n2-exibe lista\n3-Quantidade de nodos\n4-Exibe situacao da lista\n5-Exclui do Inicio\n6-Inclui no fim\n7-Exclui do fim\n8-Verifica existencia\n9-Consulta por codigo\n10-Inclui Depois\n11-Exclui nodo");
		msn(m);
		scanf("%d",&o);
	}	
}
