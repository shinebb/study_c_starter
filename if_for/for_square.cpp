#include <stdio.h>
#define N 10

int main(void)
{
	int i, j;
	for(i=0; i<N; i++) //i�� 0���� i�� N���� ������ ���� ����Ǹ� �ѹ� ����� ������ i�� 1�� �����Ѵ�. 
	{
		for(j=0; j<N; j++)
		{
			printf("��");
		}
		printf("\n");	
	}
	
	return 0;
}
