#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "PilhaSE.h"


main(){
	int m,o,a,active=0;
	Funcionario d;
	Pilha p;
	criaPilha(&p);
	printf("0-Sair\n1-Inclui Funcionario\n2-Exclui um funcionario\n3 Consulta a existencia de um funcionario\n4-Exibe todos os funcionarios\n");
	scanf("%d",&o);
	while(o!=0&&o!=1){
			printf("\n Ops, Primeiro voce deve incluir um funcionario!!!\n");
			scanf("%d",&o);
		}
	while(o!=0){
		m=-1;
		switch(o){
			case 1:
				printf("\nInforme o Id e $ :\n");
				scanf("%d%f",&d.cod,&d.salario);
				m=empilha(&p,d);
				break;
			case 2:
				m=desempilha(&p,&d);
				if(m==0){
					printf("Removido funcionario id = %d salario = %.2f",d.cod,d.salario);
					sleep(2);
				}
				break;

			case 3:
				printf("\nInforme um codigo:");
				scanf("%d",&a);
				m=consultaExistencia(p,a);
				if(m==0){
					printf("\nFuncionario esta na pilha\n");
					sleep(2);
				}
				break;
			case 4:
				printf("\nDeseja visualizar a pilha de funcionarios:\n\t1-Sempre ativa\n\t2-Ativa por 5 segundos\n");
				scanf("%d",&active);
				while(active<1||active>2){
						printf("POW mestre eh 1 ou 2 !!!!!");
						scanf("%d",&active);
					}
				break;
			}
			
			if(active==2){
				int y;
				if(p.topo!=NULL)
				for(y=5;y>=0;y--){
					system("cls");
					printf("0-Sair\n1-Inclui Funcionario\n2-Exclui um funcionario\n3 Consulta a existencia de um funcionario\n4-Exibe todos os funcionarios\n\n");
					exibePilha(p);
					printf("\n\nexibir acaba em: %ds",y);
					sleep(1);
				}
			}
					
		system("cls");
		
		
		printf("0-Sair\n1-Inclui Funcionario\n2-Exclui um funcionario\n3 Consulta a existencia de um funcionario\n4-Exibe todos os funcionarios\n");
		if(active==1){
			exibePilha(p);
		}
		printf("\n");
		msn(m);
		printf("\n");
		scanf("%d",&o);
		while(o<0||o>4){
			printf("\n Ops, opcao invalida!!!\n");
			scanf("%d",&o);			
		}
	}
}



