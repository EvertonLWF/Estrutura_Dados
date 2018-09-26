#include<stdio.h>
#include<stdlib.h>

main(){
	int Q,a,Y,b,c=0;
	printf("digite um valor:");
	scanf("%d",&Q);
	int Z[Q];
	for(a=0;a<Q;a++){
		printf("digite um valor para a posicao Z[%d]",a);
		scanf("%d",&Z[a]);
	}
	system("cls");
	printf("%d\n",Q);
	for(a=0;a<Q;a++){
		printf("%d ",Z[a]);
	}
	printf("\ndigite um valor Y: ");
	scanf("%d",&Y);
	b=0;
	for(a=0;a<Q;a++){
		if(Y<Z[a]){
			b++;
		}
	}
	int W[b];
	for(a=0;a<b;a++){
		W[a]=0;
	}
	
	for(a=0;a<Q;a++){
		if(Y<Z[a]){
			W[c]=Z[a];
			c++;
		}
	}
	for(a=0;a<b;a++){
		printf("%d ",W[a]);
	}
	
	
}
