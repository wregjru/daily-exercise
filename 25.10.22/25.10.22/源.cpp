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


ll n; ll s;
ll f[30];
ll mod = 1e9 + 7;
ll inv;//m!µÄÄæÔª

ll qpow(ll a, ll b, ll p)
{
	ll ret = 1;
	while (b)
	{
		if (b & 1) ret = ret * a % p;
		b >>= 1;
		a = a * a % p;
	}
	return ret;
}

ll C(ll n, ll m)
{
	if (n < m || n < 0) return 0;

	ll up = 1;
	for (ll i = n - m + 1; i <= n; i++) up = up * (i % mod) % mod;

	return up * inv % mod;
}



int main()
{
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		cin >> f[i];
	}
	ll down = 1;
	for (int i = 1; i <= n - 1; i++)
	{
		down = down * i % mod;
	}
	inv = qpow(down, mod - 2, mod);
	ll ret = 0;
	for (int st = 0; st < (1 << n); st++)
	{
		ll cnt = 0; ll sum = 0;
		for (int i = 0; i < n; i++)
		{
			if ((st >> i) & 1)
			{
				cnt++;
				sum += f[i] + 1;
			}
		}
		if (cnt % 2 == 0) ret += C(n + s - 1 - sum, n - 1);
		else ret -= C(n + s - 1 - sum, n - 1);
		ret = (ret % mod + mod) % mod;

	}
	cout << ret << endl;

	return 0;
}






//ll n; ll m; ll k;
//ll g[1000010];
//ll f[1000010];
//ll num[1000010];
//ll mod = 1e9 + 7;
//ll dp[1000010];
//
//
//ll qpow(ll a, ll b, ll p)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1) ret = ret * a % p;
//		b >>= 1;
//		a = a * a % mod;
	}
//	return ret;
//}
//
//void init()
//{
//	f[0] = 1;
//	for (int i = 1; i <= n; i++) f[i] = i * f[i - 1] % mod;
//
//	g[n] = qpow(f[n], mod - 2, mod);
//	for (int i = n - 1; i >= 0; i--) g[i] = (i + 1) * g[i + 1] % mod;
//}
//
//ll C(int n, int m)
//{
//	if (n < m) return 0;
//	return f[n] * g[n - m] % mod * g[m] % mod;
//}
//
//
//int main()
//{
//	cin >> n >> m >> k;
//	init();
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		num[s]++;
//	}
//	for (int i = m; i >= 1; i--)
//	{
//		ll x = 0; ll y = 0;
//		for (int j = i; j <= m; j += i)
//		{
//			x += num[j];
//			y += dp[j];
//		}
//		dp[i]= ((C(x, k) - y) % mod + mod) % mod;
//	}
//	for (int i = 1; i <= m; i++) cout << dp[i] << " ";
//	return 0;
//}








//ll p[30];
//ll n; ll m;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> p[i];
//	}
//	ll ret = 0;
//	for (int i = 1; i < (1 << n); i++)
//	{
//		ll t = m; int cnt = 0;
//		for (int j = 0; j < n; j++)
//		{
//			if ((i >> j) & 1)
//			{
//				cnt++;
//				t /= p[j];
//			}
//		}
//		if (cnt % 2 == 0)ret -= t;
//		else ret += t;
//	}
//	cout << ret << endl;
//	return 0;
//}