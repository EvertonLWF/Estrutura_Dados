#ifndef ListaSE_H
#define ListaSE_H
#define SUCESSO 0
#define LISTA_VAZIA 1
#define FALTOU_MEMORIA 2
#define CONTATO_INEXISTENTE 3
typedef struct {
	 int num;
	 char nome[10];
} Contato;
typedef struct nodo Nodo;
struct nodo {
	 Contato info;
	 Nodo *prox;
};
typedef struct {
	 Nodo *inicio;
} Lista;
void criaLista(Lista *l);
int incluiAntes(Lista *l,Contato c,int cod);
void exibeLista(Lista l);
int consultaContato(Lista l,Contato *c,int num);
int incluiDepois(Lista *l,Contato c,int cod);
int excluiContato(Lista *l,Contato *c,int cod);
void msn(int a);
int incluiNoInicio(Lista *l,Contato c);
#endif
