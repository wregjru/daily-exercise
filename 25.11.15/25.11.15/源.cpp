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

int f[200010];//a多少个
int g[200010];//b多少个
void solve()
{
	string a;
	int n; cin >> n;
	cin >> a;
	a = " " + a;
	for (int i = 0; i <= n + 5; i++)
	{
		f[i] = 0; g[i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		if (a[i] == 'a')
		{
			f[i] = f[i - 1] + 1;
			g[i] = g[i - 1];
		}
		else
		{
			f[i] = f[i - 1];
			g[i] = g[i - 1] + 1;
		}
	}
	int ret = 0;
	for (int i = 0; i <= n; i++)
	{
		if (f[n] - f[i] == g[n] - g[i])
		{
			ret = i;
			break;
		}
	}
	for (int i = n; i >= 1; i--)
	{
		if (f[i] == g[i])
		{
			ret = min(n - i + 1, ret);
		}
	}
	if (ret != n)cout << ret << endl;
	else cout << -1 << endl;
}



signed main()
{
	int T; cin >> T;
	while (T--)solve();
	return 0;
}


/*
1
5
bbbab
*/


//void solve()
//{
//	int n; int k; cin >> n >> k;
//	string s; cin >> s;
//	if (n == k)
//	{
//		cout << string(n, '-') << endl;
//		return;
//	}
//	string ret(n, '+');
//	int a = 0; int b = 0; int c = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '0')a++;
//		else if (s[i] == '1')b++;
//		else c++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i <= a || i >= n - b + 1)ret[i-1] = '-';
//		else if ((i > a && i <= a + c) || (i < n - b + 1 && i >= n - b - c + 1))ret[i-1] = '?';
//	}
//	cout << ret << endl;
//	/*int l = 0; int r = ret.size() - 1;
//	int r2 = 0;
//	if (n == 1)
//	{
//		cout << "-" << endl;
//		return;
//	}
//	if (n == k)
//	{
//		for (int i = 1; i <= n; i++)cout << "-";
//		return;
//	}
//	for (int i = 0; i < k; i++)
//	{
//		if (s[i] == '0')
//		{
//			ret[l] = '-';
//			l++;
//		}
//		else if (s[i] == '1')
//		{
//			ret[r] = '-';
//			r--;
//		}
//		else
//		{
//			r2++;
//		}
//	}
//	int p = 0;
//	while (p < r2 && l != r+1)
//	{
//		ret[l] = ret[r] = '?';
//		l++; r--;
//		p++;
//	}
//	for (int i = l; i <= r; i++)ret[i] = '+';
//	cout << ret << endl;*/
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}









//int a[200010];
//int odd[200010]; int ocnt;
//int even[200010]; int ecnt;
//int sum;
//void solve()
//{
//	int n; cin >> n;
//	ocnt = ecnt = 0;
//	sum = 0;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	sort(a + 1, a + 1 + n);
//	for (int i = 1; i <= n; i++)
//	{
//		int j = i;
//		while (j <= n && a[i] == a[j])
//		{
//			j++;
//		}
//		int len = j - i;
//		int pai = len / 2;
//		if (pai == 0)odd[++ocnt] = a[i];
//		else
//		{
//			even[++ecnt] = a[i];
//			sum += pai * a[i];
//			if (len % 2 == 1)
//			{
//				odd[++ocnt] = a[i];
//			}
//		}
//		i = j;
//	}
//	if (sum == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int all = sum * 2;
//	int ret = 0;
//	for (int i = 1; i <= ocnt; i++)
//	{
//		int s = odd[i];
//		if (all > s)
//			ret = max(ret, all + s);
//	}
//
//	for (int i = 2; i <= ocnt; i++)
//	{
//		int a1 = odd[i-1];
//		int a2 = odd[i];
//		if (a2 - a1 < all)ret = max(ret, all + a1 + a2);
//
//	}
//	for (int i = 1; i <= ecnt; i++)
//	{
//		if (sum > even[i])ret = max(ret, all);
//	}
//	cout << ret << endl;
//}
//
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}




//int num[200010];
//int odd[200010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 1; i <= n; i++)cin >> num[i];
//	sort(num + 1, num + 1 + n);
//	int tar = 1;
//	int sum = 0;
//	while (tar <= n)
//	{
//		if (num[tar] == num[tar + 1])
//		{
//			sum += num[tar] * 2;
//			tar += 2;
//		}
//		else
//		{
//			odd[++pos] = num[tar];
//			tar++;
//		}
//	}
//	int ret = sum;
//	if (pos == 1)
//	{
//		if(odd[pos]<sum)
//		cout << sum + odd[pos] << endl;
//		else
//		{
//			if (n == 3)cout << 0 << endl;
//			else
//				cout << sum << endl;
//		}
//		return;
//	}
//	else if(pos==0)
//	{
//		if (n == 2)cout << 0 << endl;
//		else
//		{
//			cout << sum << endl;
//			return;
//		}
//	}
//	else
//	{
//		int flag = 0;
//		for (int i = pos; i > 1; i--)
//		{
//			if (odd[i] - odd[i - 1] < sum)
//			{
//				sum += (odd[i] + odd[i - 1]);
//				flag = 1;
//				break;
//			}
//		}
//		if (flag==0&&n-pos == 2)cout << 0 << endl;
//		else
//		{
//			for (int i = n; i >= 1; i--)
//			{
//				if (odd[i] < sum)
//				{
//
//					break;
//				}
//			}
//		}
//	}
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}

/*
1
6
25 25 25 25 50 1000
100
*/
/*
1
4
1 1 1000 1001
2003
*/
//1 7 16 10 5 2 2 1 1

/*
1
7
4 3 5 1 5 3 3
*/


//void solve()
//{
//	int x; int y; int z;
//	cin >> x >> y >> z;
//	while (x > 0 || y > 0 || z > 0)
//	{
//		int cnt = 0;
//		if (x & 1)cnt++;
//		if (y & 1)cnt++;
//		if (z & 1)cnt++;
//		if (cnt == 2)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//		x >>= 1; y >>= 1; z >>= 1;
//	}
//	cout << "YES" << endl;
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}




//int num[100010];
//void solve()
//{
//	int sum = 0;
//	int n; int k;
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)cin >> num[i];
//	sort(num + 1, num + 1 + n);
//	int tag = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += max(num[i] - k, (int)0);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] >= k)
//		{
//			tag = i; break;
//		}
//	}
//	if (tag == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int ret = n - tag + 1;
//	for (int i = tag-1; i >= 1; i--)
//	{
//		sum -= (k - num[i]);
//		if (sum >= 0)ret++;
//		else break;
//	}
//	cout << ret << endl;
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while(T--)
//	solve();
//	return 0;
//}

/*
1
2 5
4 3
*/


//int num[200010];
//int dp[200010];//前缀和
//int sum;
//void solve()
//{
//	int n; cin >> n;
//	sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		dp[i] = dp[i - 1] + num[i];
//		sum += num[i];
//	}
//	int ret = 0;
//	for (int l = 1, r = 1; r <= n; r++)
//	{
//		if (dp[l - 1] + l - l * l < dp[r - 1] + r - r * r)l = r;
//		ret = max(ret, dp[l - 1] + l - l * l + r * r + r - dp[r]);
//	}
//	cout << sum + ret << endl;
//}
//
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		solve();
//	}
//	return 0;
//}

/*
1
4
1 3 2 1
*/



//string a;
//
//
//void solve()
//{
//	cin >> a;
//	int n = a.size();
//	int l = 0, r = n;
//	while (l < n && a[l] == '<') l++;
//	while (r - 1 >= 0 && a[r - 1] == '>') r--;
//	if (l != r && l + 1 != r)
//	{
//		cout << -1 << endl;
//		return;
//	}
//
//	int L = l;
//	int R = n - r;
//
//	int ret;
//	if (l == r)
//	{
//		ret = max(L, R);
//	}
//	else
//	{
//		ret = max(L, R) + 1;
//	}
//	cout << ret << endl;
//	/*int l = 0; int r = a.size();
//	while (a[l] == '<')l++;
//	while (a[r-1] == '>')r--;
//	if (l == r|| l + 1 == r)cout << max((int)a.size() - r + 1, l)<<endl;
//	else cout << -1 << endl;*/
//	/*if (l+1 == r||l>r)cout << max((int)a.size() - r, l) << endl;
//	else if (l == r)cout << 1 << endl;
//	else cout << -1 << endl;*/
//	/*if (a.size() == 1 && a[0] == '*')
//	{
//		cout << 1 << endl;
//		return;
//	}
//	int l = 0;
//	while (a[l] == '<')
//	{
//		l++;
//	}
//	int r = a.size() - 1;
//	while (a[r] == '>')
//	{
//		r--;
//	}
//	if (r+1 == l || r == l)
//	{
//		cout << max((int)a.size()-r, l) << endl;
//	}
//	else
//	{
//		cout << -1 << endl;
//	}*/
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



//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; cin >> n;
//		if (n == 1)cout << 1 << endl;
//		else cout << n * (n - 1) << endl;
//	}
//	
//	return 0;
//}




