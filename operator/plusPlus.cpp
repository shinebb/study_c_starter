#include <stdio.h>


int main(void)
{
	int x = 0;
	printf("������ x�� %d�Դϴ�.\n", x); //0
	
	x++;
	printf("������ x�� %d�Դϴ�.\n", x); //1
	printf("������ x�� %d�Դϴ�.\n", x--); //1
	printf("������ x�� %d�Դϴ�.\n", x); //0
	printf("������ x�� %d�Դϴ�.\n", --x); //-1
	
	return 0; 
}
