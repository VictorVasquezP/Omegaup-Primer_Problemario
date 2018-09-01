#include <stdio.h>
int main(int argc, char *argv[]){
	int n, i, num;
	int vec[n];
	int temp = 0;
	int a = 0;
	scanf("%d", &n);
	for (i=0; i<n; i++){
		scanf("%d",&num);
		vec[i] = num;
	}
	for (i=0; i<n; i++){
		temp=temp*10+vec[i];
	}
	for(i = n-1;  i>=0 ; i--){
		a= a*10+vec[i] ;
	}
	if(temp == a){
		printf("SI");
	}else{
		printf("NO");
	}
	return 0;
}
