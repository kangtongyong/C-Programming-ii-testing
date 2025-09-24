/*
	학번: 202511224
	이름: 양현인
	프로그램 명:
	날짜: 2025.
	프로그램 기능:

	문제: 키보드로부터 다음 레코드를 한 줄 입력받아 필드를
	구분하여 구조체 배열에 저장한 후 출력하는 프로그램을 작성하시오.
	(의문: 출력 방식은 자유?)
	레코드 형식: 이름 | 학번 | 학과 | 학년(정수)
	입력 종료 조건: "exit" 입력
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
};

typedef struct Student Student;

//함수 원형 선언

char Answer(void);
void Whilebreak(void);
int aaa();

int main()
{
	struct Student st1 = { 0 };

	char answer[64];
	char *a = answer;
	char* p = NULL;

	while (1)
	{
		printf("입력받을 레코드( | 로 구분): ");
		scanf("%s", a);


		if (a == "exit");
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
 




	}

	return 0;
}

char Answer(void)
{
	char answer[64];
	char* a = answer;

	printf("입력받을 레코드( | 로 구분): ");
	scanf("%s", a);


	return *a;
}

// 입력 -> 필드 구분 -> 저장 -> 출력

int Pracitce1()
{
	


	while (1)
	{
		Answer();


		if ( == "exit");


	}



	return 0;
}





