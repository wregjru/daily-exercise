#define _CRT_SECURE_NO_WARNINGS
#include"queue.h"
int main()
{
	queue q;
	initqueue(&q);
	queuepush(&q, 1);
	queuepush(&q, 2);
	queuepush(&q, 3);
	queuepush(&q, 4);
	while (ifempty(&q))
	{
		printf("%d ", q.phead->val);
		queuepop(&q);
	}
	return 0;
}