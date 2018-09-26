#ifndef ListaSE_H
#define ListaSE_H

#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CONTATO_INEXISTENTE 3

typedef struct{
	int num;
	char nome[10];
}Contato;

typedef struct nodo Nodo;
struct nodo{
	Contato info;
	Nodo *prox;
};

typedef struct{
	Nodo *inicio;
}ListaSE;

void criaLista(ListaSE *lt);
int incluiAntes(ListaSE *lt,int tel,Contato cont);
int incluiDepois(ListaSE *lt,int tel,Contato cont);
int consultaContato(ListaSE lt,int tel,Contato *cont);
int excluiContato(ListaSE *lt,int tel,Contato *cont);
void exibeLista(ListaSE lt);

#endif

