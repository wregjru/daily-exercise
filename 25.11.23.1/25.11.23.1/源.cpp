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

int num[200010];
void solve()
{
	int n; int l; int r;
	cin >> n >> l >> r;
	for (int i = 1; i <= n; i++)cin >> num[i];
	sort(num + 1, num + 1 + n);
	int cho = 0;
	if (n % 2 == 1)
	{
		int p = (n + 1) / 2;
		if (l > num[p])cho = l;
		else if (r < num[p])cho = r;
		else cho = num[p];
	}
	else
	{
		int lp = num[n / 2]; int rp = num[n / 2 + 1];
		if (r < lp)cho = r;
		else if (l > rp)cho = l;
		else cho = (lp + rp) / 2;
	}
	int ret = 0;
	for (int i = 1; i <= n; i++)
	{
		ret += abs(num[i] - cho);
	}
	cout << ret << endl;
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}












//struct node
//{
//	int c;
//	int l; int r;
//}bian[110];
//int num[110];//1,2,3
//int ret[110];
//int quj[110];
//int pos;
//
//void solve()
//{
//	int n; int k; int q; cin >> n >> k >> q;
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] = 0;
//		ret[i] = 0;
//		quj[i] = 0;
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		cin >> bian[i].c >> bian[i].l >> bian[i].r;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j=1; j <= q; j++)
//		{
//			if (i >= bian[j].l && i <= bian[j].r)
//			{
//				if (bian[j].c == 1)
//				{
//					if (num[i] == 3)
//					{
//						num[i] = 2;
//					}
//					else if (num[i] == 2)
//					{
//						num[i] = 2;
//					}
//					else
//					{
//						num[i] = 1;
//					}
//				}
//				else
//				{
//					if (num[i] == 1)
//					{
//						num[i] = 2;
//					}
//					else if (num[i] == 2)
//					{
//						num[i] = 2;
//					}
//					else
//					{
//						num[i] = 3;
//					}
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 3)
//		{
//			quj[++pos] = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 1)
//		{
//			ret[i] = k;
//		}
//		else if (num[i] == 2)
//		{
//			ret[i] = k + 1;
//		}
//	}
//	for (int i = 1; i <= pos; i++)
//	{
//		ret[quj[i]] = i % k;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ret[i] << " ";
//	}
//	cout << endl;
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
3 3 2
1 1 1
1 3 3
*/






//struct node
//{
//	int c;
//	int l; int r;
//}bian[110];
//int num[110];//1,2,3
//int ret[110];
//int quj[110];
//int pos;
//
//void solve()
//{
//	int n; int k; int q; cin >> n >> k >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] = 0;
//		ret[i] = 0;
//		quj[i] = 0;
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		cin >> bian[i].c >> bian[i].l >> bian[i].r;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j=1; j <= q; j++)
//		{
//			if (i >= bian[j].l && i <= bian[j].r)
//			{
//				if (bian[j].c == 1)
//				{
//					if (num[i] == 3)
//					{
//						num[i] = 2;
//					}
//					else if (num[i] == 2)
//					{
//						num[i] = 2;
//					}
//					else
//					{
//						num[i] = 1;
//					}
//				}
//				else
//				{
//					if (num[i] == 1)
//					{
//						num[i] = 2;
//					}
//					else if (num[i] == 2)
//					{
//						num[i] = 2;
//					}
//					else
//					{
//						num[i] = 3;
//					}
//				}
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 3)
//		{
//			quj[++pos] = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 1)
//		{
//			ret[i] = k;
//		}
//		else if (num[i] == 2)
//		{
//			ret[i] = k + 1;
//		}
//	}
//	for (int i = 1; i <= pos; i++)
//	{
//		ret[quj[i]] = i % k;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ret[i] << " ";
//	}
//	cout << endl;
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
6 2 2
1 1 3
2 2 6
*/


//void solve()
//{
//	int n; cin >> n;
//	int x; int y; cin >> x >> y;
//	string ss; cin >> ss;
//	ss = " " + ss;
//	x = abs(x); y = abs(y);
//	int cnt = 0;//多少个4
//	for (int i = 1; i <= n; i++)
//	{
//		if (ss[i] == '4')cnt++;
//	}
//	//解析式：y=-x+2*n-cnt
//	if (x > n || y > n)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	if (y > (-1 * x + 2 * n - cnt))
//	{
//		cout << "NO" << endl;
//	}
//	else
//	{
//		cout << "YES" << endl;
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





//int num[110];
//int cnt[119];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= 105; i++)cnt[i] = 0;
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		if (num[i] > 100)ret++;
//		else
//		{
//			cnt[num[i]]++;
//		}
//	}
//	for (int i = 0; i <= 100; i++)
//	{
//		if (cnt[i] != 0)
//		{
//			if (cnt[i] > i)ret += (cnt[i] - i);
//			else if (cnt[i] < i)ret += cnt[i];
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






