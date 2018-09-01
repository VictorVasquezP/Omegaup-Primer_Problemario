#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,b,*vec;
	scanf("%d",&b);
	vec = (int*)malloc(b * sizeof(int));
	if (vec==NULL)
	{
		exit (1);
	}
	else{
		for(int i=0;i<b;i++){
			scanf("%d",&a);
			vec[i]=a;
		}
		for(int i=0;i<b;i++){
			if(vec[i]%3==0 || vec[i]%5==0){
				if(vec[i]%3==0 && vec[i]%5==0){
					printf("FizzBozz");
				}
				else{
					if(vec[i]%3==0){
						printf("Fizz");
					}else{
						if(vec[i]%5==0){
							printf("Bozz");
						}
					}
				}
			}else{
				printf("NoFizzBozz");
			}
			printf("\n");
		}
	}
	free (vec);
	return 0;
}
