#include <stdio.h>

int main(void)
{
	int x = 50;
	int y = 30;

	printf("x�� y�� ������? %d\n", x == y);  
	printf("x�� y�� �ٸ���? %d\n", x != y);
	printf("x�� y���� ū��? %d\n", x > y);
	printf("x�� y���� ������? %d\n", x < y);
	printf("x�� y���� ������? %d\n", x = y);
	
	//1�� ��(truth) , 0�� ����(false) 
	return 0; 
}
