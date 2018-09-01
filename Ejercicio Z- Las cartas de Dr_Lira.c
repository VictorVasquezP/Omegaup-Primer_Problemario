#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, tip, cost1, cost2;
	char *cartas;
	scanf("%d", &n);
	cartas=(char*)malloc(n*sizeof(char));
	scanf("%s", cartas);
	cost1 = 0;
	for(int i = 0, tip = 0; i < n; i++, tip++)
	{
		if(tip % 2 == 0)
		{
			if(cartas[i] == 'B')
				cost1++;
		}
		else
		{
			if(cartas[i] == 'W')
				cost1++;
		}
	}
	cost2 = 0;
	for(int i = 0, tip = 1; i < n; i++,tip++)
	{
		if(tip % 2 == 0)
		{
			if(cartas[i] == 'B')
				cost2++;
		}
		else
		{
			if(cartas[i] == 'W')
				cost2++;
		}
	}
	if(cost1<cost2){
		printf("%i",cost1);
	}
	else{
		printf("%i",cost2);		
	}
	free(cartas);
	return 0;
}
