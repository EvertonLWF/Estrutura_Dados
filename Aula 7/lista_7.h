#ifndef lista_7_H
#define lista_7_H

#define SUCESSO 0
#define LISTA_CHEIA 1
#define LISTA_VAZIA 2
#define MAX_NODOS 5
typedef struct{
	int a[MAX_NODOS];
	int t;
}pilhaCF;
typedef struct {
   pilhaCF p; 
} Li;

int empilha(pilhaCF *a,int dado);
int desempilha(pilhaCF *a,int *dado);
int estaCheia(pilhaCF a);
int estaVazia(pilhaCF a);
int criaLista(Li *a,pilhaCF *b,int Maxnodos);
int incluiNoInicio(Li *a,int dado);
int incluiNoFim(Li *a,int dado);
int excluiDoInicio(Li *a, int *dado);
int excluiDoFim(Li *a, int *dado);
#endif
