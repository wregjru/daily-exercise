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

int n; int m; int k;
int f[1100];
struct node
{
	int x; int y; int z;
}e[10010];

int _find(int s)
{
	return s == f[s] ? s : f[s]=_find(f[s]);
}
void uni(int a, int b)
{
	int fa = _find(a); int fb = _find(b);
	f[fa] = fb;
}
bool cmp(node& x, node& y)
{
	return x.z < y.z;
}
signed main()
{
	cin >> n >> m >> k;
	if (n == k)
	{
		cout << 0 << endl;
		return 0;
	}
	if (k <= 0 || k > n)
	{
		cout << "No Answer" << endl;
		return 0;
	}
	for (int i = 1; i <= n; i++)f[i] = i;
	for (int i = 1; i <= m; i++)
	{
		cin >> e[i].x >> e[i].y >> e[i].z;
	}
	sort(e + 1, e + 1 + m, cmp);
	int pos = 0;
	int ret = 0;
	for(int i=1;i<=m;i++)
	{
		int fx = _find(e[i].x);
		int fy = _find(e[i].y);
		if (fx == fy)continue;
		f[fx] = fy;
		ret += e[i].z;
		pos++;
		if (pos == n - k)break;
	}
	if (pos != n - k)cout << "No Answer" << endl;
	else cout << ret << endl;
	return 0;
}






//int x; int y;
//
//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//signed main()
//{
//	cin >> x >> y;
//	if (x > y)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int mu = x * y;
//	int m = min(x, y);
//	int M = max(x, y);
//	int ret = 0;
//	if (m == M)
//	{
//		cout << 1 << endl; return 0;
//	}
//	for (int i = m; i <= mu / i; i++)
//	{
//		if (mu % i==0)
//		{
//			if (gcd(i, mu / i) == m)
//			{
//				ret += 2;
//				if (mu / i == i)ret--;
//			}
//		}
//		
//	}
//	//for (int k = 1; m * k <= M; k++)
//	//{
//	//	if (M % (m * k) == 0&&gcd(m*k,M/m/k)==m)
//	//	{
//	//		ret += 2;
//	//		if (m * k == M % (m * k))ret--;
//	//	}
//	//}
//
//	cout << ret << endl;
//	return 0;
//}