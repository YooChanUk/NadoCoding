#include<stdio.h>

int main()
{
	//[ö��] : 101ȣ -> �ּ� = �޸𸮰����� �ּ�
	//[����] : 201ȣ
	//[�μ�] : 301ȣ
	//�� �� �տ� ��ȣ�� �ɷ�����
	//int ö�� = 1;
	//int ���� = 2;
	//int �μ� = 3;

	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	////�̼Ǹ� !

	//////ù ��° �̼� : ����Ʈ�� �� ���� �湮�Ͽ� ���� ���� ��ȣ Ȯ��
	//int * �̼Ǹ�;//������ ����
	////�̼Ǹ� = &ö��;
	////printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n",�̼Ǹ�, *�̼Ǹ�);
	////�̼Ǹ� = &����;
	////printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	////�̼Ǹ� = &�μ�;
	////printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	////�� ��° �̼� : �� ��ȣ�� 3�� ���ض�
	//�̼Ǹ� = &ö��;
	//*�̼Ǹ� *= 3;
	//printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &����;
	//*�̼Ǹ� *= 3;
	//printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);
	//�̼Ǹ� = &�μ�;
	//*�̼Ǹ� *= 3;
	//printf("�̼Ǹ��� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", �̼Ǹ�, *�̼Ǹ�);

	////������
	////�̼Ǹ��� �ٲ� ��ȣ���� 2�� ����
	//int * ������ = �̼Ǹ�;

	////������
	////	=> �������� ����Ʈ �ּҸ� ����Ŵ ����
	////�̼Ǹ�

	//printf("\n .... �����̰� �̼��� �����ϴ� �� ...\n\n");
	//������ = &ö��;
	//*������ -= 2;
	//printf("�����̰� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", ������, *������);
	//������ = &����;
	//*������ -= 2;
	//printf("�����̰� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", ������, *������);
	//������ = &�μ�;
	//*������ -= 2;
	//printf("�����̰� �湮�ϴ°��� �ּ� : %d, ��ȣ : %d\n", ������, *������);

	//printf("\n ... ö�� ���� �μ��� ��й�ȣ�� �ٲ�� �˾����ȴ�. ...\n\n");

	//printf("ö���� �ּ� : %d, ��ȣ : %d\n", &ö��, ö��);
	//printf("����� �ּ� : %d, ��ȣ : %d\n", &����, ����);
	//printf("�μ��� �ּ� : %d, ��ȣ : %d\n", &�μ�, �μ�);

	////�̼Ǹ��� ��°��� �ּ�??? &�̼Ǹ����� Ȯ��

	//printf("�̼Ǹ��� �ּ� : %d\n", &�̼Ǹ�);
	//printf("�������� �ּ� : %d\n", &������);

	
	//�迭 ? -> �����Ϳ� �����
	//�����ʹ� �ڿ� [] �迭�� ���ָ� �˾Ƽ� �� �ּ��� ���� ã�ư� - �����Ͱ� �ƴ� �迭������ �ص� �Ȱ���
	//���� ������ ù��° �ּҰ��� ������
	//�迭������ �����Ϳ� ���ڸ� ���ҽ� �ϳ��ϳ� �ٲ��
	// * ������ ���� ���༭ ���� �ٲٱ⵵ ���� - �迭�� �ϳ��ϳ� �����ϵ�
	int arr[3] = { 5,10,15 };
	int * ptr = &arr;
	for (int i = 0; i < 3; i++)
	{
		printf("�迭 arr[%d]�� �� : %d\n", i,arr[i] );
	}

	for (int i = 0; i < 3; i++)
	{
		printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
	}
	ptr[0] = 100;
	ptr[1] = 200;
	ptr[2] = 300;
	for (int i = 0; i < 3; i++)
	{
		//printf("�迭 arr[%d]�� �� : %d\n", i, arr[i]);
		printf("�迭 arr[%d]�� �� : %d\n", i, *(arr + i));
	}

	for (int i = 0; i < 3; i++)
	{
		//printf("������ ptr[%d]�� �� : %d\n", i, ptr[i]);
		printf("������ ptr[%d]�� �� : %d\n", i, *(ptr + i));
	}

	// *(arr + i) == arr[i] �� �Ȱ��� ǥ��
	// arr == arr �迭�� ù��° ���� �ּҿ� ����
	printf("arr ��ü�� �� : %d\n",arr);
	printf("arr[0] �� �ּ� : %d\n", &arr[0]);

	printf("arr ��ü�� ���� ������ �ּ��� ���� �� : %d\n", *arr); // *(arr + 0)
	printf("arr[0] �� ���� �� : %d\n", *&arr[0]);

	// *& �� ��� �ȴ�
	printf("arr[0] �� ���� �� : %d\n", arr[0]);

	return 0;
}