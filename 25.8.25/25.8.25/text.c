#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
void menu()
{
	printf("**************************\n");
	printf("****1.add        2.del ***\n");
	printf("****3.search     4.modify*\n");
	printf("****5.show       6.sort***\n");
	printf("****0.exit****************\n");
}
int main()
{
	contact con;
	int input = 0;
	initcontact(&con);
	do
	{
		menu();
		printf("选择：");
		scanf("%d",&input);
		switch (input)
		{
		case 1:
			addcount(&con);
			break;
		case 2:
			delcontact(&con);
			break;
		case 3:
			char find_name[MAX_NAME] = { 0 };
			printf("输入名字：");
			scanf("%s", find_name);
			int k=searchcontact(&con, find_name);
			if (k == -1)
			{
				printf("没找到\n");
				break;
			}
			printf("%d******%s*****\n", k + 1, con.data[k].name);
			printf("年龄：%d\n", con.data[k].age);
			printf("性别：%s\n", con.data[k].sex);
			printf("电话：%s\n", con.data[k].tele);
			printf("地址：%s\n", con.data[k].addr);

			break;
		case 4:
			modifycontact(&con);
			break;
		case 5:
			showcontact(&con);
			break;
		case 6:
			sortcontact(&con);
			break;
		case 0:
			savecontact(&con);
			descontact(&con);
			break;
		default:
			printf("重新输入");
			break;
		}
	} while (input);
	return 0;
}
