typedef struct{
	int a,b;
}jogador;

jogador le_jogador(void);
void Escreve_jog(jogador a);
void eh_goleador(jogador a);

int main(){
	int b;
	jogador jog;
	jog = le_jogador();
}
