#define _CRT_SECURE_NO_WARNINGS
#include"seqlist.h"


void initcontact(contact* con)
{
	IntSL(con);
}
void contactadd(contact* con)
{
	peoinfo info;
	scanf("%s", info.name);
	scanf("%s", info.gender);
	scanf("%d", &info.age);
	scanf("%s", info.tele);
	scanf("%s", info.address);
	SLpushback(con, info);
}