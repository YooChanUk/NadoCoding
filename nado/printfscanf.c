#include<stdio.h>

int main()
{
	/*int age = 12;//������ ���ϴ� �� ����� ������ �ʴ� �� int�� �ڷ���, float, char���
	printf("%d\n", age);//%d�� �������� ����ϱ� ����
	age = 13;
	printf("%d\n", age);*/

	//printf("1\n");
	//printf("2\n");
	//printf("3\n");

	// �Ǽ��� ������ ���� ���� float
	/*float f = 46.5f;
	printf("%.2f\n",f);//%f ��� ������ 0�� ���� ���� ���ϴ� �ڸ����� ���� .2 ��� �����ٰ�
	double d = 4.428;
	printf("%.2lf\n",d);//�˾Ƽ� �ݿø��Ͽ� 4.43�̶� ���*/

	//const int YEAR = 2000; //����� �Է����ִ°� const 
	//printf("�¾ �⵵ : %d\n",YEAR);
	//YEAR = 2001; const�� ������ �������־��⿡ �Ʒ������� ���̻� ������ �Ұ��ϴٰ� ������ ����

	/*int add = 3 + 7;
	printf("3 + 7 = %d\n",add);
	printf("%d x %d = %d\n", 30,79,30*79);*/

	//scanf Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ��� : ");
	scanf_s("%d",&input);//& ��ǲ�̶�°��� ���� ���� �����ϰڴ�
	printf("�Է°� : %d\n",input);*/

	/*int one, two, three;
	printf("3���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d %d",&one,&two,&three);
	printf("ù��° �� : %d\n", one);
	printf("�ι�° �� : %d\n", two);
	printf("����° �� : %d\n", three);*/

	// ����(�� ����), ���ڿ�(���� ����)
	//char c = 'A';
	//printf("%c\n",c);//%c�� ���ڸ� ����ϱ� ���Ѱ� %d %f %lf (%s ���ڿ�)

	//char str[256];
	//scanf_s("%s",str,sizeof(str));//���ڿ�,�迭 �� �Է¹������� & �� ǥ�þ��� ������ ����� ��� ũ�� ���
	//printf("%s\n",str);

	//������ ���� ������Ʈ 32:21
	//�������� �������� ������ �Լ�(���� �ۼ�)
	// �̸� ���� ������ Ű ���˸�

	char name[256];
	printf("�̸��� ������? ");
	scanf_s("%s,", name, sizeof(name));

	int age;
	printf("����̿���? ");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� �� kg�̿���? ");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��cm����? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("���� ���˸� ���������? ");
	scanf_s("%s", what, sizeof(what));

	//�������� ���
	printf("\n\n--- ������ ���� ---\n\n");
	printf("�̸�     : %s\n", name);
	printf("����     : %d\n", age);
	printf("������   : %.2f\n", weight);
	printf("Ű       : %.2lf\n", height);
	printf("����     : %s\n", what);
	return 0;
}