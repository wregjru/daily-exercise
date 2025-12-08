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
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);


int num[5010];


void solve()
{
	int n; cin >> n;

}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}










//int a[100010];
//int b[100010];
//
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
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i - 1] % a[i] != 0)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	for (int i = n - 1; i >= 1; i--)
//	{
//		if (b[i + 1] % b[i] != 0)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	if (a[n] != b[1])
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	int t = a[n];
//	for (int i = n; i >= 1; i--)
//	{
//		if (a[i] % t != 0)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//		a[i] /= t;
//	}
//	t = b[1];
//	for (int i = 1; i <= n; i++)
//	{
//		if (b[i] % t != 0)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//		b[i] /= t;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (a[i]!=a[i-1]&&a[i]*b[i]/gcd(a[i],b[i])%a[i-1]==0)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	for (int i = n - 1; i >= 1; i--)
//	{
//		if (b[i+1]!=b[i] && a[i] * b[i] / gcd(a[i], b[i]) % b[i + 1] == 0)
//		{
//			cout << "NO" << endl;
//		}
//	}
//	cout << "YES" << endl;
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




//int n;
//int k;
//int num[200010];
//int fre[200010];//大于等于i有多少个数，先差分后前缀和
//
//
//void solve()
//{
//	cin >> n;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		fre[i] = 0;
//	}
//	cin >> k;
//	unordered_map<int, int> ma;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		ma[num[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		fre[num[i]]++;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		fre[i] = fre[i + 1] + fre[i];
//	}
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (fre[min(i * 4, n+1)] + ma[i] + ma[i * 2] + ma[i * 3] >= n - k)
//		{
//			ret = max(ret, i);
//		}
//	}
//	cout << ret << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}