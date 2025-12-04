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
int dp[200010];
void solve()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		dp[i] = 0;
	}
	int d = 0;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = dp[i - 1] + num[i];
		d = min(d, dp[i]);
	}
	cout << max(dp[n], dp[n]-2*d) << endl;

}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}




//int num[200010];
//vector<int> tu[200010];
//
//bool check(int ro, int s)
//{
//	if (s > 1e9 + 10)return false;
//	////if (ro == 1 && num[ro] >= s)return 1;
//	if (tu[ro].size() == 0)
//	{
//		return num[ro] >= s;
//	}
//	if (s <= num[ro])
//	{
//		for (int i = 0; i < tu[ro].size(); i++)
//		{
//			if (!check(tu[ro][i], s))return false;
//		}
//	}
//	else
//	{
//		for (int i = 0; i < tu[ro].size(); i++)
//		{
//			int p = 2 * s - num[ro];
//			if (!check(tu[ro][i], p))return false;
//		}
//	}
//	return 1;
//	//bool flag = 1;
//	//for (int i = 0; i < tu[ro].size(); i++)
//	//{
//	//	int k = tu[ro][i];
//	//	if (num[ro] >= s)
//	//	{
//	//		flag = (flag && check(k, s));
//	//	}
//	//	else
//	//	{
//	//		flag = (flag && check(k, 2 * s - num[ro]));
//	//	}
//	//	if (flag == 0)break;
//	//}
//	//return flag;
//}
//bool _check(int s)
//{
//	for (int i = 0; i < tu[1].size(); i++)
//	{
//		int p = tu[1][i];
//		if (!check(p, s))return 0;
//	}
//	return 1;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		tu[i].clear();
//	}
//	for (int i = 1; i < n; i++)
//	{
//		int a; cin >> a;
//		tu[a].push_back(i + 1);
//	}
//	int l = 0; int r = 1e9 + 5;
//	while (l < r)
//	{
//		int m = (l + r + 1) / 2;
//		if (_check(m)) l = m;
//		else r = m - 1;
//	}
//	cout << num[1] + l << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}


//int p[200010];
//int dp[200010];
//int pre(int s)
//{
//	int ret = 0;
//	while (s)
//	{
//		s = s / 3;
//		ret++;
//	}
//	return ret;
//}
//void fill()
//{
//	for (int i = 1; i <= 200005; i++)
//	{
//		p[i] = pre(i);
//	}
//	for (int i = 1; i <= 200004; i++)
//	{
//		dp[i] = dp[i - 1] + p[i];
//	}
//}
//
//
//void solve()
//{
//	int l; int r;
//	cin >> l >> r;
//	cout << 2*p[l]+dp[r] - dp[l] << endl;
//}
//
//
//
//signed main()
//{
//	fill();
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//int fpre[200010][30];//奇数前缀
//int gpre[200010][30];//偶数前缀
//int fsuf[200010][30];//奇数后缀
//int gsuf[200010][30];//偶数后缀
//
//void solve()
//{
//	int n; cin >> n;
//	string s; cin >> s;
//	s = " " + s;
//	if (n % 2 == 0)
//	{
//		int ret = 0;
//		int tmp[30] = { 0 };
//		for (int i = 1; i <= n; i += 2)
//		{
//			tmp[s[i] - 'a']++;
//		}
//		int M = 0;
//
//		for (int i = 0; i <= 29; i++)
//		{
//			M = max(M, tmp[i]);
//		}
//		ret += (n / 2 - M);
//		int tmp2[30] = { 0 };
//		for (int i = 2; i <= n; i += 2)
//		{
//			tmp2[s[i] - 'a']++;
//		}
//		M = 0;
//		for (int i = 0; i <= 29; i++)
//		{
//			M = max(M, tmp2[i]);
//		}
//		ret += (n / 2 - M);
//		cout << ret << endl;
//		return;
//	}
//	for (int i = 0; i <= n + 3; i++)
//	{
//		for (int j = 0; j <= 28; j++)
//		{
//			fpre[i][j] = gpre[i][j] = fsuf[i][j] = gsuf[i][j] = 0;
//		}
//	}
//	for (int i = 1; i <= n; i += 2)
//	{
//		fpre[(i + 1) / 2][s[i]-'a'] = fpre[(i - 1) / 2][s[i]-'a'] + 1;
//	}
//	for (int i = 2; i <= n; i += 2)
//	{
//		gpre[i / 2][s[i]-'a'] = gpre[i / 2 - 1][s[i]-'a'] + 1;
//	}
//	for (int i = n - 1; i>=1 ; i-=2)
//	{
//		fpre[(i + 1) / 2][s[i] - 'a'] = fpre[(i - 3) / 2][s[i] - 'a'] + 1;
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		if (i % 2 == 0)
//		{
//			int t = 0;
//			int tmp[30] = { 0 };
//			for (int j = 0; j <= 28; j++)
//			{
//				if (fpre[i / 2][j] != 0)
//				{
//					tmp[j]++;
//				}
//				if (gsuf[i / 2 + 1][j] != 0)
//				{
//					tmp[j]++;
//				}
//			}
//			int r = 0;
//			for (int i = 0; i <= 28; i++)
//			{
//				if (tmp[i] != 0)r++;
//			}
//			   
//		}
//		ret=min(ret,)
//	}
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
//	map<ll, vector<ll>> tu;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		int a = s + i - 1;
//		int b = a + i - 1;
//		if (a >= b)continue;
//		tu[a].push_back(b);
//	}
//	int ret = n;
//	queue<int> qu;
//	qu.push(n);
//	map<int, bool> gone;
//	gone[n] = 1;
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//		auto it = tu.find(s);
//		if (it == tu.end())continue;
//		for (int i = 0; i < it->second.size(); i++)
//		{
//
//			int p = it->second[i];
//			if (gone[p])continue;
//			gone[p] = 1;
//			ret = max(ret, p);
//			qu.push(p);
//		}
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