//	09-30 ���� ���� 



#include <stdio.h>
#include <string.h>
#include "contact.h"

//struct contact {
//	char name[50];
//	char phone[15];
//	int ringtone;
//};
//
//typedef struct contact Contact;
//Contact kim = { 0 };

//typedef struct contact {
//	char name[50];
//	char phone[15];
//	int ringtone;
//}Contact;

Contact kim = { 0 };

int main()
{
	contact lee = { "lee", "010-1111-1111", 1 };

	contact lee2 = { 0 };


	lee2 = lee;
	
	
	// �ȵ� --> lee2 = { "lee2", "010-2222-2222", 2 };

	// ���� �ϴ� �� ?
	strcpy(lee2.name, "lee2");
	strcpy(lee2.phone, "010-2222-2222");
	lee2.ringtone = 2;


	return 0;
}



