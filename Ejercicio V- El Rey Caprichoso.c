#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int mayor = 0, numerador = 0, contador = 0;
	int interruptor = 0, multiplicador = 0, multiplo = 0,n;
	int i,j,*num;
	scanf("%d",&n);
	num=(int*)malloc(n*sizeof(int));
	for (i = 0; i < n; i++){
		numerador++;
		scanf("%d", &num[i]);
		if (num[i] > mayor){
			mayor = num[i];
		}
	}
	while (interruptor == 0){
		contador = 0;
		multiplicador++;
		multiplo = mayor * multiplicador;
		for (j = 0; j < n; j++){
			if (multiplo % num[j] == 0){
				contador++;
			}
		}
		if (contador == n){
			interruptor = 1;
		}
	}
	printf("%d",multiplo);
	free(num);
	return 0;
}

