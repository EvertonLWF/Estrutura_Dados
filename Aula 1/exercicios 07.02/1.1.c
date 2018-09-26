#include<stdio.h>
#include<stdlib.h>

main(){
	int Q,a,b=0,alt,max,s;
	float medf=0;
	
	printf("digite Q");
	scanf("%d",&Q);
	for(a=1;a<=Q;a++){
		printf("\ndigite o sexo do %d aluno 1-M 2-F",a);
		scanf("%d",&s);
		while(s>2||s<1){
			printf("\ninvalido digite novamente");
			scanf("%d",&s);
		}
		printf("digite a altura do %d aluno em centimetros",a);
		scanf("%d",&alt);
		if(s==1){
			if(max<alt){
				max=alt;
			}
		}else{
			medf=medf+alt;
			b++;
		}
	}
	medf=medf/b;
	printf("media feminina %.2f",medf);
	printf("\nMaior aluno eh %d",max);
}
