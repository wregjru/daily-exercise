
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


int n;
ll f[110];

int main()
{
	cin >> n;
	f[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		f[i] = f[i - 1] * (4 * i - 2) / (i + 1);
	}
	cout << f[n];
	return 0;
}




//int n;
//int f[110];
//int mod = 100;
//
//int main()
//{
//	cin >> n;
//	f[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			f[i] = (f[i]+f[j] * f[i - j - 1]) % mod;
//		}
//	}
//	cout << f[n];
//	return 0;
//}






//const int N = 1e6 + 10; const int mod = 1e9 + 7;
//int n; int m;
//ll f[N]; ll g[N]; ll d[N]; 
//
//ll qow(ll a, ll b, ll c)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		a = a * a % c;
//		b = b >> 1;
//	}
//	return ret;
//}
//ll C(int a, int b)
//{
//	if (a < b)return 0;
//	return f[a] * g[b] % mod * g[a - b] % mod;
//}
//
//void init()
//{
//	int n = 1e6;
//	f[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = f[i - 1] * i % mod;
//	}
//	g[n] = qow(f[n], mod - 2, mod);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		g[i] = g[i + 1] * (i + 1) % mod;
//	}
//
//	d[2] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		d[i] = ((i - 1) * ((d[i - 1] + d[i - 2]) % mod)) % mod;
//	}
//}
//
//
//
//int main()
//{
//	init();
//	int T; cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//		if (n < m)cout << 0 << endl;
//		else if (n == m)cout << 1 << endl;
//		else cout << C(n, m) * d[n - m] % mod << endl;
//	}
//	return 0;
//}






//int f[210][500];
//
//void add(int a[], int b[], int c[])
//{
//	for (int i = 0; i < 500; i++)
//	{
//		a[i] += b[i] + c[i];
//		a[i + 1] += a[i] / 10;
//		a[i] %= 10;
//	}
//}
//void mul(int a[], int x)
//{
//	int t = 0;
//	for (int i = 0; i <= 500; i++)
//	{
//		t = t + a[i] * x;
//		a[i] = t % 10;
//		t /= 10;
//	}
//}
//
//
//int main()
//{
//	int n;
//	cin >> n;
//	int w;
//	for (int i = 1; i <= n; i++)
//		for (int j = 1; j <= n; j++)
//			cin >> w;
//	f[2][0] = 1;
//	for (int i = 3; i <= n; i++)
//	{
//		add(f[i], f[i - 1], f[i - 2]);
//		mul(f[i], (i - 1));
//	}
//	int pos = 500;
//	while (f[n][pos]==0)
//	{
//		pos--;
//	}
//	while (pos >= 0)cout << f[n][pos--];
//	return 0;
//}





//ll f[30];
//int main()
//{
//	f[2] = 1;
//	int n; cin >> n;
//	for (int i = 3; i <= n; i++)
//	{
//		f[i] = (i - 1) * (f[i - 1] + f[i - 2]);
//	}
//	cout << f[n];
//	return 0;
//}








//int k; int x; int n;
//int num[1010][110][160];
//
//ll qow(ll a, ll b, ll c)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		a = a * a % c;
//		b = (b >> 1);
//	}
//	return ret;
//}
//
//void add(int c[], int a[], int b[])
//{
//	for (int i = 0; i <= 150; i++)
//	{
//		c[i] += a[i] + b[i];
//		c[i + 1] += c[i] / 10;
//		c[i] = c[i] % 10;
//	}
//}
//
//int main()
//{
//	cin >> k >> x;
//	ll r = qow(x % 1000, x, 1000);
//	n = r;
//	for (int i = 0; i <= r; i++)
//	{
//		num[i][0][0] = 1;
//		for (int j = 1; j <= min(i, (int)k); j++)
//		{
//			add(num[i][j], num[i - 1][j], num[i - 1][j - 1]);
//		}
//	}
//	int p = 150;
//	while (p>0&&num[r - 1][k - 1][p]==0)p--;
//	for (int i = p; i >= 0; i--) 
//	{
//		cout << num[r-1][k-1][i];
//	}
//	cout << endl;
//	return 0;
//}








//const ll mod = 100003;
//ll f[2010];
//ll g[2010];
//
//ll qow(ll a, ll b, ll c)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		a = a * a % c;
//		b = (b >> 1);
//	}
//	return ret;
//}
//
//
//
//
//void init()
//{
//	f[0] = 1;
//	for (int i = 1; i <= 2000; i++)
//	{
//		f[i] = f[i - 1] * i % mod;
//	}
//	g[2000] = qow(f[2000], mod - 2, mod);
//	for (int i = 1999; i >= 0; i--)
//	{
//		g[i] = g[i + 1] * (i + 1) % mod;
//	}
//}
//
//ll C(ll m, ll n)
//{
//	if (m < n)return 0;
//	return f[m] * g[m - n] % mod * g[n] % mod;
//}
//
//int main()
//{
//	init();
//	int a; int b; int c; int d; int k;
//	cin >> a >> b >> c >> d >> k; ll ret = 0;
//	for (int i = 0; i <= k; i++)
//	{
//		ll l = C(c, i) * C(d, i) % mod * f[i] % mod;
//		ll r = C(b + d - i, k - i) * C(a , k - i) % mod * f[k - i] % mod;
//		ret = (ret + l * r % mod) % mod;
//	}
//	cout << ret << endl;
//	return 0;
//}





//ll mod = 100003;
//
//
//ll qow(ll a, ll b, ll c)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % mod;
//		a = a * a % mod;
//		b = (b >> 1);
//	}
//	return ret;
//}
//
//
//int main()
//{
//	ll m; ll n;
//	cin >> m >> n;
//	ll a = qow(m, n, mod);
//	ll b = qow(m - 1, n - 1, mod) * m % mod;
//	ll c = ((a - b) % mod + mod) % mod;
//	cout << c << endl;
//	return 0;
//}