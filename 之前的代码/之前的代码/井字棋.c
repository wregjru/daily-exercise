#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define HANG 3
#define LIE 3
void menu()
{
	printf("*********************\n");
	printf("*****1��ʼ��0�˳�****\n");
	printf("*********************\n");
}
void chushihua(char board[HANG][LIE],int hang,int lie)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < HANG; i++)
	{
		for (j = 0; j < LIE; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void printboard(char board[HANG][LIE])
{

	int i = 0;
	int j = 0;
	for (i = 1; i <= HANG; i++)
	{


		for (j = 1; j <= LIE; j++)
		{
			if(i<HANG)
			printf("_%c_",board[i-1][j-1]);
			if (i == HANG)
			printf(" %c ",board[i-1][j-1]);
			if (j < LIE)
			printf("|");

		}
		printf("\n");

	}


}
void player(char board[HANG][LIE])
{
	again:
	int x = 0;
	int y = 0;
	printf("������\n");
	printf("����:");
	scanf("%d %d", &x, &y);
	if (x > HANG || y > LIE || x <= 0 || y <= 0)
	{
		printf("��������\n");
		goto again;
	}
	if (board[x - 1][y - 1] == ' ')
		board[x - 1][y - 1] = '#';
	else if (board[x - 1][y - 1] != ' ')
	{
		printf("��������\n");
		goto again;
	}
}
void computer(char board[HANG][LIE])
{

	printf("��������\n");
	again:
	int x = 0;
	int y = 0;
	x = rand() % HANG;
	y = rand() % LIE;
	if (board[x][y] != ' ')
	{
		goto again;
	}
	else if (board[x][y] == ' ')
	{
		board[x][y] = '*';
	}

}
int pan(char board[HANG][LIE])//1#Ӯ��2*Ӯ��3ƽ��,����ΪHANG��LIE�еľ���
{
	int i = 0;
	int j = 0;
	for (i = 0; i < HANG; i++)//�ж���
	{
		if (board[i][0] == '#')
		{
			int flag = 0;
			for (j = 1; j < LIE; j++)
			{
				if (board[i][j] == board[i][0])
					flag = flag + 1;
				if (flag == LIE - 1)
				{
					return 1;
					break;
				}
			}
		}
		if (board[i][0] == '*')
		{
			int flag = 0;
			for (j = 1; j < LIE; j++)
			{
				if (board[i][j] == board[i][0])
					flag = flag + 1;
				if (flag == LIE - 1)
				{
					return 2;
					break;
				}

			}
		}
	}
	for (j = 0; j < HANG; j++)//�ж���
	{
		if (board[0][j] == '#')
		{
			int flag = 0;
			for (i = 1; i < LIE; i++)
			{
				if (board[i][j] == board[0][j])
					flag = flag + 1;
				if (flag == LIE - 1)
				{
					return 1;
					break;
				}
			}
		}
		if (board[0][j] == '*')
		{
			int flag = 0;
			for (i = 1; i < LIE; i++)
			{
				if (board[i][j] == board[0][j])
					flag = flag + 1;
				if (flag == LIE - 1)
				{
					return 2;
					break;
				}

			}
		}
	}
	if (HANG == LIE)//�ж�б��
	{
		int i = 0;
		int flag = 0;
		if (board[0][0] == '#')
		{
			for (i = 1; i < HANG; i++)
			{
				if (board[i][i] == '#')
				{
					flag = flag + 1;
				}
				if (flag == HANG - 1)
				{
					return 1;
				}
			}
		}
		if (board[0][LIE-1] == '#')
		{
			for (i = 1; i < HANG; i++)
			{
				if (board[i][LIE-1-i] == '#')
				{
					flag = flag + 1;
				}
				if (flag == HANG - 1)
				{
					return 1;
				}
			}
		}
		if (board[0][0] == '*')
		{
			for (i = 1; i < HANG; i++)
			{
				if (board[i][i] == '#')
				{
					flag = flag + 1;
				}
				if (flag == HANG - 1)
				{
					return 2;
				}
			}
		}
		if (board[0][LIE - 1] == '*')
		{
			for (i = 1; i < HANG; i++)
			{
				if (board[i][LIE - 1 - i] == '#')
				{
					flag = flag + 1;
				}
				if (flag == HANG - 1)
				{
					return 2;
				}
			}
		}
	}
	int flag = 0;
	for (i = 0; i < HANG; i++)//�ж�ƽ��
	{
		for (j = 0; j < LIE; j++)
		{
			if (board[i][j] != ' ')
			{
				flag = flag + 1;
			}
		}
	}
	int all = HANG * LIE;
	if (flag == all)
		return 3;

}
void game()
{

	char board[HANG][LIE] = { 0 };
	chushihua(board, HANG, LIE);
	printboard(board);
	while (1)
	{
		int e = 0;
		player(board);
		printboard(board);
		e=pan(board);
		if (e == 1)
		{
			printf("���Ӯ\n");
			break;
		}
		if (e == 2)
		{
			printf("����Ӯ\n");
			break;
		}
		if (e == 3)
		{
			printf("ƽ��\n");
			break;
		}
		computer(board);
		printboard(board);
		e = pan(board);
		if (e == 1)
		{
			printf("���Ӯ\n");
			break;
		}
		if (e == 2)
		{
			printf("����Ӯ\n");
			break;
		}
		if (e == 3)
		{
			printf("ƽ��\n");
			break;
		}

	}



}
int main()
{
	srand((unsigned int)time(NULL));
	while (1)
	{
		menu();
		int input = 0;
		printf("��ѡ��");
		scanf("%d", &input);


		switch (input)
		{
		case 0:
		{
			return 0;
			break;

		}
		case 1:
		{
			game();

			break;
		}
		default:
		{
			printf("��������");
			break;
		}



		}
	}
	return 0;
}

