#include <stdio.h>
int main(int argc, char *argv[]) {
	int b,pa=0,im=0,a,par=0,impar=0;
	scanf("%d",&b);
	for(int i=0;i<b;i++){
		scanf("%i",&a);
		if(a%2==0){
			par=par+a;
			pa++;
		}else{
			impar=impar+a;
			im++;
		}
	}
	int c,d;
	d=impar/im;
	c=par/pa;
	if(c!=d){
		if(c>d){
			printf("APARICIO");
		}else{
			printf("NONILA");
		}
	}else{
		printf("EMPATE!");
	}
	return 0;
}
