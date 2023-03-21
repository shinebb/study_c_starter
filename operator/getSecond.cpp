#include <stdio.h>
#define SECOND_PER_MINUTE 60  //상수 선언 

int main(void)
{
	int input = 1000;
	int minute = input / SECOND_PER_MINUTE;  //분 
	int second = input % SECOND_PER_MINUTE;  //초
	
	printf("%d초 %d분 %d초입니다. \n", input, minute, second); 
	
	return 0; 
}
