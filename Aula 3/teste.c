#include<stdio.h>
#include<locale.h>

typedef struct{
	int cam,gol;
}jogador;

typedef struct{
	jogador jogadores[5];
	int ano;
}equipe;

jogador lejogador(void);
void escrevejogador(jogador ej);
int ehgoleador(jogador a);

main(){
	
}
jogador lejogador(){
	jogador lj;
	scanf("%d%d",&lj.cam,&lj.gol);
	return lj;
}
