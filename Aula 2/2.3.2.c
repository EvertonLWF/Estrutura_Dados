#include<stdio.h>

void dc (int x,int y,int z,int *d,int *e);
main(){
	int a,b,c,d,e;
	printf("digite os valores");
	scanf("%d%d",&a,&b);
	while(a!=b){
		c=a+b;
		dc(a,b,c,&d,&e);
		printf("%d %d",d,e);
		scanf("%d%d",&a,&b);
	}
}
void dc(int x,int y,int z,int *p1,int *p2){
	int aux;
	if(z%2==0){
		if(x>y){
			aux=x;
			x=y;
			y=aux;
		}
	}
	else{
		if(y>x){
			aux=x;
			x=y;
			y=aux;
		}
	}
	*p1=x;
	*p2=y;
}

