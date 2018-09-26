#include<stdio.h>
#include<locale.h>

struct data{
	int d,m,a;
};
struct aluno{
	struct data dt;
};

main(){
	setlocale(LC_ALL,"Portuguese");
	struct aluno al[5];
	struct data a,b[5],c[5];
	int x,y=0,i[5],z;
	printf("digite uma data no formato DD:MM:AAAA\n");
	scanf("%d%d%d",&a.d,&a.m,&a.a);
	printf("Data ---> %d/%d/%d\n",a.d,a.m,a.a);
	for(x=0;x<5;x++){
		printf("Digite a data de nascimento do %d° aluno:",x+1);
		scanf ("%d%d%d",&al[x].dt.d,&al[x].dt.m,&al[x].dt.a);
		if(al[x].dt.m==a.m){
			c[y].d=al[x].dt.d;
			c[y].m=al[x].dt.m;
			c[y].a=al[x].dt.a;
			i[y]=x+1;
			y++;
		}
	}
	printf("Datas de nascimento de alunos que nasceram no mês de %d: \n",a.m);
	printf("|\n|\n|");
	for(x=0;x<y;x++){	
		printf("\n|Data: aluno %d° nasceu em %d/%d/%d",i[x],c[x].d,c[x].m,c[x].a);
	}
}
