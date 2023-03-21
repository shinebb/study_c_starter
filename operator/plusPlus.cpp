#include <stdio.h>


int main(void)
{
	int x = 0;
	printf("현재의 x는 %d입니다.\n", x); //0
	
	x++;
	printf("현재의 x는 %d입니다.\n", x); //1
	printf("현재의 x는 %d입니다.\n", x--); //1
	printf("현재의 x는 %d입니다.\n", x); //0
	printf("현재의 x는 %d입니다.\n", --x); //-1
	
	return 0; 
}
