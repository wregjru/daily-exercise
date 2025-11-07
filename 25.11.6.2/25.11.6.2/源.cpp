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
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1



int n;
int num[100010];
signed main()
{

	return 0;
}
int num[110];
int n;





signed main()
{
	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;
		for (int i = 1; i <= n; i++)
		{
			cin >> num[i];
		}
		sort(num + 1, num + 1 + n);
		int s; cin >> s;
		if (s >= num[1] && s <= num[n])cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}





//int n; int k;
//int num[10010];
//int dp[10010];
//signed main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int ma = num[i];
//		for (int j = i - 1; j >= 0 && i - j <= k; j--)
//		{
//			dp[i] = max(dp[i], dp[j] + ma * (i - j));
//			ma = max(ma, num[j]);
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}
//






//int n; int k;
//int num[10010];
//
//signed main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	int p = (n - 1) / k + 1;
//	int ret = 0;
//	for (int j = 0; j < p-1; j++)
//	{
//		ret += k * num[n - j];
//	}
//	int d = n - (p - 1) * k;
//	ret += num[n - p + 1] * d;
//	cout << ret << endl;
//	return 0;
//}






//int x1; int y1; int x2; int y2;
//bool tu[10][10];//对，不能走
//int n; int m; int t;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int ret;
//bool gone[10][10];
//void dfs(int x, int y)
//{
//	if (x == x2 && y == y2)
//	{
//		ret++;
//		return;
//	}
//	gone[x][y] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int X = x + dx[i]; int Y = y + dy[i];
//		if (gone[X][Y])continue;
//		if (tu[X][Y])continue;
//		if (X<1 || Y<1 || X>n || Y>m)continue;
//		dfs(X, Y);
//	}
//	gone[x][y] = false;
//
//
//}
//
//signed main()
//{
//	cin >> n >> m >> t;
//	
//	cin >> x1 >> y1 >> x2 >> y2;
//	for (int i = 1; i <= t; i++)
//	{
//		int a; int b;
//		cin >> a >> b;
//		tu[a][b] = true;
//	}
//	dfs(x1, y1);
//	cout << ret << endl;
//	return 0;
//}