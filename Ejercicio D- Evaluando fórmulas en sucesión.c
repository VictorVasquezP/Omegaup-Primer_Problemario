#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	float x,y,z;
	scanf("%f",&x);
	y=(x+5)/(2*(x+1));
	z=((pow(y,2))+(x*(x-(2*y))))/(x*y);
	printf("%f",z);
	return 0;
}
