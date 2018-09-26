#include<stdio.h>
#include<stdlib.h>
main(){
	int L,C,i,j,v=0,a=0;
	char s;
	printf("digite o numero de linhas e colunas");
	scanf("%d%d",&L,&C);
	int M[L][C];
	for (i=0;i<L;i++){
		for (j=0;j<C;j++){
			printf("digite o valor da posição M[%d][%d]:",i,j);
			scanf("%d",&M[i][j]);
			system("cls");
		}
	}
	for (i=0;i<L;i++){
		for (j=0;j<C;j++){
			printf("%d  ",M[i][j]);
		}
		printf("\n");
	}
	printf("digite um valor: ");
	scanf("%d",&v);
	while(v>=0){
		for (i=0;i<L;i++){
			for (j=0;j<C;j++){
				if(v==M[i][j]){
					a++;
				}
			}
		}
		if(a==0){
			printf("\nNao esta na matriz\n");
		}else{
			printf("\nEsta na matriz\n");
		}
		a=0;
		printf("digite um valor: ");
		scanf("%d",&v);
	}
}
