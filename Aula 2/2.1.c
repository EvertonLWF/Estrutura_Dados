#include<stdio.h>

void DuplaCrescente(int a,int b,int *c,int *d);

main(){
	int a,b,c,d;
	printf("digite dois valores");
	scanf("%d%d",&a,&b);
	while(a!=b){
		DuplaCrescente(a,b,&c,&d);
		printf("%d-%d\n",c,d);
		scanf("%d%d",&a,&b);
		system("cls");
	}
}

void DuplaCrescente(int a,int b,int *c,int *d){
	int aux;
	if(a>b){
		aux=a;
		a=b;
		b=aux;		
	}
	*c=a;
	*d=b;
}
