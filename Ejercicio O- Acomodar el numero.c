#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
	int numeros,i,con=0;
	scanf("%i",&numeros);
	struct nodo{
		int p;
	}nodo[numeros];
	for(i=0;i<numeros;i++){
		scanf("%i",&nodo[i].p);
	}
	int j=0;
	do{
		if(nodo[0].p > nodo[j].p)
			con++;
		j++;
	}while(j!=numeros);
	printf("%i",con);
}
