#ifndef ed04abr_listacf_H
#define ed04abr_listacf_H

#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INVALIDA 3
#define CODIGO_INEXISTENTE 4
#define MAX_NODOS 5

typedef struct {
	int cod;
	float peso;
}Dado;

typedef struct{
	int n;
	Dado v[MAX_NODOS];
}ListaCF;

int incluiNoFim(ListaCF *lt, Dado d);
int excluiDoFim (*ListaCF l, *Dado d);
int quantidadeDeNodos(ListaCF l);
int estaCheia(ListaCF l);
int estaVazia(ListaCF l);
int consultaPorPosicao(ListaCF a, int b,Dado *c);
int incluiAntes(ListaCF *lt,int cod,Dado d);
int incluiNaPosicao(Dado dd,int po,ListaCF *lt);
int incluiNoInicio(ListaCF *lt, Dado d);
int consultaPorCodigo(ListaCF list, int cod, Dado *da);
int excluiNodo(ListaCF *li,int cd, Dado *d);
int existe(ListaCF lt,int X); 
#endif
