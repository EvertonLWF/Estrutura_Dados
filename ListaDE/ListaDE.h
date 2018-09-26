#ifndef ListaDE_H
#define ListaDE_H
#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_N 3
typedef struct {
	int cod;
	float peso;
}Dado;
typedef struct nodo Nodo;
struct nodo{
	Dado info;
	Nodo *prox;
	Nodo *ant;
};
typedef struct {
	int n;
	Nodo *inicio;
	Nodo *fim;
}ListaDE;
void criaLista(ListaDE *l);
void exibe(ListaDE l);
int estaVazia(ListaDE l);
int incluiNoFim(ListaDE *l,Dado d);
int existe(ListaDE l,int cod);
int incluiDepois(ListaDE *l,int cod,Dado d);
int incluiNoInicio(ListaDE *l,Dado d);
void quantidadeDeNodos(ListaDE l);
int excluiDoInicio(ListaDE *l,Dado *d);
int excluiDoFim(ListaDE *l,Dado *d);
int excluiNodo(ListaDE *l,int cod,Dado *d);
int msn(int a);
int exibeSituacaoDaLista(ListaDE l);
int consultaPorCodigo(ListaDE l,int c,Dado *d);


#endif
