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
int ad[200010];
int pre[200010];
int sub[200010];
void solve()
{
	int n; int k; cin >> n >> k;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> ad[i];
	}
	for (int i = 0; i <= n+4; i++)
	{
		pre[i] = sub[i] = 0;
	}
	int m = -0x3f3f3f3f;
	int sum = 0;
	for (int i = 1; i <= n; i++)
	{
		pre[i] = max(pre[i - 1], pre[i - 1] + num[i]);
	}
	m = -0x3f3f3f3f;
	sum = 0;
	for (int i = n; i >=1; i--)
	{

		if (sum < 0)
		{
			sum = 0;

		}
		sum += num[i];
		m = max(m, sum);
		sub[i] = m;
	}
	m = -0x3f3f3f3f;
	int p = 0;
	for (int i = 1; i <= n; i++)
	{
		int s = pre[i] + sub[i] + ad[i] - num[i];
		m = max(s, m);
	}
	cout << m << endl;
	
	
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}


/*
1
5 200000
3 -1 9 -5 4
0 0 0 0 0
*/
//int num[400010];
//int c[400010];
////bool used[400010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 0; i <= 2 * n + 3; i++)num[i] = 0;
//	for (int i = 1; i <= 2*n; i++)
//	{
//		int s; cin >> s;
//		num[s]++;
//	}
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		if (num[i] != 0)c[++pos] = num[i];
//	}
//	sort(c + 1, c + 1 + pos);
//	int od = 0; int ev = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		if (c[i] % 2 == 1)od++;
//		else ev++;
//	}
//	int ss = (n - od / 2);
//	int r = min(ev, ss);
//	int ret = od + 2 * r;
//	if (od != 0)
//	{
//		cout << ret << endl;
//	}
//	else
//	{
//		int y = min(ev, n);
//		if ((n % 2 == 1 && y % 2 == 1) || (n % 2 == 0 && y % 2 == 0))
//		{
//			cout << 2 * y << endl;
//		}
//		else
//		{
//			cout << 2 * (y - 1) << endl;
//		}
//	}
//	//if (pos == 1)
//	//{
//	//	if (n % 2 == 1)
//	//	{
//	//		cout << 2 << endl;
//	//	}
//	//	else
//	//	{
//	//		cout << 0 << endl;
//	//	}
//	//	return;
//	//}
//	/*int ret = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		if (c[i] % 2 == 1)ret++;
//		else if (c[i] <= n)ret += 2;
//	}
//	cout << ret << endl;*/
//	//for (int i = 0; i <= pos + 2; i++)used[i] = 0;
//	//int l = 0;
//	/*for (int i = 1; i <= pos; i++)
//	{
//		if (c[i] % 2 == 0 || c[i] == 1)
//		{
//			l++;
//			c[i]--;
//			if (c[i] % 2 == 0)used[i] = 1;
//			if (l == n)break;
//		}
//	}
//	if (l == n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (c[i] % 2 == 1)
//				l++;
//		}
//		cout << l << endl;
//	}
//	else
//	{
//		int ret = l;
//	}*/
//	/*vector<int> tu1; vector<int> tu2;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s = 0;
//		if (c[i] % 2 == 1)
//		{
//			s = c[i] / 2;
//			if (s == 0)s = 1;
//		}
//		else
//		{
//			s = c[i] / 2 - 1;
//		}
//		tu1.push_back(s);
//		tu2.push_back(c[i] - s);
//		sum += s;
//	}
//	int ret = n;
//	for (int i = 1; i <= n; i++)
//	{
//
//	}*/
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
5 5 5 5 5 5

1
5
9 9 9 7 7 7 9 7 7 7
*/

//void solve()
//{
//	int n; cin >> n;
//	int a; int b;
//	cin >> a >> b;
//	int ret = a / 2 + b;
//	cout << min(ret, n) << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



//int f[300010];
//void solve()
//{
//	int n; cin >> n;
//	string a; cin >> a;
//	a = " " + a;
//	/*for (int i = 1; i < n; i++)
//	{
//		int all = i + 1;
//		int ret = 0;
//		if (a[i - 1] == '0')ret++;
//		if (a[i - 1] == '1')ret++;
//		if (i - 2 >= 0 && ((a[i - 1] == '1' && a[i - 2] == '0') || (a[i - 1] == '0' && a[i - 2] == '1')))ret += (all - 2);
//		cout << ret << " ";
//	}*/
//	int p0 = 0; int p1 = 0;
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == '1')
//		{
//			p1 = i;
//			cout << p0 + 1 << " ";
//		}
//		else
//		{
//			p0 = i;
//			cout << p1 + 1 << " ";
//		}
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



//bool onl[100010];
//vector<int> num[100010];
//
//
//void solve()
//{
//	int n; cin >> n;
//	unordered_map<int, int> ma;
//	for (int i = 0; i <= n+2; i++)onl[i] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		num[i].clear();
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		for (int j = 1; j <= s; j++)
//		{
//			int q; cin >> q;
//			num[i].push_back(q);
//			ma[q]++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < num[i].size(); j++)
//		{
//			if (ma[num[i][j]] == 1)
//			{
//				onl[i] = 1;
//				break;
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (onl[i] == 1)ret++;
//	}
//	if (ret == n)cout << "NO" << endl;
//	else cout << "YES" << endl;
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
2 1 5
2 2 4
2 2 3
*/






//void solve()
//{
//	int n; cin >> n;
//	if (n % 2 == 0)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	else
//	{
//		cout << "YES" << endl;
//		int pos = (3 * n + 3) / 2;
//		for (int i = 1; i <= n; i += 2)
//		{
//			cout << i << " " << pos - i << endl;
//			pos++;
//		}
//		for (int i = 2; i <= n; i += 2)
//		{
//			cout << i << " " << pos - i << endl;
//			pos++;
//		}
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






//int shuwei(int s)
//{
//	int ret = 0;
//	while (s)
//	{
//		s >>= 1;
//		ret++;
//	}
//	return ret;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	int sum = 0;
//	if (n % 2 == 1)sum = 2 * n + 1;
//	else sum = 2 * n;
//	int pos = shuwei(sum);
//	int xr = sum / 2;
//	pos-=2;
//	int r1=0; int r2=0;
//	//r1 += (1LL << (pos + 1));
//	int need = 1;//需要进位
//	int flag = 0;
//	while (pos >= 0)
//	{
//		if (sum & (1LL << pos) && (xr & (1LL << pos)))
//		{
//			if (need)
//			{
//				cout << "-1" << endl;
//				return;
//			}
//			if (flag == 0)
//			{
//				r1 += (1LL << pos);
//			}
//			else
//			{
//				r2 += (1LL << pos);
//			}
//			flag = 1 - flag;
//			need = 0;
//		}
//		else if ((!(sum & (1LL << pos))) && (xr & (1LL << pos)))
//		{
//			if (need == 0)
//			{
//				cout << -1 << endl;
//				return;
//			}
//			if (flag == 0)
//			{
//				r1 += (1LL << pos);
//			}
//			else
//			{
//				r2 += (1LL << pos);
//			}
//			flag = 1 - flag;
//		}
//		else if (sum & (1LL << pos) && (!(xr & (1LL << pos))))
//		{
//			if (need == 1)
//			{
//				r1 += (1LL << pos);
//				r2 += (1LL << pos);
//			}
//			need = 1;
//		}
//		else
//		{
//			if (need == 1)
//			{
//				r1 += (1LL << pos);
//				r2 += (1LL << pos);
//			}
//			need = 0;
//		}
//		pos--;
//	}
//	if (r1 == 0 || r2 == 0)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	cout << r1 << " " << r2 << endl;
//
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



//1 2
//1 5



//void solve()
//{
//	int n; cin >> n;
//	int ssss; cin >> ssss;
//	int num[30] = { 0 };
//	string a; cin >> a;
//	a = " " + a;
//	string b; cin >> b;
//	b = " " + b;
//	for (int i = 1; i <= n; i++)
//	{
//		num[a[i] - 'a']++;
//		num[b[i] - 'a']--;
//	}
//	int flag = 1;
//	for (int i = 0; i < 26; i++)
//	{
//		if (num[i] != 0)
//		{
//			flag = 0; break;
//		}
//	}
//	if (flag == 0)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	if (n >= 6)
//	{
//		cout << "YES" << endl;
//		return;
//	}
//	else
//	{
//		unordered_map<string, int> ma;
//		queue<string> qu;
//		qu.push(a);
//		while (!qu.empty())
//		{
//			string s = qu.front();
//			qu.pop();
//			if (s == b)
//			{
//				cout << "YES" << endl;
//				return;
//			}
//			ma[s] = 1;
//			for (int i = 1; i <= n - 3; i++)
//			{
//				string ww = s;
//				swap(ww[i], ww[i + 3]);
//				if (!ma.count(ww))
//				{
//					qu.push(ww);
//				}
//				if (i + 4 <= n)
//				{
//					string ww2 = s;
//					swap(ww2[i], ww2[i + 4]);
//					if (!ma.count(ww2))
//					{
//						qu.push(ww2);
//					}
//				}
//				
//			}
//		}
//		cout << "NO" << endl;
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
6 3
talant
*/