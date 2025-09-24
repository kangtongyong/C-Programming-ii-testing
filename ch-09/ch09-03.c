#include <stdio.h>

int main()
{
	char phone[] = "01-234-5678";
	char *p = NULL;

	p = strtok_s(phone, "-");
	printf("a1: %s\n", p);

	p = strtok(NULL, "-");
	printf("p2: %s\n", p);

	p = strtok(NULL, "-");
	printf("l3: %s\n", p);

	return 0;
}