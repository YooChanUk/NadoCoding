#include<stdio.h>
#include<time.h>

//����� 6������ �ִ�.
// �̵��� ���׿� ����ִµ� �縷�� ���.
//�縷�� �ʹ� ������ ���� ���� ���� ������
// ���� �� �����ϱ����� �������� ���׿� ���� �༭ ����⸦ �����
// ������ �ð��� �������� ���� Ŀ���� ���߿��� �ȳ�...

int level;
int arrayFish[6];
int * cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main()
{
	long startTime = 0; //���� ���� �ð�
	long totalElapsedTime = 0; // �� ��� �ð�
	long prevElapseTime = 0; // ���� ��� �ð�(�ֱٿ� ���� �� �ð� ����)

	int num; // �� �� ���׿� ���� �� ������, ����� �Է�
	initData();

	cursor = arrayFish; //cursor[0] .. cursor[1]

	startTime = clock(); // ����ð��� millisecond(1000���� 1��) ������ ��ȯ Ŭ���� time.h �� ����

	while (1)
	{
		printfFishes();
		printf("��� ���׿� ���� �ֽðھ��?");
		scanf_s("%d",&num);

		//�Է°� üũ
		if (num < 1 || num > 6)
		{
			printf("�Է°��� �߸��Ǿ����ϴ�.");
			continue;
		}

		//�� ��� �ð�
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("�� ��� �ð� : %ld ��\n",totalElapsedTime);

		//���� �� �� �ð�(���������� �� �� �ð�) ���ķ� �帥 �ð�
		prevElapseTime -= totalElapsedTime;
		printf("�ֱ� ��� �ð� : %ld ��\n",prevElapseTime);

		//������ ���� ���� (����)
		decreaseWater(prevElapseTime);

		//����ڰ� �Է��� ���׿� ���� �ش�.
		//1. ������ ���� 0 �̸�? ���� ���� �ʴ´� �̹� ��� ����
		if (cursor[num - 1] <= 0)
		{
			printf("%d�� ������ �̹� �׾����ϴ�. ���� ���� �ʽ��ϴ�\n",num);
		}
		//2. ������ ���� 0 �� �ƴ� ���> ���� �ش� ! 100�� ���� �ʴ��� üũ
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d�� ���׿� ���� �ݴϴ�.\n\n",num);
			cursor[num - 1] += 1;
		}

		//�������� �� ���� Ȯ��(�������� 20�ʸ��� �ѹ��� ����)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" *** �� ������ ���� %d �������� %d ������ ���׷��̵� *** \n\n",level-1,level);

			//�������� 5
			if (level == 5)
			{
				printf("\n\n �����մϴ�, �ְ� ������ �޼��Ͽ����ϴ�. ������ �����մϴ�.\n\n");
				exit(0);
			}
		}

		// ��� ����Ⱑ �׾����� Ȯ��
	}


	return 0;
}

void initData()
{
	level = 1;// ���� ����(1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;
	}

}

void printfFishes() // �������� ���� ���� ����
{
	printf("%3d�� %3d�� %3d�� %3d�� %3d�� %3d��\n", 1, 2, 3, 4, 5, 6);
	for (int i = 0; i < 6; i++)
	{
		printf(" %4d ",arrayFish[i]);
	}
	printf("\n\n");
}

void decreaseWater(long elapsedTime)
{
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 ���̵� ������ ���� ��
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}