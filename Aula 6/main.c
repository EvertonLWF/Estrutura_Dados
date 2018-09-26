#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include"listacf.h"
void time(){
	sleep(2);
}
void menu(){
	printf("0.Fim\n");
	printf("1.Inclui no fim\n");
	printf("2.Exibe lista\n");
	printf("3.Quantidade de nodos\n");
	printf("4.Exibe a situacao da lista\n");
	printf("5.Exclui do fim\n");
	printf("6.Inclui do inicio\n");
	printf("7.Exclui do inicio\n");
	printf("8.Consulta por posicao\n");
	printf("9.Verifica existencia\n");
	printf("10.Consulta por codigo\n");
	printf("11.Inclui da posicao\n");
	printf("12.Exclui da posicao\n");
	printf("13.Inclui antes\n");
	printf("14.Exclui nodo\n");
}
void msg(int a){
	
	if(a==0){
		printf("\nSUCESSO\n");
	}
	if(a==1){
		printf("\nLISTA VAZIA\n");
	}
	if(a==2){
		printf("\nLISTA CHEIA\n");
	}
	if(a==3){
		printf("\nPOSICAO INVALIDA\n");
	}
	if(a==4){
		printf("\nCODIGO INEXISTENTE\n");
	}
}
int val_cod(listaCF z,int a){
	int x;
	for(x=1;x<z.n;x++){
		if(a==x){
			return 1;
		}
	}
	return 0;
}
		
main(){
	int p,p2,a=99,m,e,f,bb,w;
	float b;
	listaCF c;
	Dado d;
	criaLista(&c);
	while(a!=0){
		m=99;
		if(a==1){//incluiNoInicio
			printf("\nInforme o id e peso:");
			scanf("%d%f",&d.cod,&d.peso);
			m=incluiNoFim(&c,d);
		}
		if(a==2){//exibe
			exibe(c);
		}
		if(a==3){//quantidadeDeNodos
			m=quantidadeDeNodos(c);
			if(m==1){
				printf("\nExistem %d Nodo\n",m);
			}
			if(m!=1){
				printf("\nExistem %d Nodos\n",m);
			}
			time();
			m=99;
		}
		if(a==4){//exibesituação
			exibeSituacao(c);
		}
		if(a==5){//excluiDoFim
			m=excluiDoFim(&c,&d);
			printf("\n Excluindo nodo = %d Codigo = %d Peso = %.2f",c.n+1,d.cod,d.peso);
			time();
		}
		if(a==6){//incliNoInicio
			printf("Informe o id e peso:");
			scanf("%d%f",&d.cod,&d.peso);
			m=incluiNoInicio(&c,d);
		}
		if(a==7){//excluiDoInicio
			m=excluiDoInicio(&c,&d);
			printf("\n Excluindo nodo = %d Codigo = %d Peso = %.2f",1,d.cod,d.peso);
			time();
		}
		if(a==8){//consultaPorPosição
			printf("\nInforme a posicao:");
			scanf("%d",&p);
			m=consultaPorPosicao(c,p,&d);
			if(m==SUCESSO){
				printf("Nodo = %d codigo = %d Peso = %.2f\n",p,d.cod,d.peso);
				system("pause");
			}
		}
		if(a==9){//existe
			printf("Digite a posicao:");
			scanf("%d",&f);
			e=existe(c,f);
			if(e==1){
				printf("\nNodo esta na lista\n");
			}
			if(e==0){
				printf("\nNodo nao esta na lista\n");
			}
			time();		
		}
		if(a==10){//consultaPorCodigo
			printf("\nDigite o codigo:");
			scanf("%d",&f);
			m=consultaPorCodigo(c,f,&d,&w);
			if(m==0){
				printf("\n Posicao = %d codigo = %d Peso = %.2f",w,d.cod,d.peso);
				time();
			}
		}
		if(a==11){//incluiNaPosição
			printf("\nDigite a posicao:");
			scanf("%d",&f);
			printf("Informe o codigo e o Peso");
			scanf("%d%f",&d.cod,&d.peso);
			m=incluiNaPosicao(&c,f,d);
			
		}
		if(a==12){//excluiNaPosição
			printf("\nDigite a posicao:");
			scanf("%d",&f);
			m=excluiDaPosicao(&c,f,&d);
			printf("\n Excluindo nodo = %d Codigo = %d Peso = %.2f",f,d.cod,d.peso);
			time();
		}
		if(a==13){//incluiAntes
			printf("\nDigite a posicao de referencia:");
			scanf("%d",&f);
			printf("\nDigite o codigo e peso:");
			scanf("%d%f",&d.cod,&d.peso);
			m=incluiAntes(&c,f,d);
		}
		if(a==14){
			printf("\nDigite o codigo a ser excluido:");
			scanf("%d",&f);
			m=excluiNodo(&c,f,&d);
			printf("\n Excluindo nodo = %d Codigo = %d Peso = %.2f",f,d.cod,d.peso);
			time();
		}
		
		system("cls");
		menu();
		msg(m);
//		sleep(1);
		system("cls");
		menu();
		exibe(c);
		printf("\n");
		scanf("%d",&a);

}
}
