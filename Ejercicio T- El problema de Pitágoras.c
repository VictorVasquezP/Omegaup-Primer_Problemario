#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int i,j,k, num1,num2,c=0,a;
	scanf("%d" "%d",&num1,&num2);
	for(i=num1; i <= num2; i++){
		for(j=num1; j <= num2; j++){
			for(k=num1; k <= num2; k++){
				if(pow(i,2) + pow(j,2) == pow(k,2)){
					c++;
				}
			}
		}
	}
	a=c/2;
	printf("%d",a);
	return 0;
}
