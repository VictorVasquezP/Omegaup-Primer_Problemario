#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
int cang,num,fila[100000],l=0,Total=0,j;
char a;
scanf("%i %i",&cang,&num);
while(num!=0){
	scanf("%c",&a);
	switch(a){
	case 'N':
		scanf("%i",&fila[l]);
		fila[l]++;
		l++;
		Total++;
		num--;
		break;
	case 'A':
		cang=cang-fila[0];
		for(j=0;j<(Total-1);j++){
			fila[j]=fila[j+1];
		}
		Total--;
		l--;
		num--;
		break;
	case 'C':
		printf("%i\n",Total);
		num--;
		break;
	case 'R':
		printf("%i\n",cang);	
		num--;
		break;
	}       
}
return 0;
}
