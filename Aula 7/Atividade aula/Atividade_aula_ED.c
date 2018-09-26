//Atividade aula dia 11/04/2018 Everton Feijo
#include <stdio.h>
#include <stdlib.h>
#define maxnodos 5
#define sucesso 0
#define cheia 1
#define vazia 2
#define naoEsta 3
#define esta 4
#define erro 5
#define erro1 6



typedef struct{
	int a[5];
	int topo;
	int id;
}pilhaCF;

int criaLista(pilhaCF *a){
	
	if(a->id==0){
		a->topo=-1;
		a->id++;
		return sucesso;
	}else{
		return erro;
	}
	
}

int empilha(pilhaCF *a,int dado){
	if(a->id==0){
		return erro1;
	}
	
	if(a->topo==maxnodos-1){
		return cheia;
	}
	else{
		a->topo++;
		a->a[a->topo]=dado;
		return sucesso;
	}
}


int desempilha(pilhaCF *a,int *dado){
	if(a->id==0){
		return erro1;
	}
	if(a->topo==-1){
			return vazia;
		}
		else{
			*dado=a->a[a->topo];
			a->topo--;
			return sucesso;
		}
	}
exibe(pilhaCF a){
	int i;
		if(a.id==1){
			for(i=0;i<=a.topo;i++){
				printf("\nnodo = %d conteudo = %d\n",i,a.a[i]);
			}
		}
}
void msn(int a){
	switch (a){
		case 0:
			printf("\nSucesso\n");
			break;
		case 1:
			printf("\nPilha Cheia\n");
			break;
		case 2:
			printf("\nPilha Vazia\n");
			break;
		case 3:
			printf("\nNao esta na pilha\n");
			break;
		case 4:
			printf("\nEsta na pilha\n");
			break;
		case 5:
			printf("\nErro pilha ja criada\n");
			break;
		case 6:
			printf("\nErro pilha nao criada\n");
		break;
	}
}
int consulta(pilhaCF *a,int p,int *d){
	int i,j;
	pilhaCF b;
	if(a->id==0){
		return erro1;
	}
	for(i=a->topo;i>=0;i--){
		if(p==a->a[i]){
			for(j=b.topo;j>0;j--){
				desempilha(&b,d);
				empilha(a,*d);
			}
			return esta;
		}else{
			desempilha(a,d);
			empilha(&b,*d);
		}
	}
	for(j=b.topo;j>0;j--){
				desempilha(&b,d);
				empilha(a,*d);
			}
	return naoEsta;
	
	
}

main(){
	int x,dado,m,p;
	pilhaCF a,b;
	a.id=0;
	printf("0-Sair\n1-Cria pilha\n2-Empilha\n3-Desempilha\n4-Exibe\n5-Consulta\n");
	scanf("%d",&x);
	while(x!=0){
		switch (x){
			case 1:
				m=criaLista(&a);
				break;
			case 2:
				printf("\nDidite o dado\n");
				scanf("%d",&dado);
				m=empilha(&a,dado);
				break;
			case 3:
				m=desempilha(&a,&dado);
				if(m==0){
					printf("\nDesempilhado o valor %d\n",dado);
					sleep(2);
				}
				break;
			case 4:
				m=exibe(a);	
				break;
			case 5:
				printf("\nDigite um valor a ser consultado\n");
				scanf("%d",&p);
				m=consulta(&a,p,&dado);
				break;
		}
			system("cls");
		
			printf("0-Sair\n1-Cria pilha\n2-Empilha\n3-Desempilha\n4-Exibe\n5-Consulta\n");
			msn(m);
			exibe(a);	
			scanf("%d",&x);
		
	}
}
