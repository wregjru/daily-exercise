#define _CRT_SECURE_NO_WARNINGS
#include"List.h"
int main()
{
	list* plist = NULL;
	initlist(&plist);
	pushback(plist, 1);
	pushback(plist, 2);
	pushback(plist, 3);
	pushfront(plist, 3);
	delback(plist);
	print(plist);
	return 0;
}