#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int m,n,*vec,*vec2,i,j,a;
	scanf("%d",&m);
	vec = (int*)malloc(m * sizeof(int));
	if (vec==NULL)
	{
		exit (1);
	}
	else{
		for(i=0;i<m;i++){
			scanf("%d",&vec[i]);
		}
		scanf("%d",&n);
		vec2 = (int*)malloc(n * sizeof(int));
		for(j=0;j<n;j++){
			scanf("%d",&vec2[j]);
		}
		for(a=0;a<m;a++){
			if(vec[a]!=vec2[a]){
				printf("0");
			}
			for(int b=0;b<n;b++){
				if(vec[a]==vec2[b]){
					printf("%d",a+1);
				}
			}
		}
	}
	free (vec);
	free (vec2);
	return 0;
}
