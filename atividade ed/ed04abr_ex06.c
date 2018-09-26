#include <stdio.h>
#include <stdlib.h>
#include "ed04abr_listacf.h"

//Lucas Büttow{
void criaLista (ListaCF *l) {
 	l->n = 0;
}
int excluiDoInicio(Dado *d, ListaCF *l){
	
	int i;
	
	if(l->n==0)
		return LISTA_VAZIA;

	else{
		*d=l->v[0];
	
		for(i=1;i<l->n;i++){
			l->v[i-1]=l->v[i];
		}
		
		l->n--;
		
		return SUCESSO;
	}	
}
void exibe(ListaCF l){
	int i;
	
	for(i=0; i<l.n; i++){
	printf("%d\n",l.v[i].cod);
	printf("%.2f\n",l.v[i].peso);
	}
}
int quantidadeDeNodos(ListaCF l){
	printf("Quantidade de nodos: %d\n",l.n);
}
int estaCheia(ListaCF l){
	
	if(l.n==MAX_NODOS)
		return 1;
	else
		return 0;
}
int estaVazia(ListaCF l){
	
	if(l.n==0)
		return 1;
	else
		return 0;
}
//Lucas Büttow}

//giovana
int consultaPorCodigo (ListaCF l, int cod, Dado *d){
		int i;
	for (i=0;i<list.n;i++){
		if (list->v[i].cod==cod){
			da->cod=list->v[i].cod;
			da->peso=list->v[i].peso;
			return SUCESSO;
		} else{
			return CODIGO_INEXISTENTE;
		}
	}
}

//Lauren
int incluiAntes(ListaCF *l,int cod,Dado d){
int i,aux;
if(lt->n==MAX_NODOS)
  return LISTA_CHEIA;
else{
for(i=0;i<lt->n;i++){
 if(lt->v[i]==cod){
  aux=lt->v[i-1];
  lt->v[i-1]=d;
  lt->v[i]=aux;
   lt->n++;
return SUCESSO;
}else
return CODIGO_INEXISTENTE;
} 
}   
 }
//Airton
int excluiDoFim (*ListaCF l, *Dado d){
    if (l->n==0){
        return LISTA_VAZIA;
    }
    else {
        *d=l->v[l->-1];
        l->n--;
        return SUCESSO;
    }
}
//Airton

//Fabricio
int incluiNoFim(ListaCF *l, Dado d) {
 if (lt->n==MAX_NODOS){
 	return LISTA_CHEIA;
 }
 else{
 	lt->v[lt->n]= d;
 	lt->n++;
 	return SUCESSO;
 }


//Leonardo Adamoli
//excluiDaPosicao
int excluiDaPosicao (int posicao, ListaCF *lista, Dado *d) {

	int i;

	if (posicao >  lista->n)
		return POSICAO_INVALIDA;
	else {
		*dado = lista->v[posicao - 1];
		for (i = posicao - 1; i < n; i++)
			lista->v[i] = lista->v[i + 1];
		lista->n--;
		return SUCESSO;
	}
}

/* José Felipe Koth Sedrez*/
int incluiNaPosicao(Dado dd,int po,ListaCF *lt) 
{
	int i;
	
	if(lt->n==MAX_NODOS)
		return LISTA_CHEIA;
	else if(po<1 || po>lt->n+1)
		return POSICAO_INVALIDA;
	else
	{
		for(i=lt->n;i>=po;i--)
		{
			lt->v[i]=lt->v[i-1];
		}
		lt->v[po-1]=dd;
		lt->n++;
		return SUCESSO;
	}
}
//Everton Feijó

	int consultaPorPosicao(ListaCF a, int b,Dado *c){
	int x;
	for(x=1;x<=a.n;x++){
		if(b==x){
			*c=a.v[x-1];
			return SUCESSO;
		}
	}
		return POSICAO_INVALIDA;
}

/* Marcos Luçardo */
int excluiNodo(ListaCF *li,int cd,Dado *d){
	int i,j;
	for(i=0;i<li->n;i++){
		if(cd == li->v[i].cod){
			*d = li->v[i];
			li->n--;
			for(j=i;j<li->n;j++){
				li->v[j]=li->v[j+1];
			}
			return SUCESSO;
		}
		else
		    return CODIGO_INEXISTENTE;	
	}
}

//Everton Vargas// 
int existe(ListaCF lt,int X){
	int c,flag=0;
	for(c=0;c<lt.n;c++){
		if(lt.v[c].cod==X){
		flag=1;
		break;	
		}
		else{
		flag=0;	
		}
	}
	if(flag==1){
		return 1;
	}
	else{
		return 0;
	}	
}
//Christopher
int incluiNoInicio (ListaCF *lt, Dado d) {
	if (lt->n==MAX_NODOS)
		return LISTA_CHEIA;
	else 
		if (lt->n==0) {
			lt->v[lt->n] = d;
			lt->n++;
		} else {
		for (i=lt->n; i=0; i--) {
			lt->n=lt->n-1;
			}
			lt->v[0] = d;
			lt->n++;
			return SUCESSO;
		}
				
}
