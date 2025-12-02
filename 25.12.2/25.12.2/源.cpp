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
const int mod = 998244353;
int add(int a, int b)
{
	return (a + b) % mod;
}
void solve()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
	}
	int dp[4] = { 0 };
	dp[0] = 1;
	for (int i = 1; i <= n; i++)
	{
		if (num[i] == 2)
		{
			dp[2] = add(dp[2], dp[2]);
		}
		dp[num[i]] = add(dp[num[i] - 1], dp[num[i]]);
	}
	cout << dp[3] << endl;
}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}





//int num[200010];
//int f[200010];
//int ro[200010];
//int pos;
//bool cho[200010];//根节点是否选
//int all[200010];//根节点对应子数
//int _find(int s)
//{
//	return f[s] == s ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	int fa = _find(a);
//	int fb = _find(b);
//	f[fa] = fb;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//		cho[i] = 0;
//		all[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		uni(i, num[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (f[i] == i)
//		{
//			ro[++pos] = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int fi = _find(i);
//		all[fi]++;
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		int fs = _find(s);
//		if (cho[fs])
//		{
//			cout << ret << " ";
//		}
//		else
//		{
//			cho[fs] = 1;
//			ret += all[fs];
//			cout << ret << " ";
//		}
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







//int num[200010];
//int tar[200010];
//int sub[200010];
//int suf[200010];
//void solve()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		num[i] = tar[i] = sub[i] = suf[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		cin >> tar[i];
//	}
//	int j = 0;
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	if (num[i] >= tar[j])
//	//	{
//	//		j++;
//	//		if (j == k + 1)break;
//	//	}
//	//}
//	//if (j == k + 1)
//	//{
//	//	cout << 0 << endl;
//	//	return;
//	//}
//	j = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (j < k && num[i] >= tar[j+1])j++;
//		sub[i] = j;
//	}
//	j = k;
//	for (int i = n; i >= 1; i--)
//	{
//		if (j > 0 && num[i] >= tar[j])j--;
//		suf[i] = j;		
//	}
//	if (sub[n] == k)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int ret = 0x3f3f3f3f;
//	int flag = 0;
//	suf[n + 1] = k;
//	if (sub[n] == k-1)ret = min(ret, tar[k]);
//	if (suf[1] == 1)ret = min(ret, tar[1]);
//	for (int i = 0; i <= n; i++)
//	{
//		if (sub[i]+1 == suf[i + 1])
//		{
//			ret = min(ret, tar[sub[i]+1]);
//		}
//	}
//	if (ret == 0x3f3f3f3f)
//	{
//		cout << -1 << endl;
//	}
//	else
//	{
//		cout << ret << endl;
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

/*
1
9 5
3 5 2 3 3 5 8 1 2
4 6 2 4 6

1
6 3
1 2 6 8 2 1
5 4 3


1
5 5
1 2 3 4 5
5 4 3 2 1

1
6 3
1 2 6 8 2 1
5 4 3
*/





//int num[200010];
//int dp[200010];
//size_t pos;
//int n;
//int check(int s)
//{
//	num[pos] = s;
//	for (int i = 1; i <= n; i++)dp[i] = 0;
// 	int M = -1e18 - 10;
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = max(dp[i - 1] + num[i], num[i]);
//		M = max(M, dp[i]);
//	}
//	return M;
//}
//
//void solve()
//{
//	cin >> n;
//	int k; cin >> k;
//	string s; cin >> s;
//	for (int i = 1; i <= n; i++)
//	{
//		int e; cin >> e;
//		if (s[i - 1] == '0')num[i] = -1e18;
//		else num[i] = e;
//		dp[i] = 0;
//	}
//	int M = -1e18 - 10;
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = max(dp[i - 1] + num[i], num[i]);
//		M = max(M, dp[i]);
//	}
//	if (M > k)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	pos = s.find('0');
//	if (pos == string::npos && M != k)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	pos++;
//	cout << "YES" << endl;
//	int l = -1e18; int r = 1e18;
//	while (l <= r)
//	{
// 		int m = l + (r - l) / 2;
//		if (check(m) > k)
//		{
//			r = m-1;
//		}
//		else if (check(m) < k)
//		{
//			l = m+1;
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << num[i] << " ";
//	}
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	dp[i] = 0;
//	//}
//	//int ma = -0x3f3f3f3f;
//	//for (int i = 1; i <= n; i++)
//	//{
//	//	dp[i] = max(dp[i - 1] + num[i] , num[i]);
//	//	ma = max(ma, dp[i]);
//	//}
//	//if (ma == k)
//	//{
//	//	cout << " " << endl;
//	//}
//	//else
//	//{
//	//	cout << "111111111111111111111111111111111111111111111111111111111111111111111111111" << endl;
//	//}
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



//void solve()
//{
//	int a1; int b1; 
//	cin >> a1 >> b1;
//	int m = min(a1, b1);
//	int M = max(a1, b1);
//	string a = to_string(m);
//	string b = to_string(M);
//	int i = 0;
//	int ret = 0;
//	while (i < a.size() && a[i] == b[i])
//	{
//		i++;
//		ret+=2;
//	}
//	if (i < a.size()&&abs(a[i] - b[i]) == 1)
//	{
//		i++;
//		ret++;
//		while (i < a.size() && a[i] == '9'&&b[i]=='0')
//		{
//			i++;
//			ret++;
//		}
//		cout << ret << endl;
//	}
//	else
//	{
//		cout << ret << endl;
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





//int pos;
//int ret;
//int r;
//int shuwei(int s)
//{
//	int ret = 0;
//	while (s)
//	{
//		ret++;
//		s /= 10;
//	}
//	return ret;
//}
//int qu(int s) 
//{
//	for (int i = 1; i < pos; i++) 
//	{
//		s /= 10;
//	}
//	return s % 10;
//}
//
//void dfs()
//{
//	if (pos == 0)
//	{
//		r = max(r, ret);
//		return;
//	}
//	if (qu(a) == qu(b))
//	{
//		pos--;
//	}
//	else if (abs(qu(a) - qu(b)) > 1)
//	{
//		pos--;
//		ret++;
//	}
//	else
//	{
//		pos--;
//		dfs();
//
//	}
//}
//
//
//void solve()
//{
//	int a;
//	int b;
//	cin >> a >> b;
//	pos = shuwei(a);
//	ret = 0; r = 0;
//	dfs(a,b);
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}