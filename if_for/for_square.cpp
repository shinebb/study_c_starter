#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for(i=0; i<N; i++) //i는 0부터 i가 N보다 작을때 까지 수행되면 한번 수행될 때마다 i는 1씩 증가한다. 
	{
		for(j=0; j<N; j++)
		{
			printf("★");
		}
		printf("\n");	
	}
	
	return 0;
}
