#include<stdio.h>

int main()
{
	/*int age = 12;//변수는 변하는 수 상수는 변하지 않는 수 int는 자료형, float, char등등
	printf("%d\n", age);//%d는 정수형을 출력하기 위함
	age = 13;
	printf("%d\n", age);*/

	//printf("1\n");
	//printf("2\n");
	//printf("3\n");

	// 실수형 변수에 대한 예제 float
	/*float f = 46.5f;
	printf("%.2f\n",f);//%f 라고만 했을시 0이 많음 내가 원하는 자릿수를 위해 .2 등등 정해줄것
	double d = 4.428;
	printf("%.2lf\n",d);//알아서 반올림하여 4.43이라 출력*/

	//const int YEAR = 2000; //상수를 입력해주는것 const 
	//printf("태어난 년도 : %d\n",YEAR);
	//YEAR = 2001; const를 위에서 설정해주었기에 아래에서는 더이상 수정이 불가하다고 빨간줄 그임

	/*int add = 3 + 7;
	printf("3 + 7 = %d\n",add);
	printf("%d x %d = %d\n", 30,79,30*79);*/

	//scanf 키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요 : ");
	scanf_s("%d",&input);//& 인풋이라는곳의 값에 값을 저장하겠다
	printf("입력값 : %d\n",input);*/

	/*int one, two, three;
	printf("3개의 정수를 입력하세요 : ");
	scanf_s("%d %d %d",&one,&two,&three);
	printf("첫번째 값 : %d\n", one);
	printf("두번째 값 : %d\n", two);
	printf("세번째 값 : %d\n", three);*/

	// 문자(한 글자), 문자열(여러 글자)
	//char c = 'A';
	//printf("%c\n",c);//%c는 문자를 출력하기 위한것 %d %f %lf (%s 문자열)

	//char str[256];
	//scanf_s("%s",str,sizeof(str));//문자열,배열 을 입력받을때는 & 이 표시없이 변수만 쓰면됨 대신 크기 명시
	//printf("%s\n",str);

	//경찰서 조서 프로젝트 32:21
	//경찰관이 범죄자의 정보를 입수(조서 작성)
	// 이름 나이 몸무게 키 범죄명

	char name[256];
	printf("이름이 뭐에요? ");
	scanf_s("%s,", name, sizeof(name));

	int age;
	printf("몇살이에요? ");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇 kg이에요? ");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇cm에요? ");
	scanf_s("%lf", &height);

	char what[256];
	printf("무슨 범죄를 저질렀어요? ");
	scanf_s("%s", what, sizeof(what));

	//조서내용 출력
	printf("\n\n--- 범죄자 정보 ---\n\n");
	printf("이름     : %s\n", name);
	printf("나이     : %d\n", age);
	printf("몸무게   : %.2f\n", weight);
	printf("키       : %.2lf\n", height);
	printf("범죄     : %s\n", what);
	return 0;
}