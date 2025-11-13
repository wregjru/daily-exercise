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

int a[3][200010];
int f[400010];
int qmin[200010];
int qmax[200010];
int bmin[200010];
int bmax[200010];
void solve()
{
	int n; cin >> n;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j <= n+10; j++)
		{
			a[i][j] = 0;
		}
	}
	for (int i = 0; i <=2*n+10; i++)f[i] = 0x3f3f3f3f3f3f3f3f;
	
	for (int i = 1; i <= 2; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			a[i][j]--;
		}
 	}
	for (int i = 0; i < n+10; i++)
	{
		qmin[i] = 0x3f3f3f3f3f3f3f3f;
		bmin[i] = 0x3f3f3f3f3f3f3f3f;
		qmax[i] = 0;
		bmax[i] = 0;
	}
	for (int i = 1; i <= n; i++)
		qmin[i] = min(a[1][i], qmin[i - 1]);
	for (int i = 1; i <= n; i++)
		qmax[i] = max(a[1][i], qmax[i - 1]);
	for (int i = n; i >= 1; i--)
	{
		bmax[i] = max(bmax[i + 1], a[2][i]);
		bmin[i] = min(bmin[i + 1], a[2][i]);
	}
	for (int i = n; i >= 1; i--)
	{
		int m = min(qmin[i], bmin[i]);
		int M = max(qmax[i], bmax[i]);
		f[m] = min(f[m], M);
	}
	for (int i = 2*n-1; i >= 0; i--)
	{
		f[i] = min(f[i + 1], f[i]);
	}
	int ret = 0;
	for (int i = 0; i < 2 * n; i++)
	{
		if(f[i]!=0x3f3f3f3f3f3f3f3f)ret = ret + 2 * n - f[i];
	}
	cout << ret << endl;
}




signed main()
{
	int T; cin >> T;
	while (T--)
	{
		solve();
	}
	return 0;
}
/*
1 6
6 6 5 7 9 12
1 4 2 8 5 6
*/








//int tu[600][600];
//int dpl[600][600];
//int dpr[600][600];
//int n; int m;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//bool gone[600][600];
//void dfs(int a, int b)
//{
//	gone[a][b] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int x = a + dx[i]; int y = b + dy[i];
//		if (x<1 || x>n || y<1 || y>m||tu[x][y]>=tu[a][b])continue;
//		if (!gone[x][y])dfs(x, y);
//		dpl[a][b] = min(dpl[x][y], dpl[a][b]);
//		dpr[a][b] = max(dpr[x][y], dpr[a][b]);
//	}
//}
//
//signed main()
//{
//	cin >> n >> m;
//	memset(dpl, 0x3f, sizeof(dpl));
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		dpr[n][i]=dpl[n][i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		if(!gone[1][i])
//		dfs(1, i);
//	}
//	int f = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		if (!gone[n][i])f++;
//	}
//	if (f)
//	{
//		cout << 0 << endl << f << endl;
//		return 0;
//	}
//	int x = 1;
//	int cnt = 0;
//	while (x <= m)
//	{
//		int right = 0;
//		for (int i = 1; i <= m; i++)
//		{
//			if (dpl[1][i] <= x)right = max(dpr[1][i], right);
//		}
//		cnt++;
//		x = right + 1;
//	}
//	cout << 1 << endl;
//	cout << cnt << endl;
//	return 0;
//}







//struct node
//{
//
//	int a; int b; int c;
//}e[10010];
//int n; int m; int k;
//
//bool cmp(node& a, node& b)
//{
//	return a.c < b.c;
//}
//
//int f[100010];
//
//int _find(int s)
//{
//	return f[s] == s ? s : f[s] = _find(f[s]);
//}
//
//
//signed main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)f[i] = i;
//	if (n == k)
//	{
//		cout << 0 << endl; return 0;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> e[i].a >> e[i].b >> e[i].c;
//	}
//	sort(e + 1, e + 1 + m, cmp);
//	int cnt = 0;
//	int ret = 0;
//	for (int i = 1; i <=m; i++)
//	{
//		int a = e[i].a; int b = e[i].b; int c = e[i].c;
//		int fa = _find(a); int fb = _find(b);
//		if (fa == fb)continue;
//			f[fa] = fb;
//			cnt++;
//			ret += c;
//		if (cnt == n - k)break;
//	}
//	if (cnt != n - k)
//	{
//		cout << "No Answer" << endl; return 0;
//	}
//	else
//	{
//		cout << ret << endl;
//	}
//	return 0;
//}




//int n; int m;
//const int N = 2e6 + 10;
//int st[N];
//int p[N];//质数
//int pos;//质数个数
//int ma[N];//最小质因数
//int cnt[N];//记录每个数质因子
//
//void getp()
//{
//	for (int i = 2; i < N; i++)
//	{
// 		if (!st[i])p[++pos] = i;
//		for (int j = 1; p[j] * i < N; j++)
//		{
//			st[p[j] * i] = true;
//			ma[p[j] * i] = p[j];
//			if (i % p[j] == 0)break;
//		}
//	}
//}
//int qow(int a, int b, int c)
//{
//	int ret = 1;
//	while (b)
//	{
//		if(b&1)ret = ret * a % c;
//		b >>= 1;
//		a = a * a % c;
//	}
//	return ret;
//}
//
//signed main()
//{
//	cin >> n >> m;
//	int mod = m;
//	getp();
//	for (int i = 2; i <= n; i++)cnt[i] = -1;
//	for (int i = n + 2; i <= 2 * n; i++)cnt[i] = 1;
//	for (int i = 2 * n; i >= 2; i--)
//	{
//		if (ma[i] > 0)
//		{
//			cnt[ma[i]] += cnt[i];
//			cnt[i / ma[i]] += cnt[i];
//			cnt[i] = 0;
//		}
//		
//	}
//	int ret = 1;
//	for (int i = 2; i <= 2 * n; i++)
//	{
//		if (cnt[i])ret = (ret * qow(i, cnt[i], m)) % mod;
//	}
//	cout << ret << endl;
//	return 0;
//}






//set<int> a[2];
//
//signed main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		a[s].insert(i);
//	}
//
//	while (!a[1].empty() || !a[0].empty())
//	{
//		int p = 0;
//		if (a[1].empty() || !a[0].empty() && *a[0].begin() < *a[1].begin())p = 0;
//		else p = 1;
//		int x = 0;
//		while (1)
//		{
//			auto t = a[p].upper_bound(x);
//			if (t == a[p].end())break;
//			cout << *t << " ";
//			x = *t;
//			a[p].erase(t);
//			p = 1 - p;
//		}
//		cout << endl;
//
//	}
//
//	return 0;
//}






//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int a; int b; cin >> a >> b;
//		int ret = 1;
//		int x = a + b;
//		int t = b - a + 1;
//		if (x % 2 == 0)x = x / 2;
//		else t = t / 2;
//		x = x % 9;
//		t = t % 9;
//		ret = (x * t) % 9;
//		cout << ret << endl;
//
//	}
//	return 0;
//}