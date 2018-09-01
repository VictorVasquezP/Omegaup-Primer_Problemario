#include <stdio.h>
#include <string.h>
#define min 97
int main(){
	int longitud,cont=0,cont2=0,aux;
	char vec[1000000];
	scanf("%[^\n]",&vec[cont]);
	longitud= strlen(vec);
	int cont3=0,cont4=0;
	for(int i=0;i<longitud;i++){
		if(vec[i]>=min){
			cont3+=vec[i]-32;
		}else{
			cont4+=vec[i];
		}
	}
	aux=cont3+cont4;
	for(int j=1;j<aux;j++){
		if(aux%j==0){
			cont2+=1;
		}
	}
	printf("%d",cont2+1);
	return 0;
}
