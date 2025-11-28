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


int n; 

bool check(int s)
{
	int m = s * s / 8 - 5 * s / 4;
	int M = (s * s - 3 * s - 2) / 2;
	if (m <= n && M >= n)return true;
	return false;
}


void solve()
{
	
	cin >> n;
	int l = 1; int r = n;
	while (l < r)
	{
		int mid = l + (r - l+1) / 2;
		if (check(mid))l = mid;
		else r = mid - 1;
	}
	/*while (l < r)
	{
		int mid = l + (r - l) / 2;
		if (check(mid))r = mid;
		else l = mid + 1;
	}*/
	cout << l << endl;
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}


//1 3



//string tu[200010];
//
//void solve()
//{
//	int n; int m; cin >> n >> m;
//	for (int i = 0; i <= n + 3; i++)tu[i].clear();
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tu[i];
//		tu[i] = " " + tu[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j <= m; j++)
//		{
//			if (tu[i][j] == 'U' || tu[i][j] == 'D')cnt++;
//		}
//		if (cnt % 2 != 0)
//		{
//			cout << -1 << endl;
//			return;
//		}
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int cnt = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			if (tu[j][i] == 'L' || tu[j][i] == 'R')cnt++;
//		}
//		if (cnt % 2 != 0)
//		{
//			cout << -1 << endl;
//			return;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int flag = 1;
//		for (int j = 1; j <= m; j++)
//		{
//			if (tu[i][j] == 'U')
//			{
//				if(flag==1)
//				{
//					tu[i][j] = 'B';
//					tu[i + 1][j] = 'W';
//				}
//				else
//				{
//					tu[i][j] = 'W';
//					tu[i + 1][j] = 'B';
//				}
//				flag = 1 - flag;
//			}
//		}
//		
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int flag = 1;
//		for (int j = 1; j <= n; j++)
//		{
//			if (tu[j][i] == 'L')
//			{
//				if (flag == 1)
//				{
//					tu[j][i] = 'B';
//					tu[j][i + 1] = 'W';
//				}
//				else
//				{
//					tu[j][i] = 'W';
//					tu[j][i + 1] = 'B';
//				}
//				flag = 1 - flag;
//				
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << tu[i][j];
//		}
//		cout << endl;
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

/*
1
4 6
..LR..
ULRU..
DLRDUU
..LRDD
*/


////vector<int> tu[200010];
//void solve()
//{
//	int n; int m; cin >> n >> m;
//	if (n == 1)
//	{
//		if (m == 1)
//		{
//			cout << 1 << endl;
//			cout << 1 << endl;
//		}
//		else
//		{
//			cout << 2 << endl;
//			for (int i = 0; i < m; i++)
//			{
//				cout << i << " ";
//			}
//			cout << endl;
//		}
//		return;
//	}
//	if (m == 1)
//	{
//		cout << 0 << endl;
//		for (int i = 1; i <= n; i++)
//		{
//			cout << 0 << endl;
//		}
//		return;
//	}
//	cout << min(n+1, m) << endl;
//	for (int i = 0; i < n; i++)
//	{
//		if (i >= m - 1)
//		{
//			for (int k = 1; k <= m; k++)
//			{
//				cout << k % m << " ";
//			}
//			cout << endl;
//		}
//		else
//		{
//			for (int j = 0; j < m; j++)
//			{
//				cout << (i + j + 1)%m << " ";
//			}
//			cout << endl;
//		}
//		
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//vector<int> tu[110];//tu[i]:第i个数所在集合
//int one[110];//one[i]:数字one[i]只有一次
//int num[110]; int pos;
//int on[110]; int pos2;
//
//void solve()
//{
//	for (int i = 0; i <= 55; i++)tu[i].clear();
//	pos = 0;
//	pos2 = 0;
//	int cnt = 0;
//	int n; cin >> n;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		int k = 0; cin >> k;
//		for (int j = 1; j <= k; j++)
//		{
//			int s; cin >> s;
//			if (num[s] == 0)
//			{
//				cnt++;
//			}
//			num[s]++;
//			tu[s].push_back(i);
//		}
//	}
//	if (n == 1)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	for (int i = 1; i <= 50; i++)
//	{
//		if (tu[i].size() == 1)
//		{
//			one[++pos] = i;
//			on[tu[i][0]]++;
//		}
//	}
//	int r = 0x3f3f3f3f;
//	for (int i = 1; i <= 50; i++)
//	{
//		if (on[i] != 0)
//		{
//			r = min(r, on[i]);
//		}
//	}
//	cout << max(cnt - r,(int)0) << endl;
//
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
5
1 1
3 3 6 10
1 9
2 1 3
3 5 8 9
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
//	for (int i = 1; i <= k; i++)
//	{
//		int l1 = i; int l2 = (i + k - 1) % n + 1;
//		if (a[l1].num < b[l2])cnt++;
//	}
//	if (cnt == n-k)
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