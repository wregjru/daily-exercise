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


const ll mod = 998244353;
ll n; ll k;
ll qow(ll a, ll b, ll c)
{
	ll ret = 1;
	while (b)
	{
		if(b&1)ret = ret * a % mod;
		a = a * a % mod;
		b = (b >> 1);

	}
	return ret;
}


int main()
{
	cin >> n >> k;
	cout << qow(qow(2, k, mod)-1, n, mod) << endl;
	return 0;
}





//ll f[100010];
//ll g[100010];
//ll mod = 5000011;
//
//int n; int k;
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
//ll c(ll a, ll b)
//{
//	if (a < b)return 0;
//	if (b == 0)return 1;
//	return f[a] * g[a - b] % mod * g[b] % mod;
//}
//int main()
//{
//	cin >> n >> k;
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
//	ll ret = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		ret = (ret + c(n - (i - 1) * k, i)) % mod;
//
//
//	}
//	cout << ret << endl;
//	return 0;
//}






//int arr[20] = { 1,2,3,4,5,7,8,9,11,13,16,17,19 };
//int f[20];
//int sg(int s)
//{
//	if (f[s] != -1)return f[s];
//	unordered_set<int>mp;
//	for (int i = 0; i < 13; i++)
//	{
//		if (s - arr[i] < 0)break;
//		mp.insert(sg(s - arr[i]));
//	}
//	for (int i = 0;; i++)
//	{
//		if (!mp.count(i))return f[s]=i;
//	}
//}
//
//
//
//
//int main()
//{
//	memset(f, -1, sizeof(f));
//	for (int i = 1; i <= 20; i++)
//	{
//		cout << i <<"        " << sg(i) << endl;
//	}
//	return 0;
//}








//int f[210][210];
//int n; int m;
//
//int sg(int a, int b)
//{
//	if (f[a][b] != -1)return f[a][b];
//	unordered_set<int> u;
//	for (int i = 2; i <= a - 2; i++) u.insert(sg(i, b) ^ sg(a - i, b));
//	for (int i = 2; i <= b - 2; i++) u.insert(sg(a, i) ^ sg(a, b - i));
//	for (int i = 0;; i++)
//	{
//		if (!u.count(i))
//		{
//			return f[a][b] = f[b][a] = i;
//		}
//	}
//
//}
//
//
//
//int main()
//{
//	memset(f, -1, sizeof(f));
//
//	while (cin >> n >> m)
//	{
//		int ret = sg(n, m);
//		if (ret) cout << "WIN" << endl;
//		else cout << "LOSE" << endl;
//	}
//	return 0;
//}





//vector<int> tu[2010];
//int f[2010];
//int sg(int w)
//{
//	if (f[w] != -1)return f[w];
//	unordered_set<int> mp;
//	for (int i = 0; i < tu[w].size(); i++)
//	{
//		mp.insert(sg(tu[w][i]));
//	}
//	for (int i = 0;; i++)
//	{
//		if (!mp.count(i))
//		{
//			return f[w]=i;
//		}
//	}
//}
//
//
//int main()
//{
//	int n; int m; int k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a].push_back(b);
//	}
//
//	memset(f, -1, sizeof(f));
//	int ret = 0;
//	for (int j = 1; j <= k; j++)
//	{
//		int s; cin >> s;
//		ret ^= sg(s);
//	}
//	if (ret == 0)cout << "lose" << endl;
//	else cout << "win" << endl;
//	return 0;
//}







//int a[1010];
//int g[1010];
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		sort(a + 1, a + 1 + n);
//		for (int i = 1; i <= n; i++)
//		{
//			g[i] = a[i] - a[i - 1]-1;
//		}
//		int ret = 0;
//		for (int i = n; i >= 1; i -= 2)
//		{
//			ret ^= g[i];
//		}
//		if (ret)cout << "Georgia will win" << endl;
//		else cout << "Bob will win" << endl;
//	}
//	return 0;
//}






//int a[100010];
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		int r = 0;
//		for (int i = n - 1; i >= 1; i -= 2)
//		{
//			r ^= a[i];
//		}
//		if (r != 0)cout << "lyw" << endl;
//		else cout << "zgc" << endl;
//	}
//	return 0;
//}





//int shu[500010];
//
//int main()
//{
//
//	int n; cin >> n;
//	int s = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> shu[i];
//		s ^= shu[i];
//	}
//	if (s == 0) { cout << "lose" << endl; return 0; }
//	for (int i = 1; i <= n; i++)
//	{
//		if ((s ^ shu[i]) < shu[i])
//		{
//			cout << shu[i] - (shu[i] ^ s) << " " << i << endl;
//			shu[i] ^= s;
//			break;
//
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << shu[i] << " ";
//	}
//	return 0;
//}






//int main()
//{
//	int n; cin >> n;
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		ret ^= s;
//	}
//	if (ret == 0)cout << "win" << endl;
//	else cout << "lose" << endl;
//	return 0;
//}