#include <stdio.h>

int main(void)
{
	int i = 1;
	int sum = 0;
	while(i <= 1000) //���ǹ��� ���϶�, �����϶����� ����ؼ� ���ư� 
	{
		sum = sum + i;
		i++;	
	}
	printf("1���� 1000������ ���� %d�Դϴ�.", sum);
	return 0;
}
