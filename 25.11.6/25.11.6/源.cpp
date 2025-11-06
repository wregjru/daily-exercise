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


int n; int m;
int tu[1010][1010];
ll dp1[1010][1010];
ll dp2[1010][1010];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> tu[i][j];
		}
	}
	memset(dp1, -0x3f, sizeof(dp1));
	memset(dp2, -0x3f, sizeof(dp2));
	dp1[0][1] = 0;
	for (int i = 1; i <= m; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			dp1[j][i] = dp1[j - 1][i];
			dp1[j][i] = max(dp1[j][i], dp1[j][i - 1]);
			dp1[j][i] = max(dp1[j][i], dp2[j][i-1]);
			dp1[j][i] += tu[j][i];
		}
		for (int j = n; j >= 1; j--)
		{
			dp2[j][i] = dp2[j+1][i];
			dp2[j][i] = max(dp2[j][i], dp2[j][i-1]);
			dp2[j][i] = max(dp2[j][i], dp1[j][i-1]);
			dp2[j][i] += tu[j][i];
		}
	}
	cout << dp1[n][m] << endl;
	return 0;
}





//int num[510];
//int n;
//int dp[510][510];
//int main()
//{
//	memset(dp, 0x3f, sizeof(dp));
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i][i] = 1;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		dp[i][i + 1] = (num[i] == num[i + 1] ? 1 : 2);
//	}
//	for (int len = 3; len <= n; len++)
//	{
//		for (int i = 1; i+len-1 <= n; i++)
//		{
//			int j = i + len - 1;
//			for (int k = 1; k < j; k++)
//			{
//				dp[i][j] = min(dp[i][j],dp[i][k]+ dp[k + 1][j]);
//			}
//			if (num[i] == num[j])dp[i][j] = min(dp[i][j], dp[i + 1][j - 1]);
//		}
//	}
//	cout << dp[1][n] << endl;
//	return 0;
//}




//int num[100010];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int pre = 0;
//	int ret = 1;
//	for (int i = 1; i < n; i++)
//	{
//		int s = num[i + 1] - num[i];
//		if (s > 0)s = 1;
//		else if (s < 0)s = -1;
//		if (s != pre)ret++;
//		pre = s;
//	}
//	cout << ret << endl;
//	return 0;
//}





//int tu[1010][1010];
//int n; int m;
//ll f[1010][1010];
//ll g[1010][1010];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 0; i <= 1005; i++)
//	{
//		for (int j = 0; j <= 1005; j++)
//		{
//			f[i][j] = -1e9;
//			g[i][j] = -1e9;
//		}
//	}
//	f[0][1] = 0;
//	for (int j = 1; j <= m; j++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			f[i][j] = f[i - 1][j];
//			f[i][j] = max(f[i][j], f[i][j - 1]);
//			f[i][j] = max(f[i][j], g[i][j - 1]);
//			f[i][j] += tu[i][j];
//		}
//		for (int i = n; i >= 1; i--)
//		{
//			g[i][j] = g[i + 1][j];
//			g[i][j] = max(g[i][j], g[i][j - 1]);
//			g[i][j] = max(g[i][j], f[i][j - 1]);
//			g[i][j] += tu[i][j];
//		}
//	}
//	//cout << max(g[n][m], f[n][m]) << endl;
//	cout << f[n][m] << endl;
//	return 0;
//}







//struct node
//{
//	int a; int b; int d;
//}ro[20010];
//int n; int m; int s; int t;
//int f[20010];
//
//bool cmp(node& x, node& y)
//{
//	return x.d < y.d;
//}
//int ret = 0x3f3f3f3f;
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
//
//
//int main()
//{
//	
//	cin >> n >> m >> s >> t;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> ro[i].a >> ro[i].b >> ro[i].d;
//	}
//	sort(ro + 1, ro + m + 1, cmp);
//	for (int i = 1; i <= m; i++)
//	{
//		ret = ro[i].d;
//		int a = ro[i].a; int b = ro[i].b; int d = ro[i].d;
//		uni(a, b);
//		if (_find(s) == _find(t))break;
//	}
//	cout << ret << endl;
//	return 0;
//}
//





//struct node
//{
//	int s; int b;
//}fo[25];
//ll s=1; ll b;//过程，回溯用
//int id;
//ll ret=0x3f3f3f3f;
//ll p;
//int n;
//void dfs(int e)
//{
//	if (e > n)return;
//	s *= fo[e].s; b += fo[e].b; 
//	id++;
//	if(id!=0)
//	ret = min(ret, abs(s - b));
//	dfs(e + 1);
//	s /= fo[e].s; b -= fo[e].b;
//	id--;
//	if (id != 0)
//	ret = min(ret, abs(s - b));
//	dfs(e + 1);
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> fo[i].s >> fo[i].b;
//	}
//	if (n == 1)
//	{
//		cout << abs(fo[1].s - fo[1].b) << endl;
//		return 0;
//	}
//	/*s = fo[1].s; b = fo[1].b;
//	id = 1;*/
//	dfs(1);
//	/*s = 1; b = 0;
//	id = 0;
//	dfs(1);*/
//	cout << ret << endl;
//	return 0;
//}