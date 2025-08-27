#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAX 100
#define MAX_NAME 100
#define MAX_TEL 12
#define MAX_ADDR 30
typedef struct peoinfo//人信息
{
	char name[MAX_NAME];
	int age;
	char sex[10];
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
}peoinfo;
//静态版本
//typedef struct contact//通讯列表
//{
//	peoinfo data[MAX];
//	int count;
//}contact;
//动态版本
typedef struct contact//通讯列表
{
	peoinfo* data;
	int count;
	int capacity;
}contact;
int initcontact(contact* pc);//初始化通讯录
void addcount(contact* pc);//添加
void showcontact(contact* pc);//展示
void delcontact(contact* pc);
int searchcontact(contact* pc, char name[]);
void modifycontact(contact*pc);
void sortcontact(contact* pc);
void descontact(contact* pc);
void savecontact(contact* pc);