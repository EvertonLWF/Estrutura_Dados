#include<stdio.h>

void Calc(int x,int y,float *r,int *z);

main(){
	int a,b,c=0;
	float d;
	printf ("digite os valores");
	while(c!=1){
		scanf("%d%d",&a,&b);
		Calc(a,b,&d,&c);
		if(c==1){
			printf("Divisao por zero");
		}
		else{
			printf("%.2f",d);
		}
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
