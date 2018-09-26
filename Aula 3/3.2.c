#include<stdio.h>
struct hora{
	int h,m,s;
};
main(){
	struct hora H[2];
	int a;
	long int b,c;
	printf("digite os horarios no formato HH:MM:SS");
	for(a=0;a<2;a++){
		scanf("%d%d%d",&H[a].h,&H[a].m,&H[a].s);
	}
	b=(H[0].h*3600)+(H[0].m*60)+(H[0].s);
	b=(H[1].h*3600)+(H[1].m*60)+(H[1].s);
	if(b<c){
		printf("%d:%d:%d:",H[0].h,H[0].m,H[0].s);
	}
	else{
		if(b>c){
			printf("%d:%d:%d:",H[1].h,H[1].m,H[1].s);	
		}
		else{
			printf("Horarios iquais");
		}
	}
}
