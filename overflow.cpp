#include <stdio.h>
#include <limits.h> //INT_MAX를 사용하려면 include 해줘야함 

int main(void)
{
	int x = INT_MAX; //int이 가질 수 있는 최고로 큰 값. 
	printf("int형의 최댓값 x는 %d입니다.\n", x);
	printf("x + 1는 %d입니다.\n", x + 1); //오버플로우 : 값이 초과됨 - 오버플로우가 되면 음수가 된다. 
	return 0;
} 
