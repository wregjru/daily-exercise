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


int n; int m;
int kin[1010];
int C[2010][2010];
int mod = 1e9 + 7;
void getC()
{
	C[0][0] = 1;
	for (int i = 1; i <= 2005; i++)
	{
		C[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % mod;
		}
	}
}

signed main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		cin >> kin[i];
	}
	getC();
	int ret = 1;
	for (int i = 1; i <= m; i++)
	{
		ret = (ret * C[kin[i] + n - 1][n - 1]) % mod;
	}
	for (int i = 1; i < n; i++)
	{
		int r = C[n][i];
		for (int j = 1; j <= m; j++)
		{
			r = (r * C[kin[j] + n - 1 - i][n - 1 - i]) % mod;
		}
		if (i % 2 == 1)ret = ((ret - r) % mod + mod) % mod;
		else ret = (ret + r) % mod;
	}
	cout << ret << endl;
	return 0;
}






//int n; int m;
//vector<PII>tu[1010];
//int ful[1010][1010];
//int dist[1010];
//bool gone[1010];
//struct cmp
//{
//	bool operator()(PII& a, PII& b)
//	{
//		return a.second > b.second;
//	}
//};
//
//int dig(int s)//限定条件，流量>=s
//{
//	memset(dist, 0x3f, sizeof(dist));
//	memset(gone, 0, sizeof(gone));
//	priority_queue<PII, vector<PII>, cmp>qu;
//	qu.push({ 1,0 });
//	dist[1] = 0;
//	while (!qu.empty())
//	{
//		int a = qu.top().first;
//		qu.pop();
//		if (gone[a])continue;
//		gone[a] = true;
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int b = tu[a][i].first;
//			if (gone[b])continue;
//			if (ful[a][b] < s)continue;//先判断再设true
//			if (dist[a] + tu[a][i].second < dist[b])
//			{
//				dist[b] = dist[a] + tu[a][i].second;
//				qu.push({ b,dist[b] });
//				
//			}
//		}
//	}
//	return dist[n];
//
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c; int d;
//		cin >> a >> b >> c >> d;
//		tu[a].push_back({ b,c });
//		tu[b].push_back({ a,c });
//		ful[a][b] = ful[b][a] = d;
//	}
//	int ret = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		ret = max(ret, 1000000*i / dig(i));
//	}
//	cout << ret << endl;
//	return 0;
//}





//int n; int m;
//int num[100010];
//int all[1000100];
//int r[100010];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		all[num[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int ret = 0;
//		for (int j = 1; j <= num[i] / j; j++)
//		{
//			if(num[i]%j==0)
//			{
//				ret += all[num[i] / j] + all[j];
//				if (j == num[i] / j)ret -= all[j];
//			}
//		}
//		r[i] = ret;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << r[i]-1 << endl;
//	}
//
//	return 0;
//}






//ll dp[100][100];
//ll tu[100][100];
//int n; int m;
//
//ll read()
//{
//	char ch;
//	ch = getchar();
//	ll ret = 0;
//	while (ch < '0' || ch>'9')ch = getchar();
//	while (ch >= '0' && ch <= '9')
//	{
//		ret = ret * 10 + ch - '0';
//		ch = getchar();
//	}
//	return ret;
//}
//void print(ll x)
//{
//	if (x > 9)print(x / 10);
//	putchar('0' + x % 10);
//}
//ll qow(ll a, ll b)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret *= a;
//		b >>= 1;
//		a *= a;
//	}
//	return ret;
//}
//ll solve(int s)
//{
//	memset(dp, 0, sizeof(dp));
//	for (int len = 1; len <= m; len++)
//	{
//		for (int i = 1; i + len - 1 <= m; i++)
//		{
//			int j = i + len - 1;
//			ll r = qow(2, m - len + 1);
//			dp[i][j] = max(dp[i + 1][j] + tu[s][i] * r, dp[i][j - 1] + tu[s][j] * r);
//		}
//	}
//	return dp[1][m];
//}
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			tu[i][j] = read();
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



//int p; int q; int a1; int a2; int n; int m;
//struct juz
//{
//	int	num[3][3];
//	juz()
//	{
//		memset(num, 0, sizeof(num));
//	}
//	juz operator *(const juz& a)const
//	{
//		juz c;
//		for (int i = 1; i <= 2; i++)
//		{
//			for (int j = 1; j <= 2; j++)
//			{
//				for (int k = 1; k <= 2; k++)
//				{
//					c.num[i][j] = (c.num[i][j] + num[i][k] * a.num[k][j] % m)%m;
//				}
//			}
//		}
//		return c;
//	}
//}RET, A;
//
//void qow(int s)
//{
//	RET.num[1][1] = a2; RET.num[1][2] = a1;
//	A.num[1][1] = p; A.num[1][2] = 1; A.num[2][1] = q;
//	while (s)
//	{
//		if (s & 1)RET = RET * A;
//		s >>= 1;
//		A = A * A;
//	}
//}
//signed main()
//{
//	cin >> p >> q >> a1 >> a2 >> n >> m;
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
//	qow(n - 2);
//	cout << RET.num[1][1] << endl;
//	return 0;
//}
//
//


//int n; int m;
//int num[500010];
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		num[i] = num[i - 1] + s;
//	}
//	deque<int> qu;
//	qu.push_back(0);
//	int ret = -510;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, num[i] - num[qu.front()]);
//		while (!qu.empty()&&num[qu.back()] > num[i])qu.pop_back();
//		qu.push_back(i);
//		if (qu.back() - qu.front() + 1 > m)qu.pop_front();
//	}
//	cout << ret << endl;
//	return 0;
//}






//int num[10010];
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		/*int n; cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> num[i];
//		}
//		int ret = 1;
//		ret = ret * (num[1] % num[2]);
//		for (int i = 3; i <= n; i++)
//		{
//			ret = ret * (num[i] % num[2]);
//		}
//		ret %= num[2];
//		if (ret == 0)cout << "Yes" << endl;
//		else cout << "No" << endl;*/
//		int n; cin >> n;
//		int a; int p; cin >> a >> p;
//		a %= p;
//		for (int i = 3; i <= n; i++)
//		{
//			int s; cin >> s;
//			a = a * s % p;
//		}
//		if (a) cout << "No" << endl;
//		else cout << "Yes" << endl;
//	}
//	return 0;
//}