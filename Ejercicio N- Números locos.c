#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[]) {
	int dato,cant, a, cont=0;
	scanf("%d", &dato);
	scanf("%d", &cant);
	int vec[cant];
	int i;
	for (i=1; i<=cant; i++){
		scanf("%d", &a);
		vec[i]=a;
	}
	int loco;
	for (i=1; i<=cant; i++){
		if (i<cant)
			loco=vec[i]+vec[i+1];
		else{
			loco=vec[i]+vec[1];
		}
		if (loco%dato==0){
			cont+=1;
		}
	}
	printf("%d",cont);
	return 0;
}
