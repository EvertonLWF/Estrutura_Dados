#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"cheque.h"
main(){
	setlocale(LC_ALL, "");
	int op,a,b,n,n1,n2,c;
	talao tl;
	float v,r;
	printf("Digite o n° da conta");
	scanf("%d",&a);
	printf("Digite o n° do 1° cheque");
	scanf("%d",&b);
	ct(a,b,&tl);
	printf("\n0.Fim\n1.Exibe talao\n2.Emite cheque\n3.Compensa cheque\n4.Soma cheques do talao\n");
	scanf("%d",&op);
	while(op!=0){
		if(op>4||op<0){
			printf("\nOpcao invalida\n");
			scanf("%d",&op);
		}
		if(op==1){
			ext(tl);
		}
		if(op==2){
			printf("Digite o n°do cheque:");
			scanf("%d",&n);
			printf("Digite seu valor:");
			scanf("%f",&v);
			c=ect(n,v,&tl);
			if(c==0){
				printf("\nSUCESSO\n");
			}
			else{
				printf("\nERRO\n");
			}
			system ("pause");
		}
		if(op==3){
			printf("\n informe o n° do Cheque para ser compensado");
			scanf("%d",&n1);
			cct(n1,&tl);
			system("pause");
		}
		if(op==4){
			printf("Selecione a opcao:\n1.Soma emitidos\n2.soma compensados\n ");
			scanf("%d",&n2);
			r=sct(tl,n2);
			printf("\nSoma = R$%.2f\n",r);
			system("pause");
		}
		system("cls");
		printf("\n0.Fim\n1.Exibe talao\n2.Emite cheque\n3.Compensa cheque\n4.Soma cheques do talao");
		scanf("%d",&op);
			
	}
	
}
