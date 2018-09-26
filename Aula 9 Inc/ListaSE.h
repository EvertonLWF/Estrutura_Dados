#ifndef ListaSE_H
#define ListaSE_H
#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CODIGO_INEXISTENTE 3
#define EXISTE 4

typedef struct{
	int cod;
	float peso;
	
}Dado;

typedef struct nodo Nodo;

struct nodo{
	Dado info;
	Nodo *prox;
};
typedef struct{
	Nodo *inicio;
}ListaSE; 

void criaLista(ListaSE *l);//ok
void exibe(ListaSE l);
int estaVazia(ListaSE l);
int incluiNoFim(ListaSE *l,Dado d);//ok item 6
int existe(ListaSE l,int cod); //ok item 8
int incluiDepois(ListaSE *l,int cod,Dado d);
int incluiNoInicio(ListaSE *l,Dado d); //ok item 2
void quantidadeDeNodos(ListaSE l);//ok item 3
int excluiDoInicio(ListaSE *l,Dado *d);//ok item 5
int excluiDoFim(ListaSE *l,Dado *d);//ok item 7
int excluiNodo(ListaSE *l,int cod,Dado *d);
int msn(int a);//ok
int exibeSituacaoDaLista(ListaSE l);//ok  item 4
int consultaPorCodigo(ListaSE l,int cod,Dado *d);//ok item 9

#endif
