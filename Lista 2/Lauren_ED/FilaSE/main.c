#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "FilaSE.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	FilaSE f;
	int op,cd,r,rr=0;
	Voo v;
	criaFila(&f);
	printf("Escolha uma opção:\n");
	printf("0.Fim\n");
	printf("1.Insere um voo\n");
	printf("2.Retira um voo\n");
	printf("3.Consulta existencia de um voo\n");
	printf("4.Quantidade de avioes\n");
	printf("5.Exibe todos os voos\n");
	scanf("%d",&op);
	while(op!=0){
		if(op==1){
			printf("Digite o numero do voo:\n");
			scanf("%d",&v.num);
			printf("Digite o nome da cia aerea:\n");
			scanf("%s",&v.cia);
			r=insere(&f,v);
			if(r==2)
			printf("Memoria insuficiente.");
			if(r==0)
			printf("Dados inseridos com sucesso");
			else
			printf("Erro ao inserir.");
			sleep(1);
		}
		if(op==2){
			r=retira(&f,&v);
			if(r==1)
			printf("A fila está vazia.");
			else
			printf("Dados excluidos: %d %s",v.num,v.cia);
			sleep(3);
		}
		if(op==3){
			printf("Digite o numero do voo a ser consultado:\n");
			scanf("%d",&cd);
			r=consultaExistencia(f,cd);
			if(r==1)
			printf("A fila está vazia");
			if(r==0)
			printf("Voo encontrado na fila.");
			if(r==3)
			printf("Voo não encontrado.");
			sleep(3);
		}
		if(op==4){
			r=quantidadeDeVoos(f,&rr);
			printf("Quantidade de voos na fila para decolagem: %d",rr);
			sleep(3);
		}
		if(op==5){
			exibeFila(f);
			sleep(3);
		}
		system("cls");
	printf("Escolha uma opção:\n");
	printf("0.Fim\n");
	printf("1.Insere um voo\n");
	printf("2.Retira um voo\n");
	printf("3.Consulta existencia de um voo\n");
	printf("4.Quantidade de avioes\n");
	printf("5.Exibe todos os voos\n");
	exibeFila(f);
	scanf("%d",&op);
	}
	return 0;
}
