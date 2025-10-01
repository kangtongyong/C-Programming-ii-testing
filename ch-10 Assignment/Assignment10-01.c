#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct contact {
	char ID[20];
	char Password[20];
}Login;

Login c1;

int Assignment1001();
void ScanfIDPass(void);
void print_star(Login *c1);

int main()
{
	Assignment10();

	return 0;
}

int Assignment1001()
{
	ScanfIDPass();
	
	print_star(&c1);

	return 0;
}

void ScanfIDPass(void)
{
	printf("ID? ");
	scanf("%s", c1.ID);
	printf("Password? ");
	scanf("%s", c1.Password);
	printf("ID: %s\n", &c1.ID);
}

void print_star(Login *c1)
{
	int i;

	printf("PW: ");
	for (i = 0; c1->Password[i] != '\0'; i++)
	{
		printf("*");
	}
	printf("\n");
}