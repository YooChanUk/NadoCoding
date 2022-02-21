#include<stdio.h>
#include<time.h>

int main_condition()
{
	//버스를 탄다고 가정 학생/일반인 일수 있음 일반인(20세)
	//int age = 25;
	////if(조건){...} else {...}
	//if (age >= 20)
	//{
	//	printf("일반인 입니다.\n");
	//}
	//else
	//{
	//	printf("학생입니다.\n");
	//}

	//초등학생(8~13) / 중학생(14~16) / 고등학생(17~19)
	//if / else if / else
	//int age = 25;
	//if (age >= 8 && age <= 13)
	//{
	//	printf("초등학생입니다.\n");
	//}
	//else if (age >= 14 && age <= 16)
	//{
	//	printf("중학생입니다.\n");
	//}
	//else if (age >= 17 && age <= 19)
	//{
	//	printf("고등학생입니다.\n");
	//}
	//else
	//{
	//	printf("학생이 아닌것 같습니다.\n");
	//}

	//break / continue
	// 1번부터 30번까지 있는 반에서 1번에서 5번까지 조별 발표
	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6)
	//	{
	//		printf("나머지 학생은 집에 가세요\n");
	//		break;
	//	}
	//	printf("%d 번 학생은 조별 발표 준비를 하세요\n",i);
	//}

	//break는 그 자리에서 끊는것 어디에있던 그곳에 들어오게 된다면 진행중인곳에서 탈출

	//1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
	//7번부터 제외하고 6번부터 10번까지 조별 발표

	//for (int i = 1; i <= 30; i++)
	//{
	//	if (i >= 6 && i <= 10)
	//	{
	//		if (i == 7)
	//		{
	//			printf("%d 번 학생은 결석입니다.\n", i);
	//			continue;
	//		}
	//		printf("%d 번 학생은 조별 발표 준비를 하세요\n", i);
	//	}
	//}

	//continue는 그 자리에서 끊는게 아닌 진행은 하되 이번것만 넘기는것

	// && ||
	//int a = 10;
	//int b = 11;
	//int c = 13;
	//int d = 13;

	//if (a == b || c == d)
	//{
	//	printf("a 와 b 혹은 , c와 d도 같습니다 \n");
	//}
	//else
	//{
	//	printf("값이 서로 다르네요");
	//}

	// 가위 0 바위 1 보 2
	//srand(time(NULL));
	//int i = rand() % 3;
	//if (i == 0)
	//{
	//	printf("가위\n");
	//}
	//else if (i == 1)
	//{
	//	printf("바위\n");
	//}
	//else if (i == 2)
	//{
	//	printf("보\n");
	//}
	//else
	//{
	//	printf("몰라요\n");
	//}

	//Switch

	//srand(time(NULL));
	//int i = rand() % 3;
	//switch (i)
	//{
	//case 0 : printf("가위\n");
	//	break;
	//case 1 : printf("바위\n");
	//	break;
	//case 2 : printf("보\n");
	//	break;
	//default:printf("몰라요\n");
	//	break;
	//}

	
	// Up and Down 1:58:33
	srand(time(NULL));
	int num = rand() % 100 + 1; // 0부터 시작이기에 1을 더하면 1부터 시작
	printf("숫자 : %d\n",num);
	int answer = 0;
	int chance = 5;
	while (1)
	{
		printf("남은기회 %d 번\n", chance--);
		printf("숫자를 맞춰보세요 (1 ~ 100) : ");
		scanf_s("%d", &answer);

		if (chance == 0)
		{
			printf("모든 기회를 다 사용하셨네요 아쉽게 실패하셨어요.\n");
			break;
		}

		if (answer > num)
		{
			printf("Down ↓\n");
		}
		else if (answer < num)
		{
			printf("Up ↑\n");
		}
		else if (answer == num)
		{
			printf("정답입니다.\n");
			break;
		}
		else
		{
			printf("알 수 없는 오류를 발견했어요.\n");
		}


	}

	return 0;
}