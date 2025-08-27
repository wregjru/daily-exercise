#define _CRT_SECURE_NO_WARNINGS
#include"contact.h"
//静态版本
//void initcontact(contact * pc)
//{
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
//动态版本
int initcontact(contact* pc)
{
	assert(pc);
	pc->count = 0;
	pc->data = (peoinfo*)calloc(3, sizeof(peoinfo));
	pc->capacity = 3;
	if (pc->data == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	return 0;
}
void loadcontact(contact* pc)
{
	FILE* pfread = fopen("text.txt", "rb");
	if (pfread == NULL)
	{
		perror("loadcontact");
		return;
	}
	peoinfo add = { 0 };
	while (fread(&add, sizeof(peoinfo), 1, pfread) == 1)
	{
		assert(pc);
		if (pc->count == pc->capacity)
		{
			peoinfo* ptr = (peoinfo*)realloc(pc->data, (pc->capacity + 1) * (sizeof(peoinfo)));
			if (ptr == NULL)
			{
				printf("addcount:%s", strerror(errno));
				return;
			}
			else
			{
				pc->data = ptr;
				pc->capacity++;
			}
		}
		pc->data[pc->count] = add;
		pc->count++;
	}
	fclose(pfread);
	pfread = NULL;
}
//void addcount(contact * pc)
//{
//	assert(pc);
//	if (pc->count == 100)
//	{
//		printf("太大了");
//		return;
//	}
//	printf("输入名字:");
//	scanf("%s", pc->data[pc->count].name);
//	printf("输入年龄:");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("输入性别:");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("输入电话:");
//	scanf("%s", pc->data[pc->count].tele);
//	printf("输入地址:");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("成功\n");
//}
void addcount(contact* pc)
{
	assert(pc);
	if (pc->count == pc->capacity)
	{
		peoinfo* ptr = (peoinfo*)realloc(pc->data,(pc->capacity + 1) * (sizeof(peoinfo)));
		if (ptr == NULL)
		{
			printf("addcount:%s", strerror(errno));
			return;
		}
		else
		{
			pc->data = ptr;
			pc->capacity++;
		}
	}
	printf("输入名字:");
	scanf("%s", pc->data[pc->count].name);
	printf("输入年龄:");
	scanf("%d", &(pc->data[pc->count].age));
	printf("输入性别:");
	scanf("%s", pc->data[pc->count].sex);
	printf("输入电话:");
	scanf("%s", pc->data[pc->count].tele);
	printf("输入地址:");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("成功\n");
}
void showcontact(contact* pc)
{
	for (int i = 0; i < (pc->count); i++)
	{
		printf("%d******%s*****\n", i+1,pc->data[i].name);
		printf("年龄：%d\n", pc->data[i].age);
		printf("性别：%s\n", pc->data[i].sex);
		printf("电话：%s\n", pc->data[i].tele);
		printf("地址：%s\n", pc->data[i].addr);

	}
}
void delcontact(contact* pc)
{
	char del_name[MAX_NAME] = {0};//注意
	assert(pc);
	if (pc->count == 0)
	{
		printf("没有数据可删\n");
		return;
	}
	printf("要删的名字：");
	scanf("%s", del_name);
	int s=searchcontact(pc, del_name);
	if (s == -1)
	{
		printf("没找到\n");
		return;
	}
	for (int j = s; j < pc->count; j++)
	{
		pc->data[j] = pc->data[j + 1];

	}
	pc->count--;
	printf("删除成功\n");

}
int searchcontact(contact*pc,char name[])
{
	for (int i = 0; i < pc->count; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
			return i;
	}
	return -1;
}
void modifycontact(contact* pc)
{
	char modify_name[MAX_NAME] = { 0 };
	printf("要修改名字：");
	scanf("%s", modify_name);
	int v=searchcontact(pc, modify_name);
	if (v == -1)
	{
		printf("找不到\n");
		return;
	}
	printf("%d******%s*****\n", v + 1, pc->data[v].name);
	printf("年龄：%d\n", pc->data[v].age);
	printf("性别：%s\n", pc->data[v].sex);
	printf("电话：%s\n", pc->data[v].tele);
	printf("地址：%s\n", pc->data[v].addr);
	printf("输入名字:");
	scanf("%s", pc->data[v].name);
	printf("输入年龄:");
	scanf("%d", &(pc->data[v].age));
	printf("输入性别:");
	scanf("%s", pc->data[v].sex);
	printf("输入电话:");
	scanf("%s", pc->data[v].tele);
	printf("输入地址:");
	scanf("%s", pc->data[v].addr);
	printf("修改成功\n");

}
int comp_name(const void* e1, const void* e2)
{
	return strcmp(((peoinfo*)e1)->name, ((peoinfo*)e2)->name);
}
void sortcontact(contact* pc)
{
	qsort(pc->data, pc->count, sizeof(peoinfo), comp_name);
	printf("成功\n");
}
void descontact(contact* pc)
{
	free(pc->data);
	pc->data = NULL;
}
void savecontact(contact* pc)
{
	assert(pc);
	FILE* pfsave = fopen("text.txt", "wb");
	if (pfsave == NULL)
	{
		perror("savecontact");
		return;
	}
	for (int i = 0; i < pc->count; i++)
	{
		fwrite(pc->data+i, sizeof(peoinfo), 1, pfsave);
	}
	fclose(pfsave);
	pfsave = NULL;
}