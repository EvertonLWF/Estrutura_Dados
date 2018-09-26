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

main(){
	int x=0,y=0;
	float p1,p2,a1,a2,r;
	circle c1,c2;
	scanf("%f",&r);
	nc(0,0,r,&c1);
	scanf("%f",&r);
	nc(15,30,r,&c2);
	a1=ac(c1);
	a2=ac(c2);
	printf("\narea circulo 1=%.2f\narea circulo 2=%.2f",a1,a2);
	p1=pc(c1);
	p2=pc(c2);
	if(p1>p2){
		printf("\nmaior perimetro circulo 1 =%.2f",p1);
	}
	else{
		printf("\nmaior perimetro circulo 2 =%.2f",p2);
	}
	
	

}
