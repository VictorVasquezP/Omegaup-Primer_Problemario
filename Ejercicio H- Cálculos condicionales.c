#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int a,b=0;
	scanf("%d",&a);
	if(a%2==0){
		a=a/2;
		b=b+1;
		if(a<10){
			printf("%d",a);
			printf(" %d",b);
		}else{
			if(a>100){
				a=a/100;
				b=b+1;
				if(a%3==0){
					a=a-1;
					b=b+1;
					printf("%d",a);
					printf(" %d",b);;
				}else{
					printf("%d",a);
					printf(" %d",b);
				}
			}else{
				a=a/10;
				b=b+1;
				if(a%3==0){
					a=a-1;
					b=b+1;
					printf("%d",a);
					printf(" %d",b);
				}
				else{
					printf("%d",a);
					printf(" %d",b);
				}
				
			}
		}
		
	}else{
		a=a+1;
		b=b+1;
		if(a<10){
			printf("%d",a);
			printf(" %d",b);
		}else{
			if(a>100){
				a=a/100;
				b=b+1;
				if(a%3==0){
					a=a-1;
					b=b+1;
					printf("%d",a);
					printf(" %d",b);
				}
				else{
					printf("%d",a);
					printf(" %d",b);
				}
			}else{
				a=a/10;
				b=b+1;
				if(a%3==0){
					a=a-1;
					b=b+1;
					printf("%d",a);
					printf(" %d",b);
				}
				else{
					printf("%d",a);
					printf(" %d",b);
				}
			}
		}
	}
	return 0;
}
