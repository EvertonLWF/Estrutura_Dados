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
	printf("\n|   %.7d|           %d |R$ %.2f",a.num,a.sit,a.valor);
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

