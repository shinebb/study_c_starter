#include <stdio.h>
#include <math.h> //pow(), abs()

int main(void)
{
	double x = pow(2.0, 20.0); //2의 20제곱
	printf("2의 20제곱은 %.0f입니다.\n", x);  //.0은 정수부분만 
	
	return 0; 
}
