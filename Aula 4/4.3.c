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
int dc(circle c,int x,int y){
	float r1,r2;
	int re;
	float r;
	x=c.x-x;
	y=c.y-y;
	r=(x*x)+(y*y);
	r=sqrt(r);
	if(r<=c.raio){
		re=1;
	}
	else{
		if(r>c.raio){
			re=0;
		}
    }
	return re;		
}


main(){
	int a,x,y,res;
	float r,z;
	circle c1;
	nc(10,5,5,&c1);
	for (a=0;a<5;a++){
		printf("digite as cordenadas do %d ponto:",a+1);
		scanf("%d%d",&x,&y);
		res=dc(c1,x,y);
		if(res==1){
			printf("esta no circulo\n");
		}else{
			if(res==0){
				printf("nao esta no circulo\n");
			}
		}
		res=0;
		
	}
}
