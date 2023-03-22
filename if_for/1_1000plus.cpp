#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	while(i <= 1000) //조건문이 참일때, 거짓일때까지 계속해서 돌아감 
	{
		sum = sum + i;
		i++;	
	}
	printf("1부터 1000까지의 합은 %d입니다.", sum);
	return 0;
}
