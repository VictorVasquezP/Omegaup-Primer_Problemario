#include <stdio.h>
#define dia 24
#define min 60
int main(int argc, char *argv[]) {
	int a,b,c,d,h,m;
	scanf("%d" "%d" "%d" "%d",&a,&b,&c,&d);
	if(a>c){
		if(b==0){
			h=(dia-a)+c;
			printf("%d\n",h);
			printf("0");
		}else{
			if(d==b){
				h=(dia-a)+c;
				m=d-b;
				h=h+1;
				printf("%d\n",h);
				printf("%d",m);
			}
			else{
				if(d>b){
					h=(dia-a)+c;
					m=d-b;
					h=(dia-a)+c;
					m=d-b;
					printf("%d\n",h);
					printf("%d",m);
				}
				else{
					h=((dia-a)+c)-1;
					printf("%d\n",h);
					m=(min-b)+d;
					printf("%d",m);
				}
			}
		}
		
	}else{
		if(d==0){
			h=c-a;
			printf("%d\n",h);
			printf("0");
		}
		else{
			if(d==b){
				h=c-a;
				m=d-b;
				printf("%d\n",h);
				printf("%d",m);
			}else{
				if(d>b){
					h=c-a;
					printf("%d\n",h);
					m=d-b;
					printf("%d",m);
				}
				else{
					h=(c-a)-1;
					printf("%d\n",h);
					m=(min-b)+d;
					printf("%d",m);
				}
			}
		}
		
	}
	return 0;
}
