#include <stdio.h>

int main(void)
{
	char x = 'A';
	printf("%c \n", x);
	
	char y = 65; //�ƽ�Ű�ڵ� 
	printf("%c \n", y);
	
	int j = 65; //int�������� ����� char�ϱ� ������ A 
	printf("%c \n", j);
	
	char z = 'B'; //char�������� ����� int�ϱ� ������ 66
	printf("%d \n", z);
	
	return 0; 
}
