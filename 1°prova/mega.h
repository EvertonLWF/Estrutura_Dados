#ifndef MEGA_H
#define MEGA_H

#define MAX_NODOS 5 
#define SUCESSO 0
#define LISTA_VAZIA 1
#define LISTA_CHEIA 2
#define POSICAO_INEXISTENTE 3

typedef struct {
     int n;
     int v[MAX_NODOS];
     } ListaCF;

int criaLista(ListaCF *l);
void exibe(ListaCF l);
int estaVazia(ListaCF l);
int estaCheia(ListaCF l);
int incluiAntes(ListaCF *l, int num);
int incluiNoFim(ListaCF *l, int num);
int incluiNaOrdem(ListaCF *l, int num);

#endif
