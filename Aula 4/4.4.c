#include<stdio.h>
#include<math.h>
#include<locale.h>
typedef struct{
	int nc;
	float valor;
}conta;
void cria(int a,float v,conta *c){
	c->nc=a;
	c->valor=0;
}
void dep(float dp,conta *c){
	c->valor=(*c).valor+dp;
}
void ret(float sq,conta *c){
	c->valor=(*c).valor-sq;
}
float obtem(conta c){
	printf("n%d=R$ %.2f\n####################################\n",c.nc,c.valor);
}

main(){
	float dpt,rta,aux;
	int a,b,op;
	setlocale(LC_ALL,"Portuguese");
	conta cp,cc;
	printf("Digite o numero da conta tipo Poupança: ");
	scanf("%d",&a);
	printf("\nConta Poupança criada com sucesso numero %d",a);
	printf("\nDigite o numero da conta tipo Corrente: ");
	scanf("%d",&b);
	printf("\nConta Corrente criada com sucesso numero %d",b);
	cria(a,0,&cp);
	cria(b,0,&cc);
	system("cls");
	printf("####################################\nConta corrente n°");
	obtem(cc);
	printf("####################################\nConta Poupança n°");
	obtem(cp);
	printf("\nDigite o codigo da operação:\n1-Deposito Conta Corrente \n2-Deposito conta Poupança \n3-Retirada conta Corrente \n4-Retirada Conta Poupança \n5-Sair:");
	scanf("%d",&op);
	while(op!=5){
		if(op==1){
			printf("Digite o valor a ser depositado da conta Corrente de n°%d:",b);
			scanf("%f",&dpt);
			dep(dpt,&cc);
		}
		if(op==2){
			printf("Digite o valor a ser depositado da conta Poupança de n°%d:",a);
			scanf("%f",&dpt);
			dep(dpt,&cp);
		}
		if(op==3){
			printf("Digite o valor a ser retirado da conta Corrente de n°%d:",b);
			scanf("%f",&rta);
			if(cc.valor<rta){
				if((cc.valor+cp.valor)<rta){
					printf("\nsaldo insufuciente para realizar a operação\n");
				}
				else{
					aux=rta-cc.valor;
					ret(aux,&cp);
					dep(aux,&cc);					
					ret(rta,&cc);
				}
			}
			else{
				ret(rta,&cc);
			}
			
		}
		if(op==4){
			printf("Digite o valor a ser retirado da conta Poupança de n°%d:",a);
			scanf("%f",&rta);
			if(cp.valor<rta){
				printf("\nSaldo");
				sleep(1);
				printf(" insuficiente");
				sleep(2);
			}
			else{
				if(cp.valor>rta){
					ret(rta,&cp);
				}
			}
		}
	system("cls");	
	printf("####################################\nConta corrente n°");
	obtem(cc);
	printf("####################################\nConta Poupança n°");
	obtem(cp);
	op=0;
	printf("Digite o codigo da operação:\n1-Deposito Conta Corrente \n2-Deposito conta Poupança \n3-Retirada conta Corrente \n4-Retirada Conta Poupança \n5-Sair:");
	scanf("%d",&op);
    }
}
