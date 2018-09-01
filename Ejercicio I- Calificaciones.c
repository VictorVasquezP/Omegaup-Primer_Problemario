#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a,b,c,promedio;
	scanf("%d" "%d" "%d",&a,&b,&c);
	a=fabs(a);
	b=fabs(b);
	c=fabs(c);
	promedio=(a+b+c)/3;
	if(promedio>5){
		printf("1");
	}else{
		printf("0");
	}
	return 0;
}
