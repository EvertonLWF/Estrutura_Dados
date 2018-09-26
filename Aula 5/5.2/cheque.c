#include<math.h>
#include"cheque.h"
void cc (int a,cheque *b){
	b->num=a;
	b->sit=0;
	b->valor=0;
}
int os(cheque a){
	int b;
	b=a.sit;
	return b;
}
int on(cheque a){
	int b;
	b=a.num;
	return b;
}
int emc(float a,cheque *b){
	int c;
	if(b->sit==0){
		b->sit=1;
		b->valor=a;
		return c=0;
	}
	else{
		return c=1;
	}
}
void exc(cheque a){
	printf("\n ### Cheque n° %.3d situação %d valor R$ %.2f ###",a.num,a.sit,a.valor);
}
float ov(cheque a){
	float b;
	b=a.valor;
	return b;
}
int cmc(cheque *a){
	int c;
	if(a->sit==1){
		a->sit=2;
		return c=0;
	}
	else{
		return c=1;
	}
}
void ct(int a,int b,talao *c){
	int i;
	c->nc=a;
	for(i=0;i<10;i++){
		cc(b,&c->t[i]);
		b++;
	}
}
void ext(talao a){
	int i;
	printf("Conta N°%.3d",a.nc);
	for(i=0;i<10;i++){
		exc(a.t[i]);
	}
	system("pause");
}
int ect(int a,float b,talao *c){
	int x,y;
	for (x=0;x<10;x++){
		if(a==c->t[x].num){
			if(c->t[x].sit==0){
				emc(b,&c->t[x].num);
				return y=0;
			}
			
			else{
				return y=1;
			}
		}
	}
}
int cct(int a,talao *c){
		int x,y;
	for (x=0;x<10;x++){
		if(a==c->t[x].num){
			if(c->t[x].sit==1){
				cmc(&c->t[x]);
				return y=0;
			}
			
			else{
				return y=1;
			}
		}
	}
}
float sct(talao a,int b){
	int i;
	float s1=0;
	if(b==1){
		for(i=0;i<10;i++){
			if(a.t[i].sit==1){
				s1=s1+a.t[i].valor;
			}
		}
	}
	if(b==2){
		for(i=0;i<10;i++){
			if(a.t[i].sit==2){
				s1=s1+a.t[i].valor;
			}
		}
	}
	return s1;
}
