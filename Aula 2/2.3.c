#include<stdio.h>

void DuplaCrescente(int a,int b,int e,int *c,int *d);

main(){
	int a,b,c,d,e;
	printf("Escolha a ordem 0-cres 1-decres");
	scanf("%d",&e);
	printf("digite dois valores");
	scanf("%d%d",&a,&b);
	while(a!=b){
		DuplaCrescente(a,b,e,&c,&d);
		printf("%d-%d\n",c,d);
		scanf("%d%d",&a,&b);
		system("cls");
	}
}

void DuplaCrescente(int a,int b,int e,int *c,int *d){
	int aux;
	if(e==0){
		if(a>b){
			aux=a;
			a=b;
			b=aux;
		}
	}
	if(e==1){
		if(a<b){
			aux=a;
			a=b;
			b=aux;	
		}
	}
	*c=a;
	*d=b;
}
