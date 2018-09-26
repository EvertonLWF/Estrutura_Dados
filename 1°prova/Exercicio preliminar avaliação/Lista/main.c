#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lista.h"

main(){
	int i,m,x,p;
	Lista a;
	Dado b;
	char c[10];
	printf("\n0-Sair\n1-Cria Lista\n");
	scanf("%d",&x);
	while(x<0||x>1){
		printf("\nOpcao invalida\n");
		scanf("%d",&x);
	}
	while(x!=0){
		switch (x){
			case 1:
				m=criaLista(&a);
				break;
				
			case 2:
				printf("\nDigite os dados:\n");
				scanf("%d%s",&b.nr,&b.nm);
				m=insereInicio(&a,b);
				break;
				
			case 3:
				printf("\nDigite os dados:\n");
				scanf("%d%s",&b.nr,&b.nm);
				m=inserirNoFim(&a,b);
				break;
				
			case 4:
				printf("\nDigite o nodo:\n");
				scanf("%d",&p);
				printf("\nDigite um numero:\n");
				scanf("%d",&b.nr);
				printf("\nDigite um nome:\n");
				scanf("%s",&b.nm);
				m=incluiAntes(&a,b,p);
				break;
				
			case 5:
				printf("\nDigite o nodo a ser excluido\n");
				scanf("%d",&p);
				m=excluiNodo(&a,&b,p);
				break;
				
		}
		system("cls");
		printf("\n0-Sair\n1-Cria Lista\n2-Insere no Inicio\n3-Insere no Fim\n4-inclui Antes\n5-Exclui Nodo");
		msn(m);
		exibeLista(a);
		scanf("%d",&x);
		while(x<0||x>5){
			system("cls");
			printf("\n0-Sair\n1-Cria Lista\n2-Insere no Inicio\n3-Insere no Fim\n4-inclui Antes\n5-Exclui Nodo\n");
			msn(m);
			exibeLista(a);
			printf("\nOpcao invalida\n");
			scanf("%d",&x);
		}
	}
}
