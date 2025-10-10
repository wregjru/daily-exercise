#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include <cstring>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;

int tree[3200010][2];

int idx;
int num[3200010];

void insert(int a)
{
	int cur = 0;
	for (int i = 31; i >= 0; i--)
	{
		int path = ((a >> i) & 1);
		if (tree[cur][path] == 0)tree[cur][path] = ++idx;
		cur = tree[cur][path];
	}
}
int find(int a)
{
	int ret = 0;
	int cur = 0;
	for (int i = 31; i >= 0; i--)
	{
		int path = ((a >> i) & 1);
		int np = path ^ 1;
		if (tree[cur][np] != 0)
		{
			ret = ret | (1 << i);
			cur = tree[cur][np];
		}
		else
		{
			cur = tree[cur][path];
		}
	}
	return ret;
}

int main()
{
	int _size = 0; cin >> _size;
	for (int i = 0; i < _size; i++)
	{
		cin >> num[i];
		insert (num[i]);
	}
	int m = 0;
	for (int i = 0; i < _size; i++)
	{
		m = max(m, find(num[i]));
	}
	cout << m << endl;
}













//int tree[500010][26];
//int e[500010];
//int idx;
//
//void insert(string& a)
//{
//	int cur = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		int r = a[i] - 'a';
//		if (tree[cur][r] == 0)tree[cur][r] = ++idx;
//		cur = tree[cur][r];
//	}
//	e[cur]++;
//}
//int find(string& a)
//{
//	int cur = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		int path = a[i] - 'a';
//		if (tree[cur][path] == 0)return 0;
//		cur = tree[cur][path];
//	}
//	if (e[cur] > 0)
//	{
//		e[cur] = -1;
//		return 1;
//	}
//	return e[cur];
//}
//
//int main()
//{
//	int aaa; cin >> aaa;
//	while (aaa--)
//	{
//		string a; cin >> a;
//		insert(a);
//	}
//	int bbb = 0; cin >> bbb;
//	while (bbb--)
//	{
//		string a; cin >> a;
//		int ret = find(a);
//		if (ret == 0)cout << "WRONG" << endl;
//		else if (ret > 0)cout << "OK" << endl;
//		else cout << "REPEAT" << endl;
//
//	}
//	return 0;
//}










//int n; int q;
//int tree[3000010][62];
//int p[3000010];
//int idx;
//
//int getcha(char ch)
//{
//    if (ch >= 'a' && ch <= 'z')return ch - 'a';
//    if (ch >= 'A' && ch <= 'Z')return ch - 'A' + 26;
//    if (ch >= '0' && ch <= '9')return ch - '0' + 52;
//}
//void insert(string& s) {
//    int cur = 0;
//    p[cur]++;
//    for (int i = 0; i < s.length(); i++) {
//        int path = getcha(s[i]);
//        if (tree[cur][path] == 0) tree[cur][path] = ++idx;
//        cur = tree[cur][path];
//        p[cur]++;
//    }
//}
//int _find(string& s) {
//    int cur = 0;
//    for (int i = 0; i < s.length(); i++) {
//        int path = getcha(s[i]);
//        if (tree[cur][path] == 0) return 0;
//        cur = tree[cur][path];
//
//    }
//    return p[cur];
//}
//
//int main()
//{
//    int _size;
//    cin >> _size;
//    while (_size--)
//    {
//        for (int i = 0; i <= idx; i++)
//        {
//            for (int j = 0; j < 62; j++)
//            {
//                tree[i][j] = 0;
//            }
//        }
//
//        for (int i = 0; i <= idx; i++) p[i] = 0;
//
//        idx = 0;
//        int qqw = 0; int qqe = 0; cin >> qqw >> qqe;
//        while (qqw--) {
//            string a; cin >> a;
//            insert(a);
//        }
//        while (qqe--) {
//            string b; cin >> b;
//            cout << _find(b) << endl;
//        }
//    }
//    return 0;
//}





//ull dp[1000010];
//ull pm[1000010];
//int p = 131;
//
//ull has(int l, int r)
//{
//	return dp[r] - dp[l-1] * pm[r - l + 1];//注意pm
//}
//
//int main()
//{
//	string a; cin >> a;
//	string s; s = " " + a;
//	pm[0] = 1;
//	for (int i = 1; i <= a.size(); i++)
//	{
//		pm[i] = pm[i - 1] * p;
//		dp[i] = dp[i - 1] * p + s[i];
//	}
//	int size = 0; cin >> size;
//	while (size--)
//	{
//		int l1; int r1; int l2; int r2;
//		cin >> l1 >> r1 >> l2 >> r2;
//		ull a = has(l1, r1); ull b = has(l2, r2);
//		if (a == b)cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}







//int p = 131; 
//ull r[10010];
//
//ull has(string& a)
//{
//	ull ret = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		ret = ret*p+a[i];
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int _size; cin >> _size;
//	for(int i=1;i<=_size;i++)
//	{
//		string a; cin >> a;
//		ull h = has(a);
//		r[i] = h;
//	}
//	sort(r + 1, r + _size + 1);
//	int  re = 1;
//	for (int i = 2; i <= _size; i++)
//	{
//		if (r[i] != r[i - 1])re++;
//	}
//	cout << re << endl;
//	return 0;
//}










//int f[300100]; int d[300100]; int cnt[300100];
//
//int find(int s)
//{
//	if (f[s] == s)return s;
//	int i = find(f[s]);
//	d[s] += d[f[s]];
//	return f[s] = i;
//}
//void uni(int a, int b)
//{
//	int fa = find(a);
//	int fb = find(b);
//	if (fa == fb)return;
//	f[fa] = fb;
//	d[fa] += cnt[fb];
//	cnt[fb] += cnt[fa];
//}
//int calc(int a, int b)
//{
//	int fa = find(a);
//	int fb = find(b);
//	if (fa != fb)return -1;
//	return abs(d[a] - d[b]) - 1;
//}
//
//
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 0; i <= _size; i++)
//	{
//		f[i] = i;
//		cnt[i] = 1;
//	}
//	while (_size--)
//	{
//		char ch; int a; int b;
//		cin >> ch >> a >> b;
//		if (ch == 'M')
//		{
//			uni(a, b);//将a合并至b
//		}
//		else
//		{
//			cout << calc(a, b) << endl;
//		}
//	}
//	return 0;
//}
//












//int f[200000];
//int d[200000];
//
//int _find(int s)
//{
//	if (f[s] == s)return s;
//	int t= _find(f[s]);
//	d[s] += d[f[t]];
//	return f[s] = t;
//}
//void uni(int x, int y, int w)
//{
//	int fx = _find(x); int fy = _find(y);
//	if (fx == fy)return;
//	f[fx] = fy;
//	d[fx] = d[y] + w - d[x];//}
//
//
//
//int main()
//{
//	int n=0; int _size=0;
//	cin >> n >> _size;
//	for (int i = 1; i <= 3 * n; i++)f[i] = i;
//	int ret = 0;
//	while (_size--)
//	{
//		int e = 0; int a = 0; int b = 0;
//		cin >> e >> a >> b;
//		if (a > n || b > n)
//		{
//			ret++; continue;
//		}
//		if (e == 1)
//		{
//			if (_find(a) == _find(b) && (((d[a] - d[b]) % 3 + 3) % 3) != 0)
//			{
//				ret++; continue;
//			}
//			uni(a, b, 0);
//		}
//		else
//		{
//			if (_find(a) == _find(b) && (((d[b] - d[a]) % 3 + 3) % 3) != 1)
//			{
//				ret++; continue;
//			}
//			uni(a, b, 2);
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}








//int f[200000];
//
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	f[_find(f[a])] = _find(f[b]);
//}
//
//int main()
//{
//	int n; int k;
//	cin >> n >> k;//n个动物
//	for (int i = 1; i <= 3 * n; i++)f[i] = i;
//	int ret = 0;
//	while (k--)
//	{
//		int num; int x; int y;
//		cin >> num >> x >> y;
//		if (x > n || y > n)
//		{
//			ret++;
//			continue;
//		}
//		if (num == 1)
//		{
//			if (_find(x) == _find(y + n) || _find(x) == _find(y + 2*n))
//			{
//				ret++; continue;
//			}
//			uni(x, y); uni(x + n, y + n); uni(x + 2 * n, y + 2 * n);
//		}
//		else
//		{
//			if (_find(x) == _find(y) || _find(x) == _find(y + n))
//			{
//				ret++; continue;
//			}
//			uni(x, y + 2 * n); uni(x + n, y); uni(x + 2 * n, y + n);
//		}
//	}
//	cout << ret << endl;
//}