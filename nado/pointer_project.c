#include<stdio.h>
#include<time.h>

//물고기 6마리가 있다.
// 이들은 어항에 살고있는데 사막에 산다.
//사막이 너무 더워서 물이 아주 빨리 증발함
// 물이 다 증발하기전에 부지런히 어항에 물을 줘서 물고기를 살려라
// 물고기는 시간이 지날수록 점점 커져서 나중에는 냠냠...

int level;
int arrayFish[6];
int * cursor;

void initData();
void printfFishes();
void decreaseWater(long elapsedTime);

int main()
{
	long startTime = 0; //게임 시작 시간
	long totalElapsedTime = 0; // 총 경과 시간
	long prevElapseTime = 0; // 직전 경과 시간(최근에 물을 준 시간 간격)

	int num; // 몇 번 어항에 물을 줄 것인지, 사용자 입력
	initData();

	cursor = arrayFish; //cursor[0] .. cursor[1]

	startTime = clock(); // 현재시간을 millisecond(1000분의 1초) 단위로 반환 클락은 time.h 에 있음

	while (1)
	{
		printfFishes();
		printf("몇번 어항에 물을 주시겠어요?");
		scanf_s("%d",&num);

		//입력값 체크
		if (num < 1 || num > 6)
		{
			printf("입력값이 잘못되었습니다.");
			continue;
		}

		//총 경과 시간
		totalElapsedTime = (clock() - startTime) / CLOCKS_PER_SEC;
		printf("총 경과 시간 : %ld 초\n",totalElapsedTime);

		//직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
		prevElapseTime -= totalElapsedTime;
		printf("최근 경과 시간 : %ld 초\n",prevElapseTime);

		//어항의 물을 감소 (증발)
		decreaseWater(prevElapseTime);

		//사용자가 입력한 어항에 물을 준다.
		//1. 어항의 물이 0 이면? 물을 주지 않는다 이미 고기 죽음
		if (cursor[num - 1] <= 0)
		{
			printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다\n",num);
		}
		//2. 어항의 물이 0 이 아닌 경우> 물을 준다 ! 100을 넘지 않는지 체크
		else if (cursor[num - 1] + 1 <= 100)
		{
			printf("%d번 어항에 물을 줍니다.\n\n",num);
			cursor[num - 1] += 1;
		}

		//레벨업을 할 건지 확인(레벨업은 20초마다 한번씩 수행)
		if (totalElapsedTime / 20 > level - 1)
		{
			level++;
			printf(" *** 축 레벨업 기존 %d 레벨에서 %d 레벨로 업그레이드 *** \n\n",level-1,level);

			//최종레벨 5
			if (level == 5)
			{
				printf("\n\n 축하합니다, 최고 레벨을 달성하였습니다. 게임을 종료합니다.\n\n");
				exit(0);
			}
		}

		// 모든 물고기가 죽었는지 확인
	}


	return 0;
}

void initData()
{
	level = 1;// 게임 레벨(1~5)
	for (int i = 0; i < 6; i++)
	{
		arrayFish[i] = 100;
	}

}

void printfFishes() // 물고기들의 어항 상태 보고
{
	printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
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
		arrayFish[i] -= (level * 3 * (int)elapsedTime); // 3 난이도 조절을 위한 값
		if (arrayFish[i] < 0)
		{
			arrayFish[i] = 0;
		}
	}
}