//#define _CRT_SECURE_NO_WARNINGS
//#include"seqlist.h"
//int main()
//{
//	SL sl;
//	IntSL(&sl);
//	SLpushback(&sl, 2);
//	SLpushfront(&sl, 1);
//	SLpushback(&sl, 2);
//	SLpushfront(&sl, 1);
//	SLdelfront(&sl);
//	SLdelback(&sl);
//	SLprint(&sl);
//	return 0;
//}




















#include"seqlist.h"
int main()
{
	sl type;
	initsl(&type);
	addfront(&type, 3);
	print(&type);
	return 0;
}