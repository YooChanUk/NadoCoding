#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//랜덤을 쓸것이라면 time과 stdlib 는 꼭 쓸것

int main_random()
{
	//srand(time(NULL)); // 난수 초기화(해주지 않으면 원하는 값을 뽑을 수 없음
	//nt num = rand() % 3 + 1; // 3개의 경우의 수중 하나를 뽑아라 0 ~ 2 // 1 ~ 3

	printf("난수 초기화 이전..\n");
	for (int i = 0; i < 10; i++)
	{
		//printf("%d",rand() %10);
	}
	
	srand(time(NULL)); // 난수 초기화

	printf("난수 초기화 이후..\n");
	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", rand() % 10);
	}
	return 0;
}