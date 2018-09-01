#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int a,i,b,sum,cont=0,j,*vec;
	scanf("%d %d",&a,&b);
	vec = (int*)malloc(a * sizeof(int));
	if (vec==NULL)
	{
		exit (1);
	}
	else{
		for(i=0;i<a;i++){
			scanf("%d",&vec[i]);
		}
		for(i=0;i<a-b;i++){
			sum=0;
			for(j=0;j<b;j++){
				sum+=vec[i+j];
			}
			if(sum>cont){
				cont=sum;
			}
		}
	}
	
	printf("%d",cont);
	free (vec);
	return 0;
}
