#include <stdio.h>
#include <limits.h> //INT_MAX�� ����Ϸ��� include ������� 

int main(void)
{
	int x = INT_MAX; //int�� ���� �� �ִ� �ְ�� ū ��. 
	printf("int���� �ִ� x�� %d�Դϴ�.\n", x);
	printf("x + 1�� %d�Դϴ�.\n", x + 1); //�����÷ο� : ���� �ʰ��� - �����÷ο찡 �Ǹ� ������ �ȴ�. 
	return 0;
} 
