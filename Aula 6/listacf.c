#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>
#include"listaCF.h"

	void criaLista(listaCF *a){
		a->n=0;
	}
	void exibe(listaCF a){
		int b;
		if(a.n==0){
			printf("Lista esta vazia !!!!");
		}
		for(b=0;b<a.n;b++){
			if(b==0){
				printf(" _______________________________________\n|\t\t\t\t        |");
			}
			
			printf("\n| Nodo = %.3d |Codigo = %.3d |Peso = %.2f |",b+1,a.v[b].cod,a.v[b].peso);
			
		}
		if(b==a.n&&a.n!=0){
			printf("\n|_______________________________________|");
		}
	}
	int estaCheia(listaCF a){
		if(a.n==MAX_NODOS){
			return 1;
		}
		else{
			return 0;
		}
	}
	int excluiDoFim(listaCF *a,Dado *b){
		int x;
		x=a->n;
		if(a->n==0){
			return LISTA_VAZIA;
		}else{
			b->cod=a->v[x-1].cod;
			b->peso=a->v[x-1].cod;
			a->n--;
			return SUCESSO;
		}
	}
	int excluiDoInicio(listaCF *a,Dado *b){
		int x;
		if(a->n==0){
			return LISTA_VAZIA;
		}
			else{
			*b=a->v[0];
			for(x=0;x<a->n;x++){
				a->v[x]=a->v[x+1];
			}
			a->n--;
			return SUCESSO;
		}
	}
	int existe(listaCF a,int b){
		int x,y=0;
		for(x=0;x<a.n;x++){
			if(b==a.v[x].cod){
				y++;
			}
		}
		if(y==0){
			return 0;
		}
		else{
			return 1;
		}
		
	}
	int incluiNaPosicao(listaCF *a,int b,Dado c){
		int y,x;
		if(a->n==MAX_NODOS){
			return LISTA_CHEIA;
		}
		for(x=1;x<=a->n;x++){
			if(b==x){
				a->n++;
				for(y=a->n;y>=x;y--){
					a->v[y]=a->v[y-1];
				}
				a->v[x-1].cod=c.cod;
				a->v[x-1].peso=c.peso;
					
				return SUCESSO;
				
			}
			
		}
		return POSICAO_INVALIDA;
	}
	int incluiAntes(listaCF *a,int b,Dado c){
		int x,y;
		Dado aux;
		if(a->n==MAX_NODOS){
			return LISTA_CHEIA;
		}
		else{
			a->n++;
			for(x=a->n;x>=b;x--){
				a->v[x]=a->v[x-1];
			
			}
					
					a->v[b-1]=c;
					return SUCESSO;
		}
			return POSICAO_INVALIDA;
		}
	int incluiNoFim(listaCF *a,Dado b){
		int x,y;
		Dado aux;
		if(a->n==MAX_NODOS){
			return LISTA_CHEIA;
		}
		else{
				a->v[a->n]=b;
				a->n++;
				return SUCESSO;
			}
		}
	int quantidadeDeNodos(listaCF a){
		int b;
		return b=a.n;
	}
	int estaVazia(listaCF a){
		int b;
		if(a.n==0){
			return b=1;
		}else{
			return b=0;
		}
	}
	int incluiNoInicio(listaCF *a,Dado b){
		int x;
		if(a->n==MAX_NODOS){
			return LISTA_CHEIA;
		}else{
			a->n++;
			for(x=a->n;x>=0;x--){
				a->v[x+1]=a->v[x];
			}
			a->v[0]=b;
			return SUCESSO;
		}
	}
	int consultaPorPosicao(listaCF a,int b,Dado *c){
		int x,y;
		for(x=1;x<=a.n;x++){
			if(b==x){
				c->cod=a.v[x-1].cod;
				c->peso=a.v[x-1].peso;
				return SUCESSO;
			}
		}
		return POSICAO_INVALIDA;
		
		
	}
	int consultaPorCodigo(listaCF a,int b,Dado *c,int *z){
		int x;
		if(a.n==0){
			return CODIGO_INEXISTENTE;
		}else{
			for(x=0;x<a.n;x++){
				if(b==a.v[x].cod){
					c->peso=a.v[x].peso;
					c->cod=a.v[x].cod;
					*z=x+1;
					return SUCESSO;
		 		}
			}
			return CODIGO_INEXISTENTE;
		}		
	}
	int excluiDaPosicao(listaCF *a,int b,Dado *c){
		int x,y;
		for(x=1;x<=a->n;x++){
			
			if(b==x){
				*c=a->v[x-1];
				for(y=x;y<a->n;y++){
					a->v[x-1]=a->v[x];
				}
				a->n--;
				return SUCESSO;
				
			}
		}
		return POSICAO_INVALIDA;
	}
	int excluiNodo(listaCF *a,int b,Dado *c){
		int x,y;
		if(a->n==0){
			return LISTA_VAZIA;
		}
		else{
			for(x=0;x<a->n;x++){
				if(b==a->v[x].cod){
					c->cod=a->v[x].cod;
					c->peso=a->v[x].peso;
					for(y=b;y<=a->n;y++){
						a->v[y-1]=a->v[y];
					}
					a->n--;
					return SUCESSO;
				}
			}
			return CODIGO_INEXISTENTE;	
		}
	}
	void exibeSituacao(listaCF a){
		if(a.n==MAX_NODOS){
			printf("\nA lista esta cheia\n");
		}
		if(a.n==0){
			printf("\nA lista esta vazia\n");
		}
		if(a.n>0&&a.n<MAX_NODOS){
			printf("A lista possue %d nodo(s)",a.n);
		}
		sleep(2);
	}
