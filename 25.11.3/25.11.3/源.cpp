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
typedef unsigned long long ull;
typedef long long ll;

int dp[1010][40];
int tim[1010];
int n; int m;
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> tim[i];
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			if ((tim[i] == 1 && j % 2 == 0) || (tim[i] == 2 && j % 2 == 1))
			{
				dp[i][j] = dp[i - 1][j] + 1;
				if (j != 0)
				{
					dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + 1);
				}
			}
			else
				dp[i][j] = dp[i - 1][j];
			if (j != 0)
			{
				dp[i][j] = max(dp[i][j], dp[i - 1][j - 1]);
			}
			
		}
	}
	int ret = 0;
	for (int i = 1; i <= m; i++)
	{
		ret = max(ret, dp[n][i]);
	}
	cout << ret << endl;
	return 0;
}




//int f[50010];//1,f最大
//int g[50010];//g,n最大
//int num[50010];
//int n; int k;
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	f[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		int r = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			if (num[i] - num[j] <= k)
//			{
//				r = i - j+1; break;
//			}
//		}
//		f[i] = max(f[i - 1], r);
//	}
//	g[n] = 1;
//	for (int i = n - 1; i >= 1; i--)
//	{
//		int r = 0;
//		for (int j = n; j >= i; j--)
//		{
//			if (num[j] - num[i] <= k)
//			{
//				r = j - i+1; break;
//			}
//		}
//		g[i] = max(g[i + 1], r);
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, f[i] + g[i+1]);
//	}
//	cout << ret << endl;
//	return 0;
//}






//int f[1010];
//int n; int m;
//bool root[1010];
//int ret;
//int _find(int s)
//{
//	return f[s] == s ? s : f[s] = _find(f[s]);
//}
//void uni(int x, int y)
//{
//	int fx = _find(x); int fy = _find(y);
//	f[fx] = fy;
//}
//
//
//int main()
//{
//	while (cin >> n)
//	{
//		if (n == 0)break;
//		cin >> m;
//		for (int i = 1; i <= n; i++)
//		{
//			f[i] = i;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			int a; int b;
//			cin >> a >> b;
//			uni(a, b);
//		}
//		ret = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int fi = _find(i);
//			if (fi == i)
//			{
//				ret++;
//			}
//		}
//		cout << ret - 1 << endl;
//	}
//	
//	return 0;
//}




//struct node
//{
//	int h; int a; int c;
//}zhu[410];
//int n;
//int dp[40010];//i种限高j最高高度
//bool cmp(node& a, node& b)
//{
//	return a.a < b.a;
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> zhu[i].h >> zhu[i].a >> zhu[i].c;
//	}
//	sort(zhu + 1, zhu + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = zhu[i].a; j >= 0; j--)
//		{
//			for (int k = 0; k <= zhu[i].c && k * zhu[i].h <= j; k++)
//			{
//				dp[j] = max(dp[j], dp[j - k * zhu[i].h] + k * zhu[i].h);
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= zhu[n].a; i++)
//	{
//		ret = max(ret, dp[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}





//vector<int> tu[100010];
//int n; int m;//n点m路
//bool gone[100010];//是否走过
//int far[100010];//最大值
//int pos;//记录有多少点达到
//void bfs(int s)
//{
//	queue<int> qu;
//	qu.push(s);
//	if (gone[s])return;
//	gone[s] = true;
//	pos++;
//	far[s] = s;
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int b = tu[a][i];
//			if (gone[b])continue;
//			gone[b] = true;
//			far[b] = s;
//			pos++;
//			qu.push(b);
//		}
//	}
//}
//
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[b].push_back(a);//反图，b走向a
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		bfs(i);
//		if (pos == n)break;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << far[i] << " ";
//	}
//	return 0;
//}







//int n;
//int cha[50010];
//unordered_map<int, int> ma;
//int main()
//{
//	ma[0] = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		cha[i] = (cha[i - 1] + s) % 7;
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (ma.count(cha[i]))
//		{
//			ret = max(ret, i - ma[cha[i]]);
//		}
//		else
//		{
//			ma[cha[i]] = i;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}






//int num[1000010];
//int scr[6];
//int n;
//int pos;
//ll ret;
//int main()
//{
//	cin >> n;
//	for (int i = 0; i < 6; i++)
//	{
//		cin >> scr[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 0)
//		{
//			pos = 0; continue;
//		}
//		pos++;
//		if (pos < 3)ret += scr[0];
//		else if (pos >= 3 && pos < 7)ret += scr[1];
//		else if (pos >= 7 && pos < 30)ret += scr[2];
//		else if (pos >= 30 && pos < 120)ret += scr[3];
//		else if (pos >= 120 && pos < 365)ret += scr[4];
//		else if (pos >= 365)ret += scr[5];
//	}
//	cout << ret << endl;
//	return 0;
//}