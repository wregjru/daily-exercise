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
bool used[200010];
int ret[200010];
int pos;
void solve()
{
	int n; int k;
	cin >> n >> k;
	int M = 0;
	pos = 0;
	for (int i = 1; i <= n; i++)
	{
		num[i] = used[i] = 0;
	}
	unordered_map<int, int> ma;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		M = max(M, num[i]);
		ma[num[i]] = i;
	}

	//sort(num + 1, num + 1 + n);
	for (int i = 1; i <= n; i++)
	{
		int flag = 0;
		for (int j = 1; j <= k / num[i]; j++)
		{
			if (ma[j * num[i]] == 0)
			{
				cout << -1 << endl;
				return;
			}
			else
			{
				if (used[ma[j*num[i]]] == 0) flag = 1;
				used[ma[j*num[i]]] = 1;
			}
		}
		if (flag == 1)ret[++pos] = num[i];
	}
	int fl = 1;
	for (int i = 1; i <= n; i++)
	{
		if (used[i] == 0)fl = 0;
	}
	if (fl == 0)
	{
		cout << -1 << endl;
	}
	else
	{
		cout << pos << endl;
		sort(ret + 1, ret + pos + 1);
		for (int i = 1; i <= pos; i++)
		{
			cout << ret[i] << " ";
		}
		cout << endl;
	}
}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}




//int f[100010];//最小值
//int g[100010];//最大值
//int num1[100010];
//int num2[100010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num1[i];
//		f[i] = g[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num2[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = max(f[i - 1] - num1[i], num2[i] - g[i-1]);
//		g[i] = min(g[i - 1] - num1[i], num2[i] - f[i - 1]);
//	}
//	cout << f[n] << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//
//	return 0;
//}

//struct node
//{
//	int l; int r;
//}tu[110];
//int pos;
//
//void solve()
//{
//	int n; int k;
//	cin >> n >> k;
//	pos = 0;
//	string s; cin >> s;
//	s = " " + s;
//	for (int i = 1; i <= n; i++)
//	{
//		if (s[i] == '1')
//		{
//			tu[++pos].l = i;
//			tu[pos].r = min(i + k,n);
//		}
//	}
//	string rett(n + 1, '0');
//	for (int i = 1; i <= pos; i++)
//	{
//		for (int j = tu[i].l; j <= tu[i].r; j++)
//		{
//			rett[j] = '1';
//		}
//	}
//	int r = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (rett[i] == '0')r++;
//	}
//	cout << r << endl;
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
//	int n; int k; int m;
//	cin >> n >> k >> m;
//	string s; cin >> s;
//	s = " " + s;
//	int tmp[30] = { 0 };
//	int cnt = 0;
//	int c = 0;
//	string ret;
//	for (int i = 1; i <= m; i++)
//	{
//		if (tmp[s[i] - 'a'] == 0)
//		{
//			cnt++;
//			tmp[s[i] - 'a']++;
//		}
//		if (cnt == k)
//		{
//			cnt = 0;
//			c++;
//			for (int i = 0; i <= 29; i++)
//			{
//				tmp[i] = 0;
//			}
//			ret += s[i];
//		}
//	}
//	if (ret.size() < n)
//	{
//		for (int i = 0; i < k; i++)
//		{
//			if (tmp[i] == 0)
//			{
//				ret += ('a' + i);
//				break;
//			}
//		}
//	}
//	while (ret.size() < n)
//	{
//		ret += 'a';
//	}
//	if (c < n)
//	{
//		cout << "NO" << endl;
//		cout << ret << endl;
//	}
//	else
//	{
//		cout << "YES" << endl;
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
//	int n; int k;
//	cin >> n >> k;
//	int tmp[300] = { 0 };
//	int pos = 0;
//	while (n)
//	{
//		tmp[++pos] = (n + 1) / 2;
//		n = n-(n + 1) / 2;
//	}
//	//int sss=0;
//	//for (int i = 1; i <= pos; i++)
//	//{
//	//	sss += tmp[i];
//	//}
//	//cout << sss << endl;
//	int mul = 1;
//	int sum = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		int s1 = sum;
//		sum += tmp[i];
//		if (sum >= k)
//		{
//			cout << mul * (2*(k - s1)-1) << endl;
//			return;
//		}
//		mul *= 2;
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	
//	return 0;
//}

/*
7
7 1
7 2
7 3
7 4
7 5
7 6
7 7
*/




//string tu[3];
//
//int dx[2] = { 0,1 };
//int dy[2] = { 1,0 };
//void solve()
//{
//	int n; cin >> n;
//	cin >> tu[1];
//	cin >> tu[2];
//
//	string a = tu[1] + tu[2][n-1];
//	string b = tu[1][0] + tu[2];//将b改为最小的
//	tu[1] = " " + tu[1];
//	tu[2] = " " + tu[2];
//	a = " " + a;
//	b = " " + b;
//	string c = b;
//	for (int i = 1; i <= n + 1; i++)
//	{
//		if (a[i] == '0' && b[i] == '1')
//		{
//			b[i] = '0';
//		}
//		else if ((a[i] == '1' && b[i] == '1'))
//		{
//			continue;
//		}
//		else if ((a[i] == '0' && b[i] == '0'))
//		{
//			continue;
//		}
//		else
//		{
//			break;
//		}
//	}
//	cout << b.substr(1) << endl;
//	int p1 = 0; int p2 = n + 2;
//	while (p1<=n&&a[p1+1] == b[p1+1])
//		p1++;
//	while (p2-1>=1&&c[p2-1] == b[p2-1])
//		p2--;
//	//cout << min(n,p1 - p2+2) << endl;
//	if (p1 == n + 1)p1--;
//	if (p2 == 1)p2++;
//	cout << p1 - p2+2<< endl;
//	/*cout << b.substr(1) << endl;
//	queue<PII> qu;
//	qu.push({ 1,1 });
//	int ret = 0;
//	while (!qu.empty())
//	{
//		PII s = qu.front();
//		qu.pop();
//		if (s.first == 2 && s.second == n)
//		{
//			ret++;
//			continue;
//		}
//		for (int j = 0; j <= 1; j++)
//		{
//			int x = s.first + dx[j];
//			int y = s.second + dy[j];
//			if (x < 1 || x>2 || y<1 || y>n + 1)continue;
//			if (tu[x][y] != b[x + y - 1])continue;
//			qu.push({ x,y });
//		}
//
//	}
//	cout << ret << endl;*/
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
8
00100111
11101101

*/


//int num[200010];
//int num2[200010];
//int dp[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num2[i];
//	}
//	dp[n + 1] = 0;
//	for (int i = n; i >= 1; i--)
//	{
//		dp[i] = min(num[i], num2[i]) + dp[i + 1];
//	}
//	int ret = 0x3f3f3f3f3f3f3f3f;
//	for (int i = 1; i <= k; i++)
//	{
//		ret = min(ret, dp[i + 1] + num[i]);
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