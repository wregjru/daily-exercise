#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;



int n; int m;//n种花，总共
int cnt;//总数
vector<pair<int, int>> g[1010];
int dp[1010][1010];
int main()
{
	cin >> m >> n;
	for (int i = 1; i <= n; i++)
	{
		int a; int b; int c;
		cin >> a >> b >> c;
		cnt = max(cnt, c);
		g[c].push_back({ a,b });
	}
	for (int i = 1; i <= cnt; i++)
	{
		for (int j = m; j >= 0; j--)
		{
			dp[i][j] = dp[i - 1][j];
			for (int k = 0; k < g[i].size(); k++)
			{
				int front = g[i][k].first;
				int sec = g[i][k].second;
				if(j>=front)dp[i][j] = max(dp[i][j],dp[i - 1][j - front] + sec);
			}
		}
	}
	cout << dp[cnt][m];
	return 0;
}






//int n; int m;//花数，摆放数
//int flo[110]; int mod = 1e6 + 7;
//int dp[110];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> flo[i];
//	}
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >= 0; j--)
//		{
//			for (int k = 1; k <= j && k <= flo[i]; k++)
//			{
//				dp[j] = (dp[j] + dp[j - k]) % mod;
//			}
//		}
//	}
//	cout << dp[m] << endl;
//	return 0;
//}













//int n; int m;//物品总数，承重
//int x[110]; int w[110]; int val[110];//数量，重，价值
//int dp[110][110];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x[i] >> w[i] >> val[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >= 0; j--)
//		{
//			for (int k = 0; k <= x[i] && k * w[i] <= j; k++)
//			{
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - k * w[i]] + k * val[i]);
//			}
//
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}





//int t; int n; int m;//t天n个商品m本金
//int pri[110][110];
//int dp[11000];
//
//int most(int a[], int b[], int mon)
//{
//	memset(dp, 0, sizeof(dp));
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = a[i]; j <= m; j++)
//		{
//			dp[j] = max(dp[j], dp[j - a[i]] - a[i] + b[i]);
//		}
//	}
//	return m + dp[m];
//		
//}
//
//int main()
//{
//	cin >> t >> n >> m;
//	for (int i = 1; i <= t; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> pri[i][j];
//		}
//	}
//	for (int i = 1; i < t; i++)
//	{
//		m=most(pri[i], pri[i + 1], m);
//	}
//	cout << m << endl;
//	return 0;
//}













//ll a[420][820];
//int n;
//const int mod = 1e9 + 7;
//
//ll qpow(ll x, ll y, ll z)//x^y%z
//{
//	ll ret = 1;
//	while (y)
//	{
//		if (y & 1)
//		{
//			ret = ret * x % z;
//		}
//		y = y >> 1;
//		x = x * x % z;
//	}
//	return ret;
//}
//
//
//int grass()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		int aim = i;
//		for (int j = 1; j <= n; j++)
//		{
//			if (j < i && a[j][j]!=0)continue;
//			if (a[j][i] > a[aim][i])aim = j;
//		}
//		if (a[aim][i] == 0)return 0;
//		for (int j = 1; j <= 2 * n; j++)swap(a[i][j], a[aim][j]);
//		ll t = qpow(a[i][i], mod - 2, mod);
//		for (int j = i; j <= 2 * n; j++)a[i][j] = a[i][j] * t % mod;
//		for (int j = 1; j <= n; j++)//遍历行
//		{
//
//			if (i == j)continue;
//			t = a[j][i];
//			for (int k = i; k <= 2 * n; k++)//遍历列
//			{
//				a[j][k] -= a[i][k] * t;
//				a[j][k] = (a[j][k] % mod + mod) % mod;
//			}
//		}
//	}
//	return 1;
//}
//
//
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		a[i][i + n] = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[i][j];
//			
//		}
//	}
//	int ret = grass();
//	if (ret == 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = n + 1; j <= 2 * n; j++)
//			{
//				printf("%d ", a[i][j]);
//			}
//			cout << endl;
//		}
//	}
//	else printf("No Solution\n");
//	return 0;
//}








//double a[60][60]; int n;
//double p = 1e-7;
//bool zero(double s)
//{
//	return fabs(s) < p;//注意绝对值
//}
//
//
//
//int jie()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		int aim = i;
//		for (int j = 1; j <= n; j++)
//		{
//			if (j < i && !zero(a[j][j]))continue;
//			if (fabs(a[j][i]) > fabs(a[aim][i]))aim = j;
//		}
//		if (zero(a[aim][i]))continue;
//		for (int j = 1; j <= n + 1; j++)swap(a[aim][j], a[i][j]);
//		for (int j = n + 1; j >= i; j--)a[i][j] /= a[i][i];
//		for (int j = 1; j <= n; j++)
//		{
//			if (j == i)continue;
//			double kd = a[j][i]/a[i][i];
//			for (int k = i; k <= n+1; k++)
//			{
//				a[j][k] -= a[i][k] * kd;
//			}
//		}
//	}
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (zero(a[i][i]) && !zero(a[i][n + 1]))
//		{
//			ret = 0; break;
//		}
//		if (zero(a[i][i]) && zero(a[i][n + 1]))
//		{
//			ret = 2;
//		}
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	 cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n + 1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int ret = jie();
//	if (ret == 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			printf("x%d=%.2lf\n", i, a[i][n + 1]);
//		}
//	}
//	else if (ret == 0)cout << -1;
//	else cout << 0;
//	return 0;
//}
//


