#include <stdlib.h>
#include<stdio.h>
int main(int argc, char *argv[]){
	int f,g,h;
	scanf("%i %i %i",&f,&g,&h);
	if(f>h && f>g){
		printf("\nEl numero mayor es %i",f);
	}
	else{
		if(g>h && g>f){
			printf("\nEl numero mayor es %i",g);
		}
		else{
			printf("El numero mayor es %i", h);
		}
	}
	return 0;
}
