#ifndef lista_7_H
#define lista_7_H

#define SUCESSO 0
#define LISTA_CHEIA 1
#define LISTA_VAZIA 2
#define MAX_NODOS 5
#define ERRO 3
typedef struct{
	int a[MAX_NODOS];
	int t;
}pilhaCF;

int empilha(pilhaCF *a,int dado);
int desempilha(pilhaCF *a,int *dado);
int estaCheia(pilhaCF a);
int estaVazia(pilhaCF a);
void realizaConta(pilhaCF *a,pilhaCF *b,float *r);

#endif
