#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include"cheque.h"
main(){
	setlocale(LC_ALL,"");
	cheque a,b;
	int a1,b1,x,y;
	float a2,b2,v1,v2;
	printf("digite o n° do 1° Cheque\n");
	scanf("%d",&a1);
	printf("digite o n° do 2° Cheque\n");
	scanf("%d",&b1);
	cc(a1,&a);
	cc(b1,&b);
	printf("Digite o valor do 1° Cheque\n");
	scanf("%f",&a2);
	printf("Digite o valor do 1° Cheque\n");
	scanf("%f",&b2);
	emc(a2,&a);
	emc(b2,&b);
	system("cls");
	printf("|N° Cheque | N° situação | Valor");
	exc(a);
	exc(b);
	printf("\n");
	system("pause");
	system("cls");
	printf("|N° Cheque | N° situação |\n");
	printf("|   %.7d|           %d |\n",x=on(a),y=os(a));
	printf("|   %.7d|           %d |\n",x=on(b),y=os(b));
}
