#include<stdio.h>
#include<time.h>

int main_condition()
{
	//������ ź�ٰ� ���� �л�/�Ϲ��� �ϼ� ���� �Ϲ���(20��)
	//int age = 25;
	////if(����){...} else {...}
	//if (age >= 20)
	//{
	//	printf("�Ϲ��� �Դϴ�.\n");
	//}
	//else
	//{
	//	printf("�л��Դϴ�.\n");
	//}

	//�ʵ��л�(8~13) / ���л�(14~16) / ����л�(17~19)
	//if / else if / else
	//int age = 25;
	//if (age >= 8 && age <= 13)
	//{
	//	printf("�ʵ��л��Դϴ�.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("���л��Դϴ�.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("����л��Դϴ�.\n");
	//}
	//else
	//{
	//	printf("�л��� �ƴѰ� �����ϴ�.\n");
	//}

	//break / continue
	// 1������ 30������ �ִ� �ݿ��� 1������ 5������ ���� ��ǥ
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("������ �л��� ���� ������\n");
	//		break;
	//	}
	//	printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n",i);
	//}

	//break�� �� �ڸ����� ���°� ����ִ� �װ��� ������ �ȴٸ� �������ΰ����� Ż��

	//1������ 30������ �ִ� �ݿ��� 7�� �л��� ���ļ� �Ἦ
	//7������ �����ϰ� 6������ 10������ ���� ��ǥ

	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d �� �л��� �Ἦ�Դϴ�.\n", i);
	//			continue;
	//		}
	//		printf("%d �� �л��� ���� ��ǥ �غ� �ϼ���\n", i);
	//	}
	//}

	//continue�� �� �ڸ����� ���°� �ƴ� ������ �ϵ� �̹��͸� �ѱ�°�

	// && ||
	//int a = 10;
	//int b = 11;
	//int c = 13;
	//int d = 13;

	//if (a == b || c == d)
	//{
	//	printf("a �� b Ȥ�� , c�� d�� �����ϴ� \n");
	//}
	//else
	//{
	//	printf("���� ���� �ٸ��׿�");
	//}

	// ���� 0 ���� 1 �� 2
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0)
	//{
	//	printf("����\n");
	//}
	//else if (i == 1)
	//{
	//	printf("����\n");
	//}
	//else if (i == 2)
	//{
	//	printf("��\n");
	//}
	//else
	//{
	//	printf("�����\n");
	//}

	//Switch

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0 : printf("����\n");
	//	break;
	//case 1 : printf("����\n");
	//	break;
	//case 2 : printf("��\n");
	//	break;
	//default:printf("�����\n");
	//	break;
	//}

	
	// Up and Down 1:58:33
	srand(time(NULL));
	int num = rand() % 100 + 1; // 0���� �����̱⿡ 1�� ���ϸ� 1���� ����
	printf("���� : %d\n",num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("������ȸ %d ��\n", chance--);
		printf("���ڸ� ���纸���� (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (chance == 0)
		{
			printf("��� ��ȸ�� �� ����ϼ̳׿� �ƽ��� �����ϼ̾��.\n");
			break;
		}

		if (answer > num)
		{
			printf("Down ��\n");
		}
		else if (answer < num)
		{
			printf("Up ��\n");
		}
		else if (answer == num)
		{
			printf("�����Դϴ�.\n");
			break;
		}
		else
		{
			printf("�� �� ���� ������ �߰��߾��.\n");
		}


	}

	return 0;
}