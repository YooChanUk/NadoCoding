#include<stdio.h>

int main_loop(void)
{

	// ++ 쁠쁠
	//int a = 10;
	//printf("a 는 %d\n", a);
	//a++;
	//printf("a 는 %d\n", a);
	//a++;
	//printf("a 는 %d\n", a);

	//int b = 20;
	//printf("b 는 %d\n",++b);//앞에 ++ 이 있는경우 ++을 먼저 끝내고 문장을 끝내라
	//printf("b 는 %d\n",b++);//이 줄이 끝난뒤 ++을 실행해라
	//printf("b 는 %d\n",b);

	//int i = 1;
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);
	//printf("Hello World %d\n", i++);

	//반복문
	//for , while , do while

	//for(선언; 조건; 증감) {}

	//for (int i = 1; i <= 10; i++)
	//{
	//	printf("Hello World %d\n",i);
	//}

	//while(조건) {}

	//int i = 1;

	//while (i <= 10)
	//{
	//	printf("Hello World %d\n", i++);
	//	//i++;
	//}

	// do {} while(조건);
	
	//int i = 1;

	//do
	//{
	//	printf("Hello World %d\n", i++);
	//} while (i <= 10);
	
	// 2중 반복문
	//for (int i = 1; i <= 3; i++)
	//{
	//	printf("첫 번째 반복문 : %d\n", i);

	//	for (int j = 1; j <= 5; j++)
	//	{
	//		printf("   두 번째 반복문 : %d\n", j);
	//	}
	//}

	//구구단
	//for (int i = 2; i <= 9; i++)
	//{
	//	printf(" %d단 계산\n", i);
	//	for (int j = 1; j <= 9; j++)
	//	{
	//		printf("  %d x %d = %d\n",i,j,i*j);
	//	}
	//}

	/*for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}*/

	//for (int i = 0; i < 5; i++)
	//{
	//	for (int j = i; j < 4; j++)
	//	{
	//		printf(" ");
	//	}

	//	for (int k = 0; k <= i; k++)
	//	{
	//		printf("*");
	//	}

	//	printf("\n");
	//}

	//피라미드를 쌓아라 - 프로젝트 1:13:43

	/*
	     *
	    ***
	   *****
	  *******
	 *********
	*/

	int floor;
	printf("몇 층으로 쌓겠느냐?");
	scanf_s("%d",&floor);

	for (int i = 0; i < floor; i++)
	{
		for (int j = i; j < floor - 1 ; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < i*2+1; k++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}