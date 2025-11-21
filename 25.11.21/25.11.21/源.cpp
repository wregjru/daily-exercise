#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include <cstring>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;

int num[200010];
int dat[30] = { 1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,10,10,11,11,12,12,1 };
void solve()
{
	int n; cin >> n;
	if (n % 2 != 0 && n < 25)
	{
		cout << -1 << endl;
		return;
	}
	if (n % 2 == 0)
	{
		for (int i = 1; i <= n / 2; i++)
		{
			cout << i << " " << i << " ";
		}
		cout << endl;
	}
	else
	{
		for (int i = 0; i < 25; i++)
		{
			cout << dat[i] << " ";
		}
		for (int i = 1; i <= (n - 25) / 2; i++)
		{
			cout << i + 12 << " " << i + 12 << " ";
		}
	}
}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}







//int ca[1010][1010];//-1困住，0不确定，1逃走
//char tu[1010][1010];
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//char ch[4] = { 'U','D','L','R' };
//char ch2[4] = { 'D','U','R','L' };
//bool gone[1010][1010];
//
//struct node
//{
//	int x; int y;
//}wen[1000010];
//int pos;
//
//
//void solve()
//{
//	int n; int m; cin >> n >> m;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		for (int j = 0; j <= m + 2; j++)
//		{
//			ca[i][j] = 0;
//			gone[i][j] = 0;
//		}
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	if (n == 1 && m == 1)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	queue<PII>qu;
//	for (int i = 1; i <= n; i++)
//	{
//		if (tu[i][1] == 'L')qu.push({ i,1 });
//		if (tu[i][m] == 'R')qu.push({ i,m });
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		if (tu[1][i] == 'U')qu.push({ 1,i });
//		if (tu[n][i] == 'D')qu.push({ n,i });
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop();
//		if (ca[a][b] == 1)continue;
//		ca[a][b] = 1;
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x<1 || x>n || y<1 || y>m||tu[x][y]==1)continue;
//			if (tu[x][y] == '?')continue;
//			if (tu[x][y] != ch[i])continue;
//			qu.push({ x,y });
//		}
//	}
//	queue<PII>qu3;
//	for (int i = 1; i <= n; i++)
//	{
//		for(int j=1;j<=m;j++)
//		{
//			if (tu[i][j] == '?')
//			{
//				if (gone[i][j])continue;
//				int flag = 0;
//				for (int k = 0; k < 4; k++)
//				{
//					int x = i + dx[k]; int y = j + dy[k];
//					if (tu[x][y] == '?')
//					{
//						flag = 1;
//						break;
//					}
//				}
//				if (flag == 1)
//				{
//					qu3.push({ i,j });
//					queue<PII>qu2;
//					qu2.push({ i,j });
//					while (!qu2.empty())
//					{
//						int a = qu2.front().first; int b = qu2.front().second;
//						qu2.pop();
//						if (gone[a][b])continue;
//						gone[a][b] = true;
//						ca[a][b] = -1;
//						for (int k = 0; k < 4; k++)
//						{
//							int x = a + dx[k]; int y = b + dy[k];
//							if (x<1 || x>n || y<1 || y>m || gone[x][y])continue;
//							if (tu[x][y] != '?')continue;
//							qu2.push({ x,y });
//						}
//					}
//				}
//				if (flag == 0)
//				{
//					int f = 0;
//					for (int k = 0; k < 4; k++)
//					{
//						int x = i + dx[k]; int y = j + dy[k];
//						if (ca[x][y] == 0)
//						{
//							f = 1;
//							ca[i][j] = -1;
//							qu3.push({ i,j });
//							break;
//						}
//					}
//					if (f == 0)ca[i][j] = 1;
//				}
//			}
//		}
//	}
//	while (!qu3.empty())
//	{
//		int a = qu3.front().first; int b = qu3.front().second;
//		if (a == 2 && b == 2)
//		{
//			int sss = 0;
//		}
//		qu3.pop();
//		ca[a][b] = -1;
//		for (int k = 0; k < 4; k++)
//		{
//			int x = a + dx[k]; int y = b + dy[k];
//			if (ca[x][y] != 0)continue;
//			if (x<1 || x>n || y<1 || y>m)continue;
//			if (tu[x][y] != ch[k])continue;
//			qu3.push({ x,y });
//
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (ca[i][j] == -1||ca[i][j]==0)ret++;
//		}
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



/*
1
2 3
???
???



1
3 3
?U?
R?L
RDL


1
2 1
D
U
*/



//void solve()
//{
//	int n; cin >> n;
//	if (n % 2 == 1)
//	{
//		cout << n << endl;
//		int k = 0;
//		while ((1 << k) < n)
//		{
//			k++;
//		}
//		k -= 1;
//		int a = 1;
//		int b = n - 2;
//		int c = n - 1;
//		int d = n;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == a || i == b || i == c || i == d)continue;
//			cout << i << " ";
//		}
//		cout << a << " " << b << " " << c << " " << d << " ";
//		cout << endl;
//	}
//	else
//	{
//		int k = 0;
//		while ((1 << k) <= n)
//		{
//			k++;
//		}
//		cout << (1 << k) - 1 << endl;
//		if (n == (1 << (k - 1)))
//		{
//			int a = 1; int b = n-3; int c = n - 2; int d = n - 1; int e = n;
//			for (int i = 1; i <= n; i++)
//			{
//				if (i == a || i == b || i == c || i == d || i == e)continue;
//				cout << i << " ";
//			}
//			cout << a << " " << b << " " << c << " " << d << " " << e << " ";
//			cout << endl;
//		}
//		else
//		{
//			int a = n;
//			int b = n - 1;
//			int c = (1 << (k - 1)) - 1;
//			for (int i = 1; i <= n; i++)
//			{
//				if (i == a || i == b || i == c)continue;
//				cout << i << " ";
//			}
//			cout << a << " " << b << " " << c << " ";
//			cout << endl;
//		}
//	}
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//void solve()
//{
//	int n; cin >> n;
//	if (n % 2 == 1)
//	{
//		cout << n << endl;
//		int k = 0;
//		while ((1 << k) < n)
//		{
//			k++;
//		}
//		k -= 1;
//		int a = 1;
//		int b = n-2;
//		int c = n - 1;
//		int d = n;
//		for (int i = 1; i <= n; i++)
//		{
//			if (i == a || i == b || i == c||i==d)continue;
//			cout << i << " ";
//		}
//		cout << a << " " << b << " " << c << " " << d << " ";
//		cout << endl;
//	}
//	else
//	{
//		int k = 0;
//		while ((1 << k) <= n)
//		{
//			k++;
//		}
//		cout << (1 << k)-1 << endl;
//		if (n == (1 << (k - 1)))
//		{
//			int a = 1; int b = 3; int c = n - 2; int d = n - 1; int e = n;
//			for (int i = 1; i <= n; i++)
//			{
//				if (i == a || i == b || i == c || i == d || i == e)continue;
//				cout << i << " ";
//			}
//			cout << a << " " << b << " " << c << " " << d << " " << e << " ";
//			cout << endl;
//		}
//		else
//		{
//			int a = n;
//			int b = n - 1;
//			int c = (1 << (k - 1)) - 1;
//			for (int i = 1; i <= n; i++)
//			{
//				if (i == a || i == b || i == c)continue;
//				cout << i << " ";
//			}
//			cout << a << " " << b << " " << c << " ";
//			cout << endl;
//		}
//	}
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//struct node
//{
//	int l; int r;
//}tu[5010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	string st; cin >> st;
//	st = " " + st;
//	for (int i = 1; i <= n; i++)
//	{
//		if (st[i] == 'p')
//		{
//			tu[++pos].l = 1;
//			tu[pos].r = i;
//		}
//		else if (st[i] == 's')
//		{
//			tu[++pos].l = i;
//			tu[pos].r = n;
//		}
//	}
//	tu[++pos].l = 1;
//	tu[pos].r = n;
//	int flag = 1;
//	for(int i=1;i<=pos;i++)
//	{
//		for (int j = i; j <= pos; j++)
//		{
//			int l1 = tu[i].l; int r1 = tu[i].r;
//			int l2 = tu[j].l; int r2 = tu[j].r;
//			if ((l1 > l2 && r1 > r2) || (l1 < l2 && r1 < r2) || (r1 < l2) || (r2 < l1))
//			{
//				flag = 0; break;
//			}
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "YES" << endl;
//
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



/*
1
5
ppppp
*/





//int tu[1010][1010];
//
//
//void solve()
//{
//	int n; int m; cin >> n >> m;
//	int x = 1; int y = 1;
//	string lu; cin >> lu;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	int sum = 0;
//	int flag = 1;//1:填行，0：填列
//	if (lu[0] == 'D')
//	{
//		for (int i = 1; i <= m; i++)sum += tu[1][i];
//		flag = 1;
//		x++;
//		tu[1][1] = -sum;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)sum += tu[i][1];
//		flag = 0;
//		y++;
//		tu[1][1] = -sum;
//	}
//	sum = 0;
//	for (int i = 1; i < n+m-2; i++)
//	{
//		if (x == 2 && y == 5)
//		{
//			int sss = 1;
//		}
//		if (lu[i] != lu[i - 1])flag = 1 - flag;
//		if (flag == 1)
//		{
//			int s = 0;
//			for (int j = 1; j <= m; j++)
//			{
//				s += tu[x][j];
//			}
//			tu[x][y] = sum - s;
//			x++;
//		}
//		else
//		{
//			int s = 0;
//			for (int j = 1; j <= n; j++)
//			{
// 				s += tu[j][y];
//         	}
//			tu[x][y] = sum - s;
//			y++;
//		}
// 	}
//	int rrr = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		rrr += tu[i][m];
//	}
//	tu[n][m] = -rrr;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << tu[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



/*
1
4 5
DRRRRDD
0 1 0 2 3
0 0 0 0 0
-1 0 -3 -3 0
0 0 0 -1 0
*/