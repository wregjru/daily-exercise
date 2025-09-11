#define _CRT_SECURE_NO_WARNINGS
#include"stack.h"
int main()
{
	ST s;
	STInit(&s);
	Push(&s, 1);
	Push(&s, 2);
	while (!STEmpty(&s))
	{
		printf("%d ", STTop(&s));
		SLPop(&s);
	}
	SYDestroy(&s);
	return 0;
}
