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
#include<random>
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
using namespace std;

int ret[10010];
int pos;

bool check(string s)
{
	int l = 0; int r = s.size() - 1;
	while (l <= r)
	{
		if (s[l] != s[r])
		{
			l++; r--;

		}
		else
		{
			return false;
		}
	}
	return true;
}


void solve()
{
	int n; cin >> n;
	pos = 0;
	string s; cin >> s;
	int a0 = 0; int a1 = 0;
	for (int i = 0; i <= n-1; i++)
	{
		if (s[i] == '1')a1++;
		else a0++;
	}
	if (a0 != a1)
	{
		cout << -1 << endl;
		return;
	}
	while (!check(s))
	{
		if (pos > 300)
		{
			break;
		}
		int l = 0; int r = s.size()-1;
		while(s[l] != s[r])
		{
			l++; r--;
		}
		if (s[l] == '1')
		{
			s = s.substr(0, l) + "01" + s.substr(l);
			ret[++pos] = l;
		}
		else
		{
			s = s.substr(0, r+1) + "01" + s.substr(r+1);
			ret[++pos] = r+1;
		}
	}
	cout << pos << endl;
	for (int i = 1; i <= pos; i++)
	{
		cout << ret[i] << " ";
	}
	cout << endl;
}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}

/*
1
6
001110
*/


//struct node
//{
//	int num; int val;
//}a[200010];
//int b[200010];
//int r[200010];
//
//bool cmp(node& x, node& y)
//{
//	return x.num < y.num;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	int k = 1; cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i].num;
//		a[i].val = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	sort(b + 1, b + 1 + n);
//	sort(a + 1, a + 1 + n, cmp);
//	int cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int l1 = i; int l2 = (i + k - 1) % n + 1;
//		if (a[l1].num > b[l2])cnt++;
//	}
//	if (cnt == k)
//	{
//		cout << "YES" << endl;
//		for (int i = 1; i <= n; i++)
//		{
//			r[a[i].val] = b[(i + k - 1) % n + 1];
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			cout << r[i] << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//struct node
//{
//	int num; int val;
//}a[200010],b[200010];
//
//node r[200010];
//int pos;
//int num[200010];
//bool cmp(node& x, node& y)
//{
//	return x.num < y.num;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i].num;
//		a[i].val = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i].num;
//		b[i].val = i;
//	}
//	if (n == 1)
//	{
//		int u = (a[1].num > b[1].num ? 1 : 0);
//		if (k != u)
//		{
//			cout << "NO" << endl;
//		}
//		else
//		{
//			cout << "YES" << endl;
//			cout << b[1].num << endl;
//		}
//		return;
//	}
//	sort(a + 1, a + 1 + n,cmp);
//	sort(b + 1, b + 1 + n,cmp);
//	int l1 = 1; int l2 = 1; int r1 = n; int r2 = n;
//	int cnt = 0;
//	while (l1 <= r1)
//	{
//		if (a[l1].num <= b[l1].num)
//		{
//			l1++;
//			r2--;
//		}
//		else
//		{
//			l1++; l2++;
//			cnt++;
//		}
//	}
//	int m = min((n - cnt), cnt);
//	int M = max((n - cnt), cnt);
//	if (k >= m && k <= M)
//	{
//		cout << "YES" << endl;
//
//	}
//	else
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	l1 = 1; l2 = 1; r1 = n; r2 = n;
//	pos = 0;
//	int c = k - m;//要送多少个
//	while (l1 <= r1)
//	{
//		if (c > 0)
//		{
//			if (a[l1].num <= b[l1].num)
//			{
//				r[++pos] = b[r2];
//				l1++;
//				r2--;
//			}
//			else
//			{
//				r[++pos] = b[r2];
//				l1++; r2--;
//				c--;
//			}
//			
//		}
//		else
//		{
//			if (a[l1].num <= b[l1].num)
//			{
//				r[++pos] = b[r2];
//				l1++; r2--;
//			}
//			else
//			{
//				r[++pos] = b[l2];
//				l1++;
//				l2++;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num[a[i].val] = r[i].num;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << num[i] << " ";
//	}
//	cout << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

/*
1
5 2
6 4 5 6 2
9 7 9 1 1
NO
*/



// int r[200010];
//int pos;
//
//void solve()
//{
//	int n; cin >> n;
//	int M = 0; int m = 1e9 + 10;
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s;
//		cin >> s;
//		M = max(M, s);
//		m = min(m, s);
//	}
//	while (M != m)
//	{
//		int x = 0;
//		int cha = M - m;
//		if (m % 2 == 0)x = 0;
//		else x = 1;
//		M = (M + x) / 2;
//		m = (m + x) / 2;
//		r[++pos] = x;
//		
//	}
//	if (n == 1)
//	{
//		cout << 0 << endl;
//	}
//	else if (pos <= n)
//	{
//		cout << pos << endl;
//		for (int i = 1; i <= pos; i++)
//		{
//			cout << r[i] << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		cout << pos << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

