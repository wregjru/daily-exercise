#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define HANG 9
#define LIE 9
#define HANGS HANG+2
#define LIES LIE+2
#define all 10
void menu()
{
	printf("*********************\n");
	printf("*****1开始,0退出*****\n");
	printf("*********************\n");
}
void chushihua(char boom[HANGS][LIES], int a, int b, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b; j++)
		{
			boom[i][j] = set;
		}
	}

}
void printboard(char board[HANGS][LIES])
{
	int i = 0;
	int j = 0;
	int t = 0;
	for (j = 0; j < LIES - 1; j++)
		printf("%d ", j);
	printf("\n");
	for (i = 1; i < HANGS - 1; i++)
	{
		printf("%d ", i);

		for (j = 1; j < LIES - 1; j++)
		{
			printf("%c ", board[i][j]);


		}
		printf("\n");

	}


}
void setboom(char boom[HANGS][LIES])
{
	int count = all;
	int i = 1;
	for (i = 1; i <= count; i++)
	{
	again:
		int x = rand() % HANG + 1;
		int y = rand() % LIE + 1;
		if (boom[x][y] != '#')
			boom[x][y] = '#';
		else if (boom[x][y] == '#')
			goto again;

	}

}
void setnumber(char boom[HANGS][LIES])
{
	int i = 1;
	int j = 1;
	int flag = 0;
	for (i = 1; i <= HANG; i++)
	{
		for (j = 1; j <= LIE; j++)
		{
			if (boom[i][j] != '#')
			{
				int flag = 0;
				if (boom[i - 1][j - 1] == '#')
					flag++;
				if (boom[i][j - 1] == '#')
					flag++;
				if (boom[i + 1][j - 1] == '#')
					flag++;
				if (boom[i - 1][j] == '#')
					flag++;
				if (boom[i + 1][j] == '#')
					flag++;
				if (boom[i - 1][j + 1] == '#')
					flag++;
				if (boom[i][j + 1] == '#')
					flag++;
				if (boom[i + 1][j + 1] == '#')
					flag++;

				boom[i][j] = flag + '0';
			}

		}
	}
}
void zhankai(char boom[HANGS][LIES], char show[HANGS][LIES], int m, int n)
{
	if (show[m][n] != '*' || boom[m][n] == '#')
		return;
	show[m][n] = boom[m][n];
	if (boom[m][n] == '0')
	{
		zhankai(boom, show, m - 1, n - 1);
		zhankai(boom, show, m - 1, n);
		zhankai(boom, show, m - 1, n + 1);
		zhankai(boom, show, m, n - 1);
		zhankai(boom, show, m, n + 1);
		zhankai(boom, show, m + 1, n - 1);
		zhankai(boom, show, m + 1, n);
		zhankai(boom, show, m + 1, n + 1);
	}
}
int panduan(char show[HANGS][LIES])
{
	int i = 0;
	int j = 0;
	int flag = 0;
	for (i = 1; i <= HANG; i++)
	{
		for (j = 1; j <= LIE; j++)
			if (show[i][j] == '*')
			{
				flag++;
			}
	}
	if (flag == all)
	{
		return 1;
	}
	if (flag != all)
	{
		return 0;
	}
}


void game()
{
	char boom[HANGS][LIES] = { 0 };//布置雷，0代表无雷，#代表雷
	char show[HANGS][LIES] = { 0 };//显示格子，*代表未扫
	chushihua(boom, HANGS, LIES, '0');
	chushihua(show, HANGS, LIES, '*');
	setboom(boom);
	setnumber(boom);
	printf("-----------开始游戏------------\n");
	printboard(show);
	while (1)
	{
	again:
		printf("请输入坐标\n");
		int m = 0;
		int n = 0;
		scanf("%d %d", &m, &n);
		if (m > HANG || n > LIE || m < 1 || n < 1 || show[m][n] != '*')
		{
			printf("重新输入");
			goto again;
		}
		if (boom[m][n] != '#')
		{

			if (boom[m][n] == '0')
			{
				zhankai(boom, show, m, n);
			}
			show[m][n] = boom[m][n];
			printboard(show);
		}
		if (boom[m][n] == '#')
		{
			printf("爆炸\n");
			printboard(boom);
			break;
		}
		int s = panduan(show);
		if (s == 1)
		{
			printf("胜利\n");
			printboard(boom);
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
			printf("重新输入\n");
			break;
		}



		}
	}
	return 0;
}
