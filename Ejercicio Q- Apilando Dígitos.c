#include <stdio.h>
int main(int argc, char *argv[]) {
	int i,num,j;
	scanf("%d",&num);
	for( i=1;i<=num; i++){
		for(j=1; j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
		
	}
	for(i=num-1;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}
