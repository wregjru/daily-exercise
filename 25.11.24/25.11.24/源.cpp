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
#include <chrono>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);

int x; int y; int k;


int check(int mid)
{
	for (int i = 1; i <= x; i++)
	{
		mid =mid- mid / y;
	}
	return mid;
}


void solve()
{
	cin >> x >> y >> k;
	if (y == 1)
	{
		cout << -1 << endl;
		return;
	}
	int l = 1; int r = 1e12+1;
	while (l < r)
	{
		int mid = l+(r - l) / 2;
		if (check(mid)<k)
		{
			l = mid+1;
		}
		else
		{
			r = mid;
		}
		
	}
	if (l == 1e12 + 1)
	{
		cout << -1 << endl;
	}
	else cout << l << endl;

}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}

//1 2 5 1



//int xia[110];
//void solve()
//{
//	int k; int x; int a; cin >> k >> x >> a;
//	memset(xia, 0, sizeof(xia));
//	xia[1] = 1;
//	int mul = k - 1;
//	int sum = 1;
//	for (int i = 2; i <= x + 1; i++)
//	{
//		xia[i] = (sum) / mul + 1;
//		sum += xia[i];
//		if (sum > a)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	
//	cout << "YES" << endl;
//	/*if (x <= mul)
//	{ 
//		if (a >= x + 1)cout << "YES" << endl;
//		else cout << "NO" << endl;
//		return;
//	}
//	else
//	{
//		for (int i = 2; i <= x + 1; i++)
//		{
//			xia[i] = (sum) / mul+1;
//			sum += xia[i];
//		}
//		if (a >= sum)cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}*/
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

//1 3 3 6





//int tu[3][200010];
//bool gone[3][200010];
//int dx[3] = { 1,0,-1 };
//int dy[3] = { 0,1,0 };
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		char c; cin >> c;
//		tu[1][i] = (c == '<' ? -1 : 1);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		char c; cin >> c;
//		tu[2][i] = (c == '<' ? -1 : 1);
//	}
//	for (int i = 1; i <= 2; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			gone[i][j] = 0;
//		}
//	}
//	queue<PII>qu;
//	qu.push({ 1,2 }); qu.push({ 2,1 });
//	while (!qu.empty())
//	{
//		int a = qu.front().first; int b = qu.front().second;
//		qu.pop();
//		if (gone[a][b])continue;
//		gone[a][b] = true;
//		if (a == 2 && b == n)
//		{
//			cout << "YES" << endl;
//			return;
//		}
//		if ((a + b) % 2 == 1)
//		{
//			int x = a; int y = b + tu[a][b];
//			if (gone[x][y])continue;
//			//gone[x][y] = true;
//			qu.push({ x,y });
//		}
//		else
//		{
//			for (int i = 0; i < 3; i++)
//			{
//				int x = a + dx[i]; int y = b + dy[i];
//				if (x<1 || x>2 || y < 1 || y>n || gone[x][y])continue;
//				//gone[x][y] = true;
//				qu.push({ x,y });
//			}
//		}
//	}
//	cout << "NO" << endl;
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
4
>><<
>>><
*/