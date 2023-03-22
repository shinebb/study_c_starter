#include <stdio.h>
#define N 20

int main(void)
{
	int i, j; //java와 다르게 for문안에 int를 선언할 수 없기 때문에 미리 선언해 주어야 한다. 
	for(i=0; i<N; i++)
	{
		for(j=N-i-1; j>0; j--) //공백을 줌으로서 별의 위치 설정 
		{
			printf(" ");
		}
		for(j=0; j<i; j++)
		{
			printf("★");
		}
		for(j=0; j<i-1; j++)
		{
			printf("★");
		}
		printf("\n"); 
	}
	return 0;
}
