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


int mod = 1000000009;
int dp[1010][1010][13];
int n; int m; int K;
int c1[1010];
int c2[1010];
signed main()
{
	cin >> n >> m >> K;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j][0] = 1;
		}
	}
	for (int i = 1; i <= n; i++)cin >> c1[i];
	for (int i = 1; i <= m; i++)cin >> c2[i];
	sort(c1 + 1, c1 + 1 + n);
	sort(c2 + 1, c2 + 1 + m);
	for (int k = 1; k <= K; k++)
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				dp[i][j][k] = ((dp[i][j][k] - dp[i - 1][j - 1][k]) % mod + mod) % mod;
				dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j][k]) % mod;
				dp[i][j][k] = (dp[i][j][k] + dp[i][j - 1][k]) % mod;
				if (c1[i] > c2[j])dp[i][j][k] = (dp[i][j][k] + dp[i - 1][j - 1][k - 1]) % mod;
			}
		}
	}
	cout << dp[n][m][K] % mod << endl;
	return 0;
}








//int e[2000010];
//int w[2000010];
//int ne[2000010];
//int la[2000010];
//int pos;
//int ret;
//bool gone[2000010];
//int n;
//void add(int x, int y, int z)
//{
//	e[++pos] = y;
//	w[pos] = z;
//	ne[pos] = la[x];
//	la[x] = pos;
//}
//
//int dfs(int s)
//{
//	int cnt = 1;
//	gone[s] = true;
//	for (int i = la[s]; i != 0; i = ne[i])
//	{
//		if (gone[e[i]])continue;
//		int t = dfs(e[i]);
//		cnt += t;
//		ret += abs(n - 2 * t) * w[i];
//	}
//	return cnt;
//}
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		add(a, b, c);
//		add(b, a, c);
//	}
//	dfs(1);
//	cout << ret << endl;
//	return 0;
//}









//int n; int m;
//int tu[600][600];
//int dpl[600][600];
//int dpr[600][600];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { -1,1,0,0 };
//bool gone[600][600];
//void dfs(int i, int j)
//{
//	gone[i][j] = true;
//	for (int k = 0; k < 4; k++)
//	{
//		int x = i + dx[k];
//		int y = j + dy[k];
//		if (x<1 || x>n || y<1 || y>m || tu[x][y] >= tu[i][j])continue;
//		if (!gone[x][y])dfs(x, y);
//		dpl[i][j] = min(dpl[i][j], dpl[x][y]);
//		dpr[i][j] = max(dpr[i][j], dpr[x][y]);
//	}
//}
//
//
//
//signed main()
//{
//	memset(dpl, 0x3f, sizeof(dpl));
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		dpr[n][i] = dpl[n][i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		if (!gone[1][i])
//			dfs(1, i);
//	}
//	int r = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		if (!gone[n][i])
//		{
//			r++;
//		}
//	}
//	if (r)
//	{
//		cout << 0 << endl << r << endl;
//		return 0;
//	}
//	cout << 1 << endl;
//	int x = 1;
//	int cnt = 0;
//	while (x <= m)
//	{
//		int right = 0;
//		for(int i = 1; i <= m; i++)
//		{
//			if (dpl[1][i] <= x)right = max(right, dpr[1][i]);
//		}
//		cnt++;
//		x = right + 1;
//	}
//	cout << cnt << endl;
//	return 0;
//}







//int n; int m; int k;
//int f[1100];
//struct node
//{
//	int x; int y; int z;
//}e[10010];
//
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	int fa = _find(a); int fb = _find(b);
//	f[fa] = fb;
//}
//bool cmp(node& x, node& y)
//{
//	return x.z < y.z;
//}
//signed main()
//{
//	cin >> n >> m >> k;
//	if (n == k)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	if (k <= 0 || k > n)
//	{
//		cout << "No Answer" << endl;
//		return 0;
//	}
//	for (int i = 1; i <= n; i++)f[i] = i;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> e[i].x >> e[i].y >> e[i].z;
//	}
//	sort(e + 1, e + 1 + m, cmp);
//	int pos = 0;
//	int ret = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int fx = _find(e[i].x);
//		int fy = _find(e[i].y);
//		if (fx == fy)continue;
//		f[fx] = fy;
//		ret += e[i].z;
//		pos++;
//		if (pos == n - k)break;
//	}
//	if (pos != n - k)cout << "No Answer" << endl;
//	else cout << ret << endl;
//	return 0;
//}
