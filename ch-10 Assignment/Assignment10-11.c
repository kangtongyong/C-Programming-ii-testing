#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 20
#define MENU_SIZE 5

//	요구 사항: 구조체 배열을 이용, 제품명 입력, 검색 후 주문 수량을 입력받아 결제 금액 출력, 재고를 주문 수량만큼 감소
//	검색할 수 없거나 제품의 재고가 주문 수량보다 적을 경우 에러 출력
//	구조체 배열 크기 5, 적당한 값으로 초기화
//	특정 문자 입력시 종료
//	종료 이후 전체 주문 내역 출력
//	입력시 메뉴 출력+, 

typedef struct product {
	char name[NAME_SIZE];
	int price;
	int num;
} Product;

Product menu[MENU_SIZE] = {
		{ "아메리카노", 4000, 10 },
		{ "카페라떼", 4500, 10 },
		{ "플랫화이트", 5000, 10 },
		{ "유자차", 3500, 10 },
		{ "체리콕", 5500, 10 },
};


int main()
{
	Assignment1011();

	return 0;
}

int Assignment1011(void)
{
	while (1)
	{




	}


	return 0;
}


// 함수를 짜는 기본 골자

// 기능명: 주문 받기
// 함수명: get_order
// 입력: 제품명, 수량
// 출력: 금액(수량 * 단가)
// 에러일시 -1 반환

int get_order(char* name, int amount)
{


	return 0;
}

// 기능: 메뉴명, 가격, 남은 재고 현황 출력

int show_menu(void)
{
	int i;
	for (i = 0; i < MENU_SIZE; i++)
	{
		printf("[%s ", menu[i].name, menu[i].price, menu[i].num);

	}
}










