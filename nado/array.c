#include<stdio.h>

int main_array(void)
{
	//int subway_1 = 30; //����ö 1ȣ���� 30���� Ÿ���ִ�.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_1);
	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_2);
	//printf("����ö 1ȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", subway_3);

	//��� �����Ұ����� [??] - �������� ���� ���� ����
	//int subway_array[3]; //0���� ����
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("����ö %dȣ���� %d ���� Ÿ�� �ֽ��ϴ�.\n", i+1 , subway_array[i]);
	//}

	//�� �������
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //�ʱ�ȭ�� ���ҽ� �����Ⱚ�� ���
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",arr[i]);
	//}

	//�迭 ũ��� �׻� ����� ����const �� �ᵵ �Ұ���
	//int size = 10;
	//int arr[size];

	//int arr[10] = { 1,2 }; //ó���� �ϳ��� ������ �صθ� ������ ���� 0���� �˾Ƽ� �ʱ�ȭ
	//for (int i = 0; i < 10; i++)
	//{
	//printf("%d\n",arr[i]);
	//}

	//int arr[] = { 1,2 }; //arr[2] �� ���� float�� ���� char�� ����
 
	//���� vs ���ڿ� ���ڴ� �ѱ��� ���ڿ��� ��������
	//char c = 'A';
	//printf("%c\n",c);

	//���ڿ� ������ ���� �ǹ��ϴ� NULL���� '\0' �� ���ԵǾ�� ��
	//char str[6] = "coding"; // [c][o][d][i][n][g] [\0]
	//char str[7] = "coding"; //���ڼ����� ���� ���� �迭�� �������� �ڵ����� \0�� ���� ���ڸ� ����
	//printf("%s\n",str);

	//char str[] = "coding"; //���� �迭�� ���ڸ� ����� �ʾƵ� ����� �˾Ƽ� \0�� �����Ͽ� ����
	////printf("%s\n",str);
	////printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n",str[i]);
	//}

	//char kor[] = "�����ڵ�";
	//printf("%s\n",kor);
	//printf("%d\n",sizeof(kor));
	//���� 1���� 1����Ʈ
	//�ѱ� 1���� 2����Ʈ
	//char ũ�� : 1����Ʈ

	//char c_array[7] = { 'c','o','d','i','n','g','\0' };
	//printf("%s\n",c_array);

	char c_array[10] = { 'c','o','d','i','n','g' };
	//printf("%s\n", c_array);
	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%c\n", c_array[i]);

	//}
	//for (int i = 0; i < sizeof(c_array); i++)
	//{
	//	printf("%d\n", c_array[i]); //ASCII �ڵ� null ���ڴ� 0

	//}

	//���ڿ� �Է¹ޱ�

	//char name[256];
	//printf("�̸��� ������? ");
	//scanf_s("%s,", name, sizeof(name));
	//printf("%s\n", name);
	
	// ���� : ASCII ANSI(�̱�ǥ����ȸ) ���� ������ ǥ�� �ڵ� ü��
	// 7bit, ��128�� �ڵ�(0~127)
	// a : 97 (���� a�� �ƽ�Ű�ڵ� ������)
	// A : 65
	// 0 : 48

	//printf("%c\n", 'a');
	//printf("%d\n", 'a');

	//printf("%c\n", 'b');
	//printf("%d\n", 'b');

	//printf("%c\n", 'A');
	//printf("%d\n", 'A');

	//printf("%c\n", '\0');
	//printf("%d\n", '\0');

	//printf("%c\n", '0');
	//printf("%d\n", '0');

	//printf("%c\n", '1');
	//printf("%d\n", '1');

	//����2 0~127������ �ƽ�Ű �ڵ� ������ �ش� ���� Ȯ��
	//for (int i = 0; i < 128; i++)
	//{
	//	printf("�ƽ�Ű�ڵ� ���� %d : %c\n",i,i);
	//}

	return 0;
}