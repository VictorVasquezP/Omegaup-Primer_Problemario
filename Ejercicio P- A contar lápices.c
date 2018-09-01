#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int num,*vec,i,b,c=0;
	scanf("%d" "%d",&b,&num);
	vec = (int*)malloc(b * sizeof(int));
	if (vec==NULL)
	{
		exit (1);
	}
	else{
		for(i=0;i<b;i++){
			scanf("%d",&vec[i]);
			if(vec[i]==num){
				c++;
			}
		}
	}
	printf("%d",c);
	free (vec);
	return 0;
}
