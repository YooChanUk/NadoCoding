#include<stdio.h>

//선언
void p(int num); //메인함수 위쪽에 항상 선언(함수를)

void function_without_retrun();

int function_with_return();

void function_without_params();
void function_with_params(int num1,int num2, int num3);

int apple(int tot,int ate); //전체 tot 개에서 ate개를 먹고 남은 수 반환

int add(int num, int num2);
int sub(int num, int num2);
int mul(int num, int num2);
int div(int num, int num2);

int main_function()
{
	//function
	//계산기

	//int num = 2;
	////printf("num 은 %d 입니다.\n",num);
	//p(num);

	////2+3은?
	//num = num + 3;
	////printf("num 은 %d 입니다.\n",num);
	//p(num);

	////5-1은?
	//num -= 1;
	////printf("num 은 %d 입니다.\n", num);
	//p(num);

	////4x3은?
	//num *= 3;
	////printf("num 은 %d 입니다.\n", num);
	//p(num);

	//// 12 / 6은? 
	//num /= 6;
	////printf("num 은 %d 입니다.\n", num);
	//p(num);

	//함수 종류
	//반환값이 없는 함수
	//function_without_retrun();

	//반환값이 있는 함수
	/*int ret = function_with_return();
	p(ret);*/

	//파라미터(전달값)이 없는 함수
	//function_without_params();

	//파라미터(전달값)이 있는 함수
	//function_with_params(35,27,12);

	// 파라미터(전달값)도 받고 반환값이 있음
	//int ret = apple(5, 2); //5개의 사과 중 두개를 먹었음
	//printf("사과 5개 중에 2개를 먹으면 %d 개가 남아요\n",ret);
	//printf("사과 %d 개 중에 %d 개를 먹으면 %d 개가 남아요\n", 10 ,4 ,apple(10,4));

	//계산기 함수
	int num = 2;
	num = add(num,3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num,3);
	p(num);

	num = div(num, 6);
	p(num);

	return 0;
}

//정의 //아래에서 정의
void p(int num)//오른쪽(전달값)
{
	printf("num 은 %d 입니다.\n", num);
}


//반환형 함수이름(전달값)
//{
//
//}

void function_without_retrun()
{
	printf("반환값이 없는 함수입니다.\n");
}

int function_with_return()
{
	printf("반환값이 있는 함수입니다.\n");
	return 10;
}

void function_without_params()
{
	printf("전달값이 없는 함수 입니다.\n");
}

void function_with_params(int num1, int num2, int num3)
{
	printf("전달값이 있는 함수이며 전달받은 값은 %d, %d, %d 입니다\n", num1,num2,num3);
}

int apple(int tot, int ate)
{
	printf("전달값과 반환값이 있는 함수 입니다.\n");
	return tot - ate;
}

int add(int num, int num2)
{
	return num + num2;
}

int sub(int num, int num2)
{
	return num - num2;
}

int mul(int num, int num2)
{
	return num * num2;
}

int div(int num, int num2)
{
	return num / num2;
}