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

int num[3][200010];
int qianmax[3][200010];
int qianmin[3][200010];
int houmax[3][200010];
int houmin[3][200010];

signed main()
{
	int T; cin >> T;
	while (T--)
	{
		int n; cin >> n;
		memset(qianmax, 0, sizeof(qianmax));
		memset(qianmin, 0, sizeof(qianmin));
		memset(houmax, 0, sizeof(houmax));
		memset(houmin, 0, sizeof(houmin));
		qianmin[1][0] = 0x3f3f3f3f;
		qianmin[2][0] = 0x3f3f3f3f;
		houmin[2][n+1] = 0x3f3f3f3f;
		houmin[1][n + 1] = 0x3f3f3f3f;
		for (int i = 1; i <= n; i++)
		{
			cin >> num[1][i];
			qianmax[1][i] = max(num[1][i], qianmax[1][i - 1]);
			qianmin[1][i] = min(num[1][i], qianmin[1][i - 1]);
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> num[2][i];
			qianmax[2][i] = max(num[2][i], max(qianmax[2][i - 1],qianmax[1][i]));
			qianmin[2][i] = min(num[2][i], min(qianmin[2][i - 1], qianmin[1][i]));
		}
		for (int i = n; i >= 1; i--)
		{
			houmax[2][i] = max(houmax[2][i + 1], num[2][i]);
			houmin[2][i] = min(houmin[2][i + 1], num[2][i]);
		}
		for (int i = n; i >= 1; i--)
		{
			houmax[1][i] = max(max(houmax[1][i + 1],houmax[2][i]), num[2][i]);
			houmin[1][i] = min(min(houmin[1][i + 1], houmin[2][i]), num[2][i]);
		}
		for (int i = 1; i <= n; i++)
		{

		}
	}
	
	return 0;
}








//int n; int m;
//ll dp[100][100];
//ll num[100][100];
//
//ll qow(ll a, ll b)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a;
//		a = a * a;
//		b >>= 1;
//	}
//	return ret;
//}
//ll read()
//{
//	ll ret = 0;
//	char ch; ch = getchar();
//	while (ch < '0' || ch>'9')ch = getchar();
//	while (ch <= '9' && ch >= '0')
//	{
//		ret = ret * 10 + ch - '0'; ch = getchar();
//	}
//	return ret;
//}
//void print(ll s)
//{
//	if (s > 9)print(s / 10);
//	putchar('0' + s%10);
//}
//
//ll solve(int s)
//{
//	memset(dp, 0, sizeof(dp));
//	for (int len = 1; len <= m; len++)
//	{
//		for (int i = 1; i + len - 1 <= m; i++)
//		{
//			int j = i + len - 1;
//			ll r = qow(2, m - len + 1);
//			dp[i][j] = max(dp[i + 1][j] + r * num[s][i], dp[i][j - 1] + r * num[s][j]);
//		}
//	}
//	return dp[1][m];
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			num[i][j] = read();
//		}
//	}
//	ll ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret += solve(i);
//	}
//	print(ret);
//	return 0;
//}









//int a1; int a2; int p; int q; int n; int m;
//struct mat
//{
//	int num[3][3];
//	mat()
//	{
//		memset(num, 0, sizeof(num));
//	}
//	mat operator*(mat& t)
//	{
//		mat ret;
//		for (int i = 1; i <= 2; i++)
//		{
//			for (int j = 1; j <= 2; j++)
//			{
//				for (int k = 1; k <= 2; k++)
//				{
//					ret.num[i][j] = (ret.num[i][j] + (num[i][k] * t.num[k][j]) % m) % m;
//				}
//			}
//		}
//		return ret;
//	}
//};
//
//
//mat qow(mat& a, int k, int l)
//{
//	mat r;
//	r.num[1][1] = 1;
//	r.num[2][2] = 1;
//	while (k)
//	{
//		if (k & 1)r = r * a;
//		k >>= 1;
//		a = a * a;
//	}
//	return r;
//}
//
//
//signed main()
//{
//	cin >> p >> q >> a1 >> a2 >> n >> m;
//	mat chu; mat ret;
//	mat cheng;
//	if (n == 1)
//	{
//		cout << a1 << endl;
//		return 0;
//	}
//	if (n == 2)
//	{
//		cout << a2 << endl;
//		return 0;
//	}
//	chu.num[1][1] = a2;
//	chu.num[1][2] = a1;
//	cheng.num[1][1] = p;
//	cheng.num[1][2] = 1;
//	cheng.num[2][1] = q;
//	cheng.num[2][2] = 0;
//	ret = qow(cheng, n-2, m);
//	ret = chu * ret;
//	cout << ret.num[1][1]%m << endl;
//	return 0;
//}






//deque<int> qu;
//int n; int k;
//int num[500010];
//signed main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		num[i] = num[i - 1] + s;
//	}
//	int ret = -0x3f3f3f3f;
//	qu.push_back(0);
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, num[i] - num[qu.front()]);
//		while (!qu.empty() && num[i] < num[qu.back()])qu.pop_back();
//		qu.push_back(i);
//		if (i - qu.front() + 1 > k)qu.pop_front();
//	}
//	cout << ret << endl;
//	return 0;
//}







//int qmul(int a, int b, int c)
//{
//	int ret = 0;
//	while (b)
//	{
//		if (b & 1) ret = (ret + a) % c;
//		b >>= 1;
//		a = (a + a) % c;
//	}
//	return ret;
//}
//
//int qow(int a, int b, int c)
//{
//	int ret = 1;
//	while (b)
//	{
//		if (b & 1) ret = qmul(ret, a, c);
//		b >>= 1;
//		a = qmul(a, a, c);
//	}
//	return ret;
//}
//void exgcd(int a, int b, int& x, int& y)
//{
//	if (b == 0)
//	{
//		x = 1; y = 0; return;
//	}
//	int x1; int y1;
//	exgcd(b, a % b, x1, y1);
//	x = y1; y = x1 - a / b * y1;
//}
//
//signed main()
//{
//	int n; int m; int l;
//	cin >> n >> m >> l;
//	int a = qow(2, m, n + 1);
//	int b = n + 1;
//	int x; int y;
//	int c = l;
//	exgcd(a, b, x, y);
//	x = (x % b + b) % b;
//	cout << qmul(x, c, b) << endl;
//	return 0;
//}
//





//int e[2000010];
//int w[2000010];
//int ne[2000010];
//int h[2000010];
//int n;
//int id;
//bool gone[2000010];
//int ret;
//void add(int a, int b, int c)
//{
//	id++;
//	e[id] = b; w[id] = c;
//	ne[id] = h[a];
//	h[a] = id;
//}
//int dfs(int a)
//{
//	gone[a] = true;
//	int cnt = 1;
//	for (int i = h[a]; i; i = ne[i])
//	{
//		int b = e[i]; int c = w[i];
//		if (gone[b])continue;
//		int t = dfs(b);
//		ret += c * abs(n - t - t);
//		cnt += t;
//	}
//	return cnt;
//}
//signed main()
//{
//	scanf("%lld", &n);
//	for (int i = 1; i < n; i++)
//	{
//		int a; int b; int c; scanf("%lld%lld%lld", &a, &b, &c);
//		add(a, b, c);
//		add(b, a, c);
//	}
//	dfs(1);
//	printf("%lld", ret);
//	return 0;
//}





//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//signed main()
//{
//	int a; int b; int c;
//	cin >> a >> b >> c;
//	int d = a*b/gcd(a, b);
//	int ret = d * c / gcd(d, c);
//	cout << ret << endl;
//	return 0;
//}