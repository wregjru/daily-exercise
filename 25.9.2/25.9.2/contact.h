typedef struct peopleinfo
{
	char name[20];
	char gender[20];
	int age;
	char tele[20];
	char address[100];

}peoinfo;
struct seqlist;
typedef struct seqlist contact;
void initcontact(contact* con);
void contactadd(contact* con);