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


int num[1000010];
bool ji[1000010];
int cnt;
int ret[1000010];
int pos;

void solve()
{
	cnt = 0;
	pos = 0;
	int n; int k;
	cin >> n >> k;
	for (int i = 0; i <= n + 5; i++)
	{
		num[i] = ji[i] = 0;
		ret[i] = 0;
	}
	if (k<n || k>(n + 1) * n / 2)
	{
		cout << -1 << endl;
		return;
	}
	int cha = k - n;
	for (int i = n - 1; i >= 0; i--)
	{
		if (i == cha)
		{
			num[++cnt] = i+1;
			ji[i+1] = true;
			break;
		}
		else if (i < cha)
		{
			cha -= i;
			num[++cnt] = i+1;
			ji[i+1] = true;
		}
	}
	for (int i = 1; i <= cnt; i++)
	{
		ret[++pos] = num[i];
	}
	for (int i = 1; i <= n; i++)
	{
		if (!ji[i])
		{
			ret[++pos] = i;
		}
	}
	cout << ret[1] << endl;
	for (int i = 1; i < n; i++)
	{
		cout << ret[i] << " " << ret[i + 1] << endl;
	}





	/*int n; int k;
	cin >> n >> k;
	cnt = 0;
	if (k<n || k>(n + 1) * n / 2)
	{
		cout << -1 << endl;
		return;
	}
	if (k == n)
	{
		cout << 1 << endl;
		for (int i = 1; i < n; i++)
		{
			cout << i << " " << i + 1 << endl;
		}
		return;
	}
	if (k <= 2 * n - 1)
	{
		cout << k - n + 1 << endl;
		num[++cnt] = k - n + 1;
		num[++cnt] = 1;
		for (int i = 2; i <= n; i++)
		{
			if (i == k - n + 1)continue;
			num[++cnt] = i;
		}
		for (int i = 1; i < n; i++)
		{
			cout << num[i] << " " << num[i + 1] << endl;
		}
		return;
	}*/

	/*int l = 0; int r = n + 1;
	int sum = 0;
	while (l < r)
	{
		if (k - sum > r - l - 1)
		{
			if (k - sum >= num[r - 1])
			{
				sum += (--r);
				num[++cnt] = r;
			}
			else
			{
				sum += (++l);
				num[++cnt] = l;
			}
		}
		else
		{
			int k = cnt;
			for (int i = l + 1; i < r; i++)
			{
				num[k + i - l] = i;
				cnt++;
			}
			break;
		}
	}
	for (int i = 1; i < cnt; i++)
	{
		cout << num[i] << " " << num[i + 1] << endl;
	}*/
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}


//1 4 6




//int num[600010];
//int chu[600010];
//int cnt;
//void init(int n)
//{
//	for (int i = 0; i <= n + 3; i++)
//	{
//		num[i] = chu[i] = 0;
//	}
//	cnt = 0;
//}
//int gcd(int x, int y)
//{
//	return y == 0 ? x : gcd(y, x % y);
//}
//
//void solve()
//{
//	int n; cin >> n;
//	init(n);
//	for(int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		if (num[i + 1] % num[i] != 0)
//		{
//			int g = gcd(num[i + 1], num[i]);
//			chu[++cnt] = num[i]/g;
//		}
//	}
//	if (cnt == 0)
//	{
//		cout << 323 << endl;
//		return;
//	}
//	int pre = chu[1];
//	for (int i = 2; i <= cnt; i++)
//	{
//		int g = gcd(pre, chu[i]);
//		pre = pre / g * chu[i];
//	}
//	cout << pre << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while(t--)
//	solve();
//	return 0;
//}

/*
1
7
42 42 14 84 28 73080 255780
*/


//struct node 
//{
//	 int a; int b; 
//}
//e[6010];
//bool cho[6010]; 
//int cnt; 
//void solve() 
//{ 
//	int n; 
//	cin >> n; 
//	cnt = 0;
//	for (int i = 1; i <= n; i++)cin >> e[i].a >> e[i].b; 
//	for (int i = 0; i <= n + 5; i++)cho[i] = 0; 
//	for (int i = 1; i <= n; i++) 
//	{ 
//		int flag = 1; 
//		for (int j = 1; j <= n; j++) 
//		{ 
//			if (i == j)continue; 
//			if (e[j].a <= e[i].a && e[j].b >= e[i].b) 
//			{
//				flag = 0; break; 
//			} 
//	} 
//		if(flag == 1) 
//		{
//			cho[i] = 1; cnt++; 
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= n; i++) 
//	{ 
//		if (cho[i])cout << i << " "; 
//	}
//	cout << endl;
//} 
// signed main() 
//{ 
//	int t; cin >> t; 
//	while (t--)solve(); 
//	return 0; 
//}

//struct node
//{
//	int a; int b;
//}e[6010];
//bool cho[6010];
//int cnt;
//int ret[6010];
//
//void solve()
//{
//	int n; cin >> n;
//	vector<PII>r(2*n+5);
//	cnt = 0;
//	for (int i = 1; i <= n; i++)cin >> e[i].a >> e[i].b;
//	for (int i = 0; i <= n + 5; i++)cho[i] = 0;
//	for (int i = 1; i <= n; i++)r[i] = { 0,0 };
//	for (int i = 1; i <= n; i++)ret[i] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int a = e[i].a;
//		int b = e[i].b;
//		if (r[a].first < b)
//		{
//			r[a].first = b;
//			r[a].second = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (r[i].second != 0)
//		{
//			cnt++;
//			ret[cnt] = r[i].second;
//		}
//	}
//	sort(ret + 1, ret + 1 + cnt);
//	cout << cnt << endl;
//	for(int i=1;i<=cnt;i++)
//	{
//		cout << ret[i] << " ";
//	}
//	cout << endl;
//	
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




//bool cho[6010];
//bool ret[3010];
//int cnt;
//int out[6010];
//struct node
//{
//	int a; int b;
//	int id;
//}e[6010];
//
//void init(int n)
//{
//	for (int i = 0; i <= 2*n + 5; i++)
//	{
//		cho[i] = 0;
//	}
//	for (int i = 0; i <= n + 5; i++)
//	{
//		ret[i] = 0;
//		out[i] = 0;
//	}
//	cnt = 0;
//}
//
//bool cmp(node& a, node& b)
//{
//	int x = max(out[a.a], out[a.b]);
//	int y = max(out[b.a], out[b.b]);
//	return x > y;
//}
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	init(n);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> e[i].a >> e[i].b;
//		e[i].id = i;
//		out[e[i].a]++;
//		out[e[i].b]++;
//	}
//	sort(e + 1, e + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		int a = e[i].a;
//		int b = e[i].b;
//		if (cho[a] == false || cho[b] == false)
//		{
//			ret[e[i].id] = true;
//			cnt++;
//			cho[a] = cho[b] = true;
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		if (ret[i])
//		{
//			cout << i << " ";
//		}
//	}
//	cout << endl;
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







//int cnt[200010];
//vector<int> tu[200010];
//int r[200010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n + 5; i++)
//	{
//		cnt[i] = 0;
//		tu[i].clear();
//		r[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		if (s > n)
//		{
//			cout << -1 << endl;
//			return;
//		}
//		tu[s].push_back(i);
//		cnt[s]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (cnt[i] % i != 0)
//		{
//			cout << -1 << endl;
//			return;
//		}
//	}
//	int pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (tu[i].size() == 0)continue;
//		int t = 0;
//		while (t < tu[i].size())
//		{
//			pos++;
//			for (int j = 0; j < i; j++)
//			{
//				r[tu[i][t]] = pos;
//				t++;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << r[i] << " ";
//	}
//	cout << endl;
//}
//
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
6
1 2 2 3 3 3
*/