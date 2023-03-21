#include <stdio.h>

int main(void)
{
	int x; //정수형 변수
	x = 5;
	printf("%d\n", x);
	printf("변수 x의 메모리 크기는 %d입니다.", sizeof(x));  //int형 변수 크기 4 
	return 0;
}
