#include <stdio.h>

int main(void)
{
	int x = 50; //정수형 변수
	float y = 123456789.123456789;
	double z = 123456789.123456789;
	printf("x = %d\n", x);
	printf("y = %.2f\n", y); //4바이트까지만 포함할 수 있다. 
	printf("z = %.2f\n", z); //8바이트의 저장공간이 있음.  
	return 0;
}
