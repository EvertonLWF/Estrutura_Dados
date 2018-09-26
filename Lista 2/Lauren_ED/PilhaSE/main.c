#include <stdio.h>
#include <stdlib.h>
#include "PilhaSE.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	PilhaSE pilha;
	int op,cd,r;
	Funcionario f;
	criaPilha(&pilha);
	printf("Escolha uma opção:\n");
	printf("0.Fim\n");
	printf("1.Inclui um funcionario \n");
	printf("2.Exclui um funcionario\n");
	printf("3.Consulta existencia\n");
	printf("4.Exibe todos os funcionarios\n");
	scanf("%d",&op);
	while(op!=0){
		if(op==1){
			printf("Digite o codigo do funcionario:\n");
			scanf("%d",&f.cod);
			printf("Digite o salario:\n");
			scanf("%f",&f.salario);
			r=empilha(&pilha,f);
			if(r==2)
			printf("Memoria insuficiente.");
			if(r==0)
			printf("Dados inseridos com sucesso");
			else
			printf("Erro ao empilhar.");
			sleep(1);
		}
		if(op==2){
			r=desempilha(&pilha,&f);
			if(r==1)
			printf("A pilha está vazia.");
			else
			printf("Dados excluidos: %d %f",f.cod,f.salario);
			sleep(1);
		}
		if(op==3){
			printf("Digite o codigo a ser consultado:\n");
			scanf("%d",&cd);
			r=consultaExistencia(pilha,cd);
			if(r==1)
			printf("A pilha está vazia");
			if(r==2)
			printf("Contato não encontrado.");
			else
			printf("Contato encontrado na pilha.");
		    sleep(1);
		}
		if(op==4){
			exibePilha(pilha);
			sleep(3);
		}
		system("cls");
		printf("Escolha uma opção:\n");
	    printf("0.Fim\n");
    	printf("1.Inclui um funcionario \n");
	    printf("2.Exclui um funcionario\n");
    	printf("3.Consulta existencia\n");
	    printf("4.Exibe todos os funcionarios\n");
	      exibePilha(pilha);
		scanf("%d",&op);
	  
	}
		return 0;
}
