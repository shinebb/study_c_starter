#include <stdio.h>

int main(void)
{
	char x = 'A';
	printf("%c \n", x);
	
	char y = 65; //아스키코드 
	printf("%c \n", y);
	
	int j = 65; //int형이지만 출력은 char하기 때문에 A 
	printf("%c \n", j);
	
	char z = 'B'; //char형이지만 출력은 int하기 때문에 66
	printf("%d \n", z);
	
	return 0; 
}
