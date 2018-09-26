#include<stdio.h>
#include<locale.h>
#include<math.h>
typedef struct{
	int x,y;
	float raio;
}circle;

void nc(int a,int b,float c,circle *c1){
	c1->raio=c;
	c1->x=a;
	c1->y=b;
	;
}
float pc(circle a){
	float per;
	per=(2*3.14)*(float)a.raio;
	return per;
}
float ac(circle a){
	float area;
	area=(float)3.14*(a.raio*a.raio);
	return area;
}
int cc(circle a,circle b){
	int comp;
	if(a.raio>b.raio){
		comp=1;
	}
	if(a.raio<b.raio){
		comp=-1;
	}
	if(a.raio==b.raio){
		comp=0;
	}
	return comp;
}
void ec(circle c){
	printf("cordenada X->%d Y->%d raio ->%d",c.x,c.y,c.raio);
}
void mc(int x,int y,circle *a){
	int b,c;
	b=a->x;
	c=a->y;
	a->x=b+x;
	a->y=c+y;
}
int dc(circle x,int y){
	float r;
	
}


main(){
	int b,x=0,y=0,a;
	float p1,p2,a1,a2,r;
	circle c1,c2,m;
	printf("\ndigite cordenadas do 1 circulo e seu raio:");
	scanf("%d%d%f",&x,&y,&r);
	nc(x,y,r,&c1);
	printf("\ndigite cordenadas do 2 circulo e seu raio:");
	scanf("%d%d%f",&x,&y,&r);
	nc(x,y,r,&c2);
	a=cc(c1,c2);
	if(a==1){
		printf("\ncirculo 1 = %d  %d  %.2f",c1.x,c1.y,c1.raio);
		printf("\ncirculo 2 = %d  %d  %.2f",c2.x,c2.y,c2.raio);
		printf("\nmaior eh circulo 1");
	}
	if(a==-1){
		printf("\ncirculo 1 = %d  %d  %.2f",c1.x,c1.y,c1.raio);
		printf("\ncirculo 2 = %d  %d  %.2f",c2.x,c2.y,c2.raio);
		printf("\nmaior eh circulo 2");
	}
	if(a==0){
		printf("\ncirculo 1 = %d  %d  %.2f",c1.x,c1.y,c1.raio);
		printf("\ncirculo 2 = %d  %d  %.2f",c2.x,c2.y,c2.raio);
		printf("\ncirculos iquais !!!!");
	}
	printf("\nDigite o deslocamento do segundo circulo");
	scanf("%d%d",&x,&y);
	mc(x,y,&c2);
	printf("\ncirculo 2 = %d  %d  %.2f",c2.x,c2.y,c2.raio);	
	
	
	

}
