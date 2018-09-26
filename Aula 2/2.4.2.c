#include<stdio.h>

void Calc(int x,int y,float *r,int *z);

main(){
	int a,b,c,i,j=0;
	float d;
	printf("Digite duplas");
	scanf("%d",&c);
	for(i=0;i<c;i++){
		printf ("digite os valores");
		scanf("%d%d",&a,&b);
		Calc(a,b,&d,&j);
		if(j==1){
			printf("Divisao por zero\n");
		}
		else{
			printf("%.2f\n",d);
		}
		j=0;
	}
}
void Calc(int x,int y,float *r,int *z){
	if(y==0){
		*z=1;
	}
	else{
		*r=x/(float)y;
	}
}
