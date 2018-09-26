#ifndef PilhaSE_H
#define PilhaSE_H
#define SUCESSO 0;
#define PILHA_VAZIA 1;
#define FALTOU_MEMORIA 2;
typedef struct nodo Nodo;

struct nodo{
	int info;
	Nodo *prox;
};
typedef struct{
	Nodo *topo;
}Pilha;
void criaPilha(Pilha *p);
int desempilha(Pilha *p,int *d);
int consultaPilha(Pilha p,int *d);
int empilha(Pilha *p,int d);
int estaVazia(Pilha p);
int msn(int a);
void exibe(Pilha p);

#endif
