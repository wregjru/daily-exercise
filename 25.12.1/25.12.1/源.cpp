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


int num[200010];
int a1[200010];
int a2[200010];
int pos1;
int pos2;
void solve()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		a1[i] = 0;
		a2[i] = 0;
	}
	a1[0] = a2[0] = 0x3f3f3f3f;
	pos1 = 0; pos2 = 0;
	int ret = 0;
	for (int i = 1; i <= n; i++)
	{
		int x = a1[pos1];
		int y = a2[pos2];
		int z = num[i];
		if (x < y)
		{
			if (z <= x)
			{
				a1[++pos1] = z;
			}
			else if (z > y)
			{
				a1[++pos1] = z;
				ret++;
			}
			else
			{
				a2[++pos2] = z;
			}
		}
		else
		{
			if (z <= y)
			{
				a2[++pos2] = z;
			}
			else if (z > x)
			{
				a2[++pos2] = z;
				ret++;
			}
			else
			{
				a1[++pos1] = z;
			}
		}
	}
	cout << ret << endl;

}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}





//int sco[200010];
//vector<int> tu[200010];
//bool gone[200010];
//int M[200010];
//int m[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n + 5; i++)
//	{
//		tu[i].clear();
//		gone[i] = 0;
//		M[i] = 0; m[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> sco[i];
//	}
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a].push_back(b);
//		tu[b].push_back(a);
//	}
//	queue<int> qu;
//	qu.push(1);
//	m[1] = M[1] = sco[1];
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		gone[s] = 1;
//		for (int i = 0; i < tu[s].size(); i++)
//		{
// 			int b = tu[s][i];
//			if (gone[b])continue;
//			int x = sco[b];
//			int y = x - m[s];
//			int z = x - M[s];
//			M[b] = max(x, y);
//			m[b] = min(x, z);
//			qu.push(b);
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << M[i] << " ";
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
5
4 5 2 6 7
1 2
3 2
4 3
5 1



1
6
1000000000 500500500 900900900 9 404 800800800
3 4
5 1
2 5
1 6
6 4
*/


//int a[200010];
//int b[200010];
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
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] > b[i])
//		{
//			swap(a[i], b[i]);
//		}
//	}
//	int mul = 2;
//	for (int i = 1; i < n; i++)
//	{
//		if (b[i] <= a[i + 1])
//		{
//			mul = mul * 2 % 998244353;
//		}
//	}
//	cout << mul << endl;
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
3
2 1 4
1 3 2
*/



//void solve()
//{
//	int n; cin >> n;
//	string a; cin >> a;
//	int flag = 1;
//	int t = a.find('11');
//	while (t != string::npos)
//	{
//		string b = a.substr(0, t + 1);
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