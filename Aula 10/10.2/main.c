#include <stdio.h>
#include <stdlib.h>
#include "FilaSE.h"

main(){
	Fila f;
	int op,m,d;
	printf("0-Sair\n1-Cria Fila\n2-Inserir na Fila\n3-Retirar da Fila\n4-Consulta Fila\n");
	scanf("%d",&op);
	while(op>1||op<0){
		printf("\n Ops, crie a fila primeiro!!!!!\n");
		scanf("%d",&op);
	}
	while(op!=0){
		m=-1;
		switch (op){
			case 1:
				criaFila(&f);
				break;
			case 2:
				printf("Informe um dado do tipo inteiro:");
				scanf("%d",&d);
				m=insere(&f,d);
				break;
			case 3:
				m=retira(&f,&d);
				if(m==SUCESSO){
					printf("Retirado o nodo com info = %d",d);
					sleep(3);
				}
				break;
			case 4:
				m=consulta(f,&d);
				if(m==SUCESSO){
					printf("Frente da fila eh do nodo com info = %d",d);
					sleep(3);
				}
				break;
		}
		system("cls");
		printf("0-Sair\n1-Cria Fila\n2-Inserir na Fila\n3-Retirar da Fila\n4-Consulta Fila");
		exibe(f);
		msn(m);
		scanf("%d",&op);
	}
}
