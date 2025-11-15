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



string a;


void solve()
{
	cin >> a;
	int n = a.size();
	int l = 0, r = n;
	while (l < n && a[l] == '<') l++;
	while (r - 1 >= 0 && a[r - 1] == '>') r--;
	if (l != r && l + 1 != r) 
	{
		cout << -1 << endl;
		return;
	}

	int L = l;
	int R = n - r;

	int ret;
	if (l == r) 
	{
		ret = max(L, R);
	}
	else 
	{
		ret = max(L, R) + 1;
	}
	cout << ret << endl;
	/*int l = 0; int r = a.size();
	while (a[l] == '<')l++;
	while (a[r-1] == '>')r--;
	if (l == r|| l + 1 == r)cout << max((int)a.size() - r + 1, l)<<endl;
	else cout << -1 << endl;*/
	/*if (l+1 == r||l>r)cout << max((int)a.size() - r, l) << endl;
	else if (l == r)cout << 1 << endl;
	else cout << -1 << endl;*/
	/*if (a.size() == 1 && a[0] == '*')
	{
		cout << 1 << endl;
		return;
	}
	int l = 0;
	while (a[l] == '<')
	{
		l++;
	}
	int r = a.size() - 1;
	while (a[r] == '>')
	{
		r--;
	}
	if (r+1 == l || r == l)
	{
		cout << max((int)a.size()-r, l) << endl;
	}
	else
	{
		cout << -1 << endl;
	}*/
}



signed main()
{
	int T;
	cin >> T;
	while (T--)
	{
		solve();
	}
	return 0;
}








//int n; int a;
//int num[300010];
//
//void solve()
//{
//	cin >> n >> a;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	int lsc = 0;
//	int msc = 0; int rsc = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] < a)lsc++;
//		else if (num[i] > a)rsc++;
//	}
//	if (lsc > rsc)cout << a - 1 << endl;
//	else cout << a + 1 << endl;
//}
//
//
//
//signed main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}






//int f[100010];
//
//struct node
//{
//	int a; int b; int c;
//}e[100010],que[100010];
//int n; int m;
//int ret[100010];
//bool cmp1(node& a, node& b)
//{
//	return a.c > b.c;
//}
//bool cmp2(node& a, node& b)
//{
//	return a.a > b.a;
//}
//int cnt[100010];
//
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i < n; i++)cin >> e[i].a >> e[i].b >> e[i].c;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> que[i].a >> que[i].b;//最短，b个节点
//		que[i].c = i;
//	}
//	sort(e + 1, e + n, cmp1);
//	sort(que + 1, que + m+1, cmp2);
//	int pos = 1;
//	for (int i = 1; i <= n; i++)f[i] = i;
//	for (int i = 1; i <= n; i++)cnt[i] = 1;
//	for (int j = 1; j <= m; j++)
//	{
//		int k = que[j].a; int v = que[j].b;
//		int i = que[j].c;//第i个问题，小于k的路，从v开始
//		for (; pos < n; pos++)
//		{
//			int a = e[pos].a; int b = e[pos].b; int c = e[pos].c;//a到b距离为c
//			if (c < k)break;
//			int fa = _find(a); int fb = _find(b);
//			if (fa != fb)
//			{
//				f[fa] = fb;
//				cnt[fb] += cnt[fa];
//			}
//		}
//		ret[i] = cnt[_find(v)] - 1;
//	}
//	for (int i = 1; i <= m; i++)cout << ret[i] << endl;
//	return 0;
//}






//int dp[3010][3010];
//int num[3010];
//int n;
//signed main()
//{
//	cin >> n;
//	memset(dp, 0x3f, sizeof(dp));
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)dp[i][i] = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (num[i] != num[i + 1])
//			dp[i][i + 1] = 1;
//		else dp[i][i + 1] = 0;
//	}
//	for (int len = 3; len <= n; len++)
//	{
//		for (int i = 1; i + len - 1 <= n; i++)
//		{
//			int j = i + len - 1;
//			if (num[i] == num[j])dp[i][j] = dp[i + 1][j - 1];
//			
//			else
//			{
//				dp[i][j] = min(dp[i][j - 1], dp[i + 1][j]) + 1;
//				dp[i][j] = min(dp[i][j], dp[i + 1][j - 1] + 1);
//			}
//			
//			/*dp[i][j] = min(dp[i][j], dp[i + 1][j - 1] + 1);
//			if (num[i] != num[j])
//			{
//				dp[i][j] = min(dp[i][j], dp[i - 1][j] + 1);
//				dp[i][j] = min(dp[i][j], dp[i][j + 1] + 1); 
//				dp[i][j] = min(dp[i + 1][j - 1] + 1, dp[i][j]);
//			}*/
//		}
//	}
//	cout << dp[1][n] << endl;
//	return 0;
//}







//int ins[30];//统计
//int in[30];
//char seq[30]; int cnt;//记录结果
//vector<int>tu[100];
//int n; int m;
//int dist[30];
//int flag = 0;
//int ret;
//bool topo()
//{
//	flag = 1;
//	memset(in, 0, sizeof(in));
//	cnt = 0;
//	queue<int>qu;
//	for (int i = 1; i <= n; i++)
//	{
//		in[i] = ins[i];
//		if (ins[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		seq[++cnt] = s - 1 + 'A';
//		if (qu.size()>0)flag = 0;
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int b = tu[s][i];
//			in[b]--;
//			if (in[b]==0)qu.push(b);
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 1)
//		{
//			int sss = 1; 
//		}
//		if (in[i] != 0)return false;
//	}
//	return true;
//}
//
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		char a; char b; char c;
//		cin >> a >> b >> c;
//		if (b == '<')
//		{
//			tu[a - 'A' + 1].push_back(c - 'A' + 1);
//			ins[c - 'A' + 1]++;
//		}
//		else 
//		{
//			tu[c - 'A' + 1].push_back(a - 'A' + 1);
//			ins[a - 'A' + 1]++;
//		}
//		if (topo() == false)
//		{
//			cout << "Inconsistency found after " << i << " relations." << endl;
//			return 0;
//		}
//		if (flag == true)
//		{
//			ret = i;
//			break;
//		}
//		/*if (flag == true)
//		{
//			printf("Sorted sequence determined after %d relations: ", i);
//			for (int i = 1; i <= cnt; i++) cout << seq[i];
//			cout << "." << endl;
//			return 0;
//		}*/
//	}
//	if (flag == 1)
//	{
//		printf("Sorted sequence determined after %d relations: ", ret);
//		for (int i = 1; i <= cnt; i++) cout << seq[i];
//		cout << "." << endl;
//	}
//	else
//	{
//		cout << "Sorted sequence cannot be determined." << endl;
//	}
//	/*if (flag == false)
//	{
//		cout << "Sorted sequence cannot be determined." << endl;
//	}*/
//	return 0;
//}



//string a;
//int n;
//signed main()
//{
//	cin >> a; cin >> n;
//	while (n > a.size())
//	{
//		int k = a.size();
//		while (k < n)k *= 2;
//		k /= 2;
//		if (n > k + 1)n -= k + 1;
//		else if (n == k + 1)n -= 1;
//
//	}
//	cout << a[n-1] << endl;
//	return 0;
//}
