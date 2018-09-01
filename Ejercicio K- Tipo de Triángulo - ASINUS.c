#include <stdio.h>
#define t 180
int main(int argc, char *argv[]) {
	int a,b,c;
	scanf("%d" "%d" "%d",&a,&b,&c);	
	if(a+b+c==t){
		if(a==b && b==c){
			printf("EQUILATERO");
		}else{
			if(a==b || b==c || c==a){
				printf("ISOSCELES");
			}else{
				printf("ESCALENO");
			}
		}
	}else{
		printf("ERROR");
	}
	return 0;
}
