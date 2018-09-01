#include <stdio.h>
#define dia 1
int main(int argc, char *argv[]) {
	int p,s,r,d=0,cont=0;
	do{
		scanf("%i %i %i",&p,&s,&r);
	}while(r>s);
	cont=s;
	while(p>cont){
		cont-=r;
		cont+=s;
		d+=dia;
	}
	d+=dia;
	printf("%i",d);
	return 0;
}
