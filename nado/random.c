#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//������ �����̶�� time�� stdlib �� �� ����

int main_random()
{
	//srand(time(NULL)); // ���� �ʱ�ȭ(������ ������ ���ϴ� ���� ���� �� ����
	//nt num = rand() % 3 + 1; // 3���� ����� ���� �ϳ��� �̾ƶ� 0 ~ 2 // 1 ~ 3

	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		//printf("%d",rand() %10);
	}
	
	srand(time(NULL)); // ���� �ʱ�ȭ

	printf("���� �ʱ�ȭ ����..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", rand() % 10);
	}
	return 0;
}