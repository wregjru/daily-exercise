#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#define MAX 100
#define MAX_NAME 100
#define MAX_TEL 12
#define MAX_ADDR 30
typedef struct peoinfo//����Ϣ
{
	char name[MAX_NAME];
	int age;
	char sex[10];
	char tele[MAX_TEL];
	char addr[MAX_ADDR];
}peoinfo;
//��̬�汾
//typedef struct contact//ͨѶ�б�
//{
//	peoinfo data[MAX];
//	int count;
//}contact;
//��̬�汾
typedef struct contact//ͨѶ�б�
{
	peoinfo* data;
	int count;
	int capacity;
}contact;
int initcontact(contact* pc);//��ʼ��ͨѶ¼
void addcount(contact* pc);//���
void showcontact(contact* pc);//չʾ
void delcontact(contact* pc);
int searchcontact(contact* pc, char name[]);
void modifycontact(contact*pc);
void sortcontact(contact* pc);
void descontact(contact* pc);
void savecontact(contact* pc);