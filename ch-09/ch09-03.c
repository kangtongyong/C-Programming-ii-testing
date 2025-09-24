#include <stdio.h>

int main()
{
	char phone[] = "01-234-5678";
	char* a = phone;
	char *p = NULL;

	p = strtok(phone, "-");
	printf("a1: %s\n", p);

	/*p = strtok(a, "-");
	printf("a1: %s\n", p);*/

	p = strtok(NULL, "-");
	printf("p2: %s\n", p);

	p = strtok(NULL, "-");
	printf("l3: %s\n", p);

	return 0;
}