#include<stdio.h>

int main_array(void)
{
	//int subway_1 = 30; //지하철 1호차에 30명이 타고있다.
	//int subway_2 = 40;
	//int subway_3 = 50;

	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_1);
	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_2);
	//printf("지하철 1호차에 %d 명이 타고 있습니다.\n", subway_3);

	//몇개를 보관할것인지 [??] - 여러개의 변수 동시 생성
	//int subway_array[3]; //0부터 시작
	//subway_array[0] = 30;
	//subway_array[1] = 40;
	//subway_array[2] = 50;

	//for (int i = 0; i < 3; i++)
	//{
	//	printf("지하철 %d호차에 %d 명이 타고 있습니다.\n", i+1 , subway_array[i]);
	//}

	//값 설정방법
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 }; //초기화를 안할시 쓰레기값이 출력
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d\n",arr[i]);
	//}

	//배열 크기는 항상 상수로 선언const 를 써도 불가능
	//int size = 10;
	//int arr[size];

	//int arr[10] = { 1,2 }; //처음에 하나라도 선언을 해두면 나머지 값은 0으로 알아서 초기화
	//for (int i = 0; i < 10; i++)
	//{
	//printf("%d\n",arr[i]);
	//}

	//int arr[] = { 1,2 }; //arr[2] 와 동일 float도 동일 char도 동일
 
	//문자 vs 문자열 문자는 한글자 문자열은 여러글자
	//char c = 'A';
	//printf("%c\n",c);

	//문자열 끝에는 끝을 의미하는 NULL문자 '\0' 이 포함되어야 함
	//char str[6] = "coding"; // [c][o][d][i][n][g] [\0]
	//char str[7] = "coding"; //문자수보다 조금 많은 배열을 만들어줘야 자동으로 \0가 들어가서 문자를 끝냄
	//printf("%s\n",str);

	//char str[] = "coding"; //굳이 배열에 숫자를 써넣지 않아도 사이즈를 알아서 \0를 포함하여 설정
	////printf("%s\n",str);
	////printf("%d\n", sizeof(str));

	//for (int i = 0; i < sizeof(str); i++)
	//{
	//	printf("%c\n",str[i]);
	//}

	//char kor[] = "나도코딩";
	//printf("%s\n",kor);
	//printf("%d\n",sizeof(kor));
	//영어 1글자 1바이트
	//한글 1글자 2바이트
	//char 크기 : 1바이트

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
	//	printf("%d\n", c_array[i]); //ASCII 코드 null 문자는 0

	//}

	//문자열 입력받기

	//char name[256];
	//printf("이름이 뭐에요? ");
	//scanf_s("%s,", name, sizeof(name));
	//printf("%s\n", name);
	
	// 참고 : ASCII ANSI(미국표준협회) 에서 제시한 표준 코드 체계
	// 7bit, 총128개 코드(0~127)
	// a : 97 (문자 a의 아스키코드 정수값)
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

	//참고2 0~127사이의 아스키 코드 정수값 해당 문자 확인
	//for (int i = 0; i < 128; i++)
	//{
	//	printf("아스키코드 정수 %d : %c\n",i,i);
	//}

	return 0;
}