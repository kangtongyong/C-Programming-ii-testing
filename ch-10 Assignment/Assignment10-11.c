#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define NAME_SIZE 20
#define MENU_SIZE 5

//	�䱸 ����: ����ü �迭�� �̿�, ��ǰ�� �Է�, �˻� �� �ֹ� ������ �Է¹޾� ���� �ݾ� ���, ��� �ֹ� ������ŭ ����
//	�˻��� �� ���ų� ��ǰ�� ��� �ֹ� �������� ���� ��� ���� ���
//	����ü �迭 ũ�� 5, ������ ������ �ʱ�ȭ
//	Ư�� ���� �Է½� ����
//	���� ���� ��ü �ֹ� ���� ���
//	�Է½� �޴� ���+, 

typedef struct product {
	char name[NAME_SIZE];
	int price;
	int num;
} Product;

Product menu[MENU_SIZE] = {
		{ "�Ƹ޸�ī��", 4000, 10 },
		{ "ī���", 4500, 10 },
		{ "�÷�ȭ��Ʈ", 5000, 10 },
		{ "������", 3500, 10 },
		{ "ü����", 5500, 10 },
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


// �Լ��� ¥�� �⺻ ����

// ��ɸ�: �ֹ� �ޱ�
// �Լ���: get_order
// �Է�: ��ǰ��, ����
// ���: �ݾ�(���� * �ܰ�)
// �����Ͻ� -1 ��ȯ

int get_order(char* name, int amount)
{


	return 0;
}

// ���: �޴���, ����, ���� ��� ��Ȳ ���

int show_menu(void)
{
	int i;
	for (i = 0; i < MENU_SIZE; i++)
	{
		printf("[%s ", menu[i].name, menu[i].price, menu[i].num);

	}
}










