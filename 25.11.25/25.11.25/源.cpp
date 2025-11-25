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
int dat[200010];

int gcd(int x, int y)
{
	return y == 0 ? x : gcd(y, x % y);
}
struct custom_hash {
	static uint64_t splitmix64(uint64_t x) {
		x += 0x9e3779b97f4a7c15;
		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
		return x ^ (x >> 31);
	}

	size_t operator()(uint64_t x) const {
		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
		return splitmix64(x + FIXED_RANDOM);
	}
};


void solve()
{
	int n; cin >> n;
	unordered_map<int, int, custom_hash> ma;
	if (n == 1)
	{
		cout << 1 << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		ma[num[i]] = 1;
	}
	sort(num + 1, num + 1 + n);
	for (int i = 1; i < n; i++)
	{
		dat[i] = num[n] - num[i];
	}
	int g = dat[1];
	for (int i = 2; i < n; i++)
	{
		g = gcd(g, dat[i]);
	}
	if (g == 0)g = 1;
	int ret = 0;
	for (int i = 1; i < n; i++)
	{
		ret += dat[i] / g;
	}
	int flag = 0;
	for (int i = 1; i <= n; i++)
	{
		int s = num[n] - i * g;
		if (!ma.count(s))
		{
			flag = 1;
			ret += i;
			break;
		}
	}
	if (flag == 1)
	{
		cout << ret << "\n";
	}
	else
	{
		cout << ret + n << "\n";
	}
}

signed main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t; cin >> t;
	while (t--)solve();
	return 0;
}

/*
1
3
1 2 3
*/


//int num[100010];
//int f[100010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n + 3; i++)
//	{
//		num[i] = f[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		f[i] = f[i + 1] + num[i];
//	}
//	int ret = f[1];
//	for (int i = 2; i <= n; i++)
//	{
//		if(f[i]>0)
//		ret += f[i];
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






//int num[100010];
//bool cut[100010];
//int f[100010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n + 3; i++)
//	{
//		cut[i] = 0;
//		f[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//
//	for (int i = n; i >= 1; i--)
//	{
//		f[i] = f[i + 1] + num[i];
//	}
//	int r = n;
//	while (num[r] < 0)
//	{
//		r--;
//	}
//	cut[r] = 1;
//	for (int i = 1; i <= r; i++)
//	{
//		if (num[i] > 0)cut[i] = 1;
//		else
//		{
//			if (num[i] + f[i + 1] > 0)cut[i] = 1;
//		}
//	}
//	int pos = 0;
//	int ret = 0;
//	int add = 0;
//	for (int i = 1; i < r; i++)
//	{
//		if (cut[i] == 1)
//		{
//
//			ret += add * pos;
//			pos++;
//			add = 0;
//		}
//		else
//		{
//			add += num[i];
//		}
//	}
//	int sum = 0;
//	for (int i = r; i <= n; i++)
//	{
//		sum += num[i];
//	}
//	ret += (sum * pos);
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





//struct node
//{
//	int l; int r;
//}qu[200010];
//int n;
//bool check(int s)
//{
//	int l = 0; int r = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		l = max((int)0, l - s);
//		r = r + s;
//		if (qu[i].l > r || qu, r < l)return false;
//
//	}
//}
//
//void solve()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> qu[i].l >> qu[i].r;
//	}
//	int l = 1; int r = 1e9;
//	while (l < r)
//	{
//		int mid = l + (r - l) / 2;
//		if (check(mid))r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




//int val[100010];
//struct node
//{
//	int n;
//	int fl;//×ó0ÓÒ1
//}num[200010];
//int dist[100010];
//int pos;
//bool cmp(node&x, node&y)
//{
//	return x.n < y.n;
//}
//bool cmp2(int x, int y)
//{
//	return x > y;
//}
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i].n;
//		num[i].fl = 0;
//	}
//	for (int i = n+1; i <= 2*n; i++)
//	{
//		cin >> num[i].n;
//		num[i].fl = 1;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> val[i];
//	}
//	sort(num + 1, num + 1 + 2 * n,cmp);
//	sort(val + 1, val + 1 + n, cmp2);
//	stack<node> st;
//	for (int i = 1; i <= 2*n; i++)
//	{
//		if (num[i].fl == 0)st.push(num[i]);
//		else
//		{
//			node a = st.top();
//			st.pop();
//			dist[++pos] = -a.n + num[i].n;
//		}
//	}
//	sort(dist + 1, dist + 1 + pos);
//	int ret = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		ret += val[i] * dist[i];
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