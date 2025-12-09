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
#include <chrono>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
//#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);


string tu1[30];
string tu2[30];
string tu3[30];
void init()
{
	tu1[1] = "12";
	tu1[2] = "21";
	tu2[1] = "123";
	tu2[2] = "132";
	tu2[3] = "213";
	tu2[4] = "231";
	tu2[5] = "312";
	tu2[6] = "321";
	tu3[1] = "1234";
	tu3[2] = "1243";
	tu3[3] = "1324";
	tu3[4] = "1342";
	tu3[5] = "1423";
	tu3[6] = "1432";
	tu3[7] = "2134";
	tu3[8] = "2143";
	tu3[9] = "2314";
	tu3[10] = "2341";
	tu3[11] = "2413";
	tu3[12] = "2431";
	tu3[13] = "3124";
	tu3[14] = "3142";
	tu3[15] = "3214";
	tu3[16] = "3241";
	tu3[17] = "3412";
	tu3[18] = "3421";
	tu3[19] = "4123";
	tu3[20] = "4132";
	tu3[21] = "4213";
	tu3[22] = "4231";
	tu3[23] = "4312";
	tu3[24] = "4321";
}

void solve()
{
	string p; cin >> p;
	int a; int b; cin >> a >> b;
	if (p.size() == 2)
	{
		int r = 0;
		for (int i = 0; i < 2; i++)
		{
			if (tu1[a][i] == tu1[b][i])r++;
		}
		string ret;
		ret += ('0' + r);
		ret += 'A';
		ret += (p.size() - r + '0');
		ret += 'B';
		cout << ret << endl;
		return;
	}
	if (p.size() == 3)
	{
		int r = 0;
		for (int i = 0; i < 3; i++)
		{
			if (tu2[a][i] == tu2[b][i])r++;
		}
		string ret;
		ret += ('0' + r);
		ret += 'A';
		ret += (p.size() - r + '0');
		ret += 'B';
		cout << ret << endl;
		return;
	}
	if (p.size() == 4)
	{
		int r = 0;
		for (int i = 0; i < 4; i++)
		{
			if (tu3[a][i] == tu3[b][i])r++;
		}
		string ret;
		ret += ('0' + r);
		ret += 'A';
		ret += (p.size() - r + '0');
		ret += 'B';
		cout << ret << endl;
		return;
	}

}



signed main()
{
	init();
	int t; cin >> t;
	while (t--)solve();
	return 0;
}
 




//int num[200010];
//int g[200010];
//int cha[200010];
//
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		g[i] = gcd(num[i], num[i + 1]);
//	}
//	int tmp = 0;//递减的个数
//	for (int i = 1; i < n; i++)
//	{
//		if (g[i] - g[i - 1] < 0)tmp++;
//	}
//	for (int i = 2; i < n-1; i++)//删第i个数
//	{
//		int ng = gcd(num[i - 1], num[i + 1]);
//		int nt = tmp;
//		if (g[i + 1] - g[i] < 0)nt--;
//		if (g[i] - g[i-1] < 0)nt--;
//		if (g[i - 1] - g[i-2] < 0)nt--;
//		if (ng - g[i - 2] < 0)nt++;
//		if (g[i + 1] - ng < 0)nt++;
//		if (nt <= 0)
//		{
//			cout << "YES" << endl;
//			return;
//		}
//	}
//	//i=1
//	int fl = 1;
//	for (int i = 2; i < n-1; i++)
//	{
//		if (g[i + 1] < g[i])fl = 0;
//	}
//	if (fl == 1)
//	{
//		cout << "YES" << endl;
//		return;
//	}
//	fl = 1;
//	for (int i = 1; i < n - 2; i++)
//	{
//		if (g[i + 1] < g[i])fl = 0;
//	}
//	if (fl == 1)
//	{
//		cout << "YES" << endl;
//		return;
//	}
//	
//	g[n - 2] = gcd(num[n], num[n - 2]);
//	fl = 1;
//	for (int i = 1; i < n - 2; i++)
//	{
//		if (g[i + 1] < g[i])fl = 0;
//	}
//	if (fl == 1)
//	{
//		cout << "YES" << endl;
//		return;
//	}
//	cout << "NO" << endl;
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}






//void solve()
//{
//	int n; int k; cin >> n >> k;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; i*j <= n&&i+j<=k; j++)
//		{
//			int s = (n - i * j) / (i + j);
//			if (s < 1)break;
//			int t = k - i - j;
//			if (t < 1)break;
//			ret += min(s, t);
//		}
//	}
//	cout << ret << endl;
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	clock_t st = clock();
//	while (t--)solve();
//	clock_t ed = clock();
//	cout << "time = " << (double)(ed - st) / CLOCKS_PER_SEC << " s\n";
//	return 0;
//}


/*
10
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000
10000000 10000000



*/


//int num[200010];
//
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	int a; int b; cin >> a >> b;
//	int k = gcd(a, b);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] = num[i] % k;    
//	}
//	sort(num + 1, num + 1 + n);
//	int ma = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		ma = max(ma, num[i] - num[i - 1]);
//	}
//	ma = max(ma, num[1] + k - num[n]);
//	cout << k - ma << endl;
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}






//void solve()
//{
//	int n; cin >> n;
//	int l1; int r1; int l2; int r2;
//	cin >> l1 >> r1 >> l2 >> r2;
//	int kn = 1;
//	int ret = 0;
//	for (int i = 1; i <= 32; i++)
//	{
//		ret += max((int)0, min(r1, r2 / kn) - max(l1, (l2-1) / kn+1) + 1);
//		if (kn >= 1e9)break;
//		kn *= n;
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//int p[2000100];
//bool st[20000010];
//int cnt;
//int cha[20000010];
//
//
//void getp()
//{
//	for (int i = 2; i <= 20000010; i++)
//	{
//		if (!st[i])
//		{
//			p[++cnt] = i;
//			cha[p[cnt]]++;
//		}
//		for (int j = 1; j <= cnt && p[j] * i <= 20000010; j++)
//		{
//			st[i * p[j]] = 1;
//			if (i % p[j] == 0)break;
//		}
//	}
//	for (int i = 1; i <= 20000010; i++)
//	{
//		cha[i] = cha[i - 1] + cha[i];
//	}
//}
//
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret += cha[n / i];
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	clock_t ss = clock();
//	getp();
//	while (t--)solve();
//	clock_t ed = clock();
//	cout << "time = " << (double)(ed - ss) / CLOCKS_PER_SEC << " s\n";
//	return 0;
//}






//int p[400010];
//int cnt;
//bool st[10000010];
//int f[400010];
//void getp()
//{
//	for (int i = 2; i <= 1e7; i++)
//	{
//		if (cnt == 400005)
//		{
//			break;
//		}
//		if (!st[i])
//		{
//			p[++cnt] = i;
//		}
//		for (int j = 1; j<=cnt&&i*p[j] <= 1e7; j++)
//		{
//			st[i * p[j]] = 1;
//			if (i%p[j] == 0)break;
//		}
//	}
//	for (int i = 1; i <= 400005; i++)
//	{
//		f[i] = f[i - 1] + p[i];
//	}
//}
//
//
//int num[400010];
//int dpnum[400010];
//int n;
//bool check(int s)
//{
//	int ret = dpnum[n] - dpnum[s];
//	return ret >= f[n - s];
//}
//
//
//
//void solve()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	for (int i = 1; i <= n; i++)
//	{
//		dpnum[i] = dpnum[i - 1] + num[i];
//	}
//	if (dpnum[n] >= f[n])
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int l = 1; int r = n;
//	while (l < r)
//	{
//		int m = (l + r) / 2;
//		if (check(m))r = m;
//		else l = m + 1;
//	}
//	cout << l << endl;
//}
//
//
//
//signed main()
//{
//	getp();
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//int num[5010];
//int tu[5010][5010];
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int g = num[1];
//	for (int i = 2; i <= n; i++)
//	{
//		g = gcd(g, num[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] /= g;
//	}
//	int fl = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 1)
//		{
//			fl = 1;
//		}
//	}
//	if (fl == 1)
//	{
//		int cnt = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (num[i] == 1)cnt++;
//		}
//		cout << n - cnt << endl;
//		return;
//	}
//	vector<int> d(5010, 0x3f3f3f3f);
//	queue<int> qu;
//	for (int i = 1; i <= n; i++)
//	{
//		d[num[i]] = 0;
//		qu.push(num[i]);
//	}
//	int m = 0;
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//		if (s == 1)
//		{
//			m = d[1];
//			break;
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			int t = num[i];
//			if (d[tu[t][s]] > d[s] + 1)
//			{
//				d[tu[t][s]] = d[s] + 1;
//				qu.push(tu[t][s]);
//			}
//			/*d[tu[t][s]] = min(d[tu[t][s]],d[s] + (int)1);*/
//			/*if (d[1] != 0x3f3f3f3f)
//			{
//				m = d[1];
//				break;
//			}*/
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] != 1)
//		{
//			ret++;
//		}
//	}
//	cout << m + ret - 1 << endl;
//	
//}
//
//void getp()
//{
//	for (int i = 1; i <= 5000; i++)
//	{
//		for (int j = 1; j <= 5000; j++)
//		{
//			tu[i][j] = gcd(i, j);
//		}
//	}
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	getp();
//	while (t--)solve();
//	return 0;
//}
