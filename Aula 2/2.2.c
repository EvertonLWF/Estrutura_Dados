#include<stdio.h>

void DuplaCrescente(int *a,int *b);

main(){
	int c,d;
	printf("digite dois valores");
	scanf("%d%d",&c,&d);
	while(c!=d){
		DuplaCrescente(&c,&d);
		printf("%d-%d\n",c,d);
		scanf("%d%d",&c,&d);
		system("cls");
	}
}

void DuplaCrescente(int *a,int *b){
	int aux;
	if(*a>*b){
		aux=*a;
		*a=*b;
		*b=aux;
	}
}
