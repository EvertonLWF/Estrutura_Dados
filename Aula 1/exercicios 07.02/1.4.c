#include<stdio.h>
#include<stdlib.h>

void maiorNumero();

main(){
	int a,b;
	printf("digite dois numeros inteiros positivos");
	scanf("%d%d",&a,&b);
	maiorNumero(a,b);
}

maiorNumero(int a,int b){
	
	if (a>b){
		printf("%d",a);
	}
	if (a<b){
		printf("%d",b);
	}
	if(a==b){
		printf("eles sao iquais");
	}
}
