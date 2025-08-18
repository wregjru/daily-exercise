#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define HANG 3
#define LIE 3
void menu()
{
	printf("*********************\n");
	printf("*****1开始，0退出****\n");
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
	printf("请下棋\n");
	printf("坐标:");
	scanf("%d %d", &x, &y);
	if (x > HANG || y > LIE || x <= 0 || y <= 0)
	{
		printf("重新输入\n");
		goto again;
	}
	if (board[x - 1][y - 1] == ' ')
		board[x - 1][y - 1] = '#';
	else if (board[x - 1][y - 1] != ' ')
	{
		printf("重新输入\n");
		goto again;
	}
}
void computer(char board[HANG][LIE])
{

	printf("电脑下棋\n");
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
int pan(char board[HANG][LIE])//1#赢，2*赢，3平局,棋盘为HANG行LIE列的矩阵
{
	int i = 0;
	int j = 0;
	for (i = 0; i < HANG; i++)//判断行
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
	for (j = 0; j < HANG; j++)//判断列
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
	if (HANG == LIE)//判断斜边
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
	for (i = 0; i < HANG; i++)//判断平局
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
			printf("玩家赢\n");
			break;
		}
		if (e == 2)
		{
			printf("电脑赢\n");
			break;
		}
		if (e == 3)
		{
			printf("平局\n");
			break;
		}
		computer(board);
		printboard(board);
		e = pan(board);
		if (e == 1)
		{
			printf("玩家赢\n");
			break;
		}
		if (e == 2)
		{
			printf("电脑赢\n");
			break;
		}
		if (e == 3)
		{
			printf("平局\n");
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
		printf("请选择");
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
			printf("重新输入");
			break;
		}



		}
	}
	return 0;
}

