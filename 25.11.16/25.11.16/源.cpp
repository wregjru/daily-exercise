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


int num[200010];

void solve()
{
	int n; cin >> n;
	for (int i = 1; i <= n; i++)cin >> num[i];
	
}

signed main()
{
	int T; cin >> T;
	while (T--)solve();
	return 0;
}





//void solve()
//{
//	int a; int b; int c; cin >> a >> b >> c;
//	if (b * c <= a || b >= a)
//	{
//		cout << 1 << endl;
//	}
//	else
//	{
//		cout << 2 << endl;
//	}
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}











//string a;
//int num[40];
//void solve()
//{
//	int n; cin >> n;
//	cin >> a;
//	a = " " + a;
//	memset(num, 0, sizeof(num));
//	for (int i = 1; i <= n; i++)
//	{
//		num[a[i] - 'a']++;
//	}
//	int r = num[a[n] - 'a'];
//	cout << n - r << endl;
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}









//int bla[100010];
//int n; int p;
//string a;
//unordered_map<int, int> ma;
//int r[1000010];
//int cnt;
//int pos;
//
//void solve()
//{
//	cin >> p >> n;
//	cin >> a;
//	cnt = 0;
//	pos = 1;
//	a = " " + a;
//	ma.clear();
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> bla[i];
//		ma[bla[i]] = 1;
//		r[++cnt]=bla[i];
//	}
//	sort(bla + 1, bla + 1 + n);
//	for (int i = 1; i <= p; i++)
//	{
//		if (a[i] == 'A')
//		{
//			pos++;
//			if (ma[pos] == 0)r[++cnt] = pos;
//		}
//		else
//		{
//			pos++;
//			while (ma[pos]!=0)
//				pos++;
//			r[++cnt] = pos;
//			pos++;
//			while (ma[pos]!=0)
//				pos++;
//		}
//	}
//	sort(r + 1, r + cnt + 1);
//	cout << cnt << endl;
//	for (int i = 1; i <= cnt; i++)cout << r[i] << " ";
//	cout << endl;
//
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}

/*
1
3 1
BBA
6
23
*/




//int num[100010];
//int cha[100010];
//int r[100010];
//int dpq[100010];
//int dph[100010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n; i++)
//	{
//		num[i] = cha[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)cin >> num[i];
//	for (int i = 2; i <= n; i++)
//	{
//		cha[i] = num[i] - num[i - 1] + 1;
//		if (cha[i] > 2)
//		{
//			cout << 0 << endl;
//				return;
//		}
//	}
//	/////////
//	r[1] = 0;
//	int ret= 0;
//	int flag = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		r[i] = cha[i] - r[i - 1];
//		if (r[i] != 1&&r[i]!=0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	
//	for (int i = 0; i <= n+3; i++)
//	{
//		dpq[i] = dph[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dpq[i] = dpq[i - 1] + r[i];
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		dph[i] = dph[i + 1] + (1 - r[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dpq[i - 1] + dph[i + 1] + 1 != num[i])flag = 0;
//	}
//
//
//
//
//
//	if (flag == 1)ret++;
//	for (int i = 0; i <= n; i++)r[i] = 0;
//	flag = 1;
//	r[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		r[i] = cha[i] - r[i - 1];
//		if (r[i] != 1 && r[i] != 0)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	
//
//	for (int i = 0; i <= n + 3; i++)
//	{
//		dpq[i] = dph[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dpq[i] = dpq[i - 1] + r[i];
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		dph[i] = dph[i + 1] + (1 - r[i]);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dpq[i - 1] + dph[i + 1] + 1 != num[i])flag = 0;
//	}
//
//
//
//
//
//	if (flag == 1)ret++;
//	cout << ret << endl;
//}
//
//
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}

/*
1
4
4 4 3 2
*/





//bool bina[100010];
//int num[100010];
//int pos;
//int cnt;
//void dfs(int s)
//{
//	if (s > 100010)return;
//	num[++pos] = s;
//	dfs(s * 10);
//	dfs(s * 10 + 1);
//}
//
//
//
//
//signed main()
//{
//	dfs(1);
//	bina[1] = 1;
//	for (int i = 1; i <= 100010; i++)
//	{
//		for (int j = 1; j <= 34; j++)
//		{
//			if (i % num[j] == 0 && bina[i / num[j]])bina[i] = true;
//		}
//	}
//	int T; cin >> T;
//	while (T--)
//	{
//		int s; cin >> s;
//		if (bina[s])cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}






//char tu[1000][1000];
//int dx[4] = { 0, 1, -1, 0 };
//int dy[4] = { 1,0,-1,0 };
//
//void solve()
//{
//	int n; int k; cin >> n >> k;
//	int cha = n * n - k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			tu[i][j] = 'D';
//		}
//	}
//	if (cha == 1)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	if (n % 2 == 0)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j += 2)
//			{
//				if (cha == 0)break;
//				else if (cha == 1)
//				{
//					if (j == 1)tu[i][j] = 'U';
//					else
//					tu[i][j] = 'L';
//					cha--;
//					break;
//				}
//				else
//				{
//					tu[i][j] = 'R';
//					tu[i][j + 1] = 'L';
//					cha -= 2;
//				}
//			}
//		}
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j < n; j += 2)
//			{
//				if (cha == 0)break;
//				else if (cha == 1)
//				{
//					if (j == 1)tu[i][j] = 'U';
//					else
//						tu[i][j] = 'L';
//					cha--;
//					break;
//				}
//				else
//				{
//					tu[i][j] = 'R';
//					tu[i][j + 1] = 'L';
//					cha -= 2;
//				}
//			}
//		}
//		if (cha != 0)
//		{
//			for (int i = 1; i <= n; i++)
//			{
//				if (cha == 0)break;
//				tu[i][n] = 'L';
//				cha--;
//			}
//		}
//	}
//	cout << "YES" << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << tu[i][j];
//		}
//		cout << endl;
//	}
//}
//
//
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//}



//int f[200010];//a多少个
//int g[200010];//b多少个
//int h[200010];
//void solve()
//{
//	string a;
//	int n; cin >> n;
//	cin >> a;
//	a = " " + a;
//	for (int i = 0; i <= n + 5; i++)
//	{
//		f[i] = 0; g[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] == 'a')
//		{
//			f[i] = f[i - 1] + 1;
//			g[i] = g[i - 1];
//		}
//		else
//		{
//			f[i] = f[i - 1];
//			g[i] = g[i - 1] + 1;
//		}
//		h[i] = f[i] - g[i];
//	}
//	int cha = f[n] - g[n];
//	if (cha == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	unordered_map<int, int>ma;
//	ma[0] = 0;
//	int ret = 0x3f3f3f3f3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!ma.count(h[i] - cha))
//		{
//			ma[h[i]] = i;
//			continue;
//		}
//		else
//		{
//			ret = min(i - ma[h[i]-cha], ret);
//			ma[h[i]] = i;
//		}
//	}
//	if (ret == n)cout << -1 << endl;
//	else cout << ret << endl;
//
//	/*int ret = 0;
//	for (int i = 0; i <= n; i++)
//	{
//		if (f[n] - f[i] == g[n] - g[i])
//		{
//			ret = i;
//			break;
//		}
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		if (f[i] == g[i])
//		{
//			ret = min(n - i + 1, ret);
//		}
//	}
//	if (ret != n)cout << ret << endl;
//	else cout << -1 << endl;*/
//}
//
//
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}


/*
1
5
bbbab




1
4
aaaa


1
12
aabbaaabbaab
*/