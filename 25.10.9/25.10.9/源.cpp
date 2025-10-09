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



int n; int m;
int f[10010];
int _find(int s)
{
	return f[s] == s ? s : f[s] = _find(f[s]);
}
void uni(int x, int y)
{
	f[_find(y)] = _find(f[x]);
}


int main()
{
	cin >> n >> m;
	for (int i = 0; i <= 2 * n; i++)
	{
		f[i] = i;
	}
	while (m--)
	{
		char ch; int a; int b;
		cin >> ch >> a >> b;
		if (ch == 'E')
		{
			uni(a, b + n);
			uni(b, a + n);
		}
		else
		{
			uni(a, b);
		}
	}
	int ret = 0;
	for (int i = 1; i <= n; i++)
	{
		if (_find(i) == i)ret++;
	}
	cout << ret << endl;
	return 0;
}







//ll a; ll b;
//ll x; ll y;
//ll ex(ll a, ll b, ll&x, ll&y)
//{
//	if (b == 0)
//	{
//		x = 1; y = 0; return a;
//	}
//	ll x1; ll y1;
//	ll d = ex(b, a % b, x1, y1);
//	x = y1; y = x1 - a / b * y1;
//	return d;
//
//}
//
//
//
//int main()
//{
//	int _size = 0; cin >> _size;
//	while (_size--)
//	{
//		cin >> a >> b;
//		ll d=ex(a, b, x, y);
//		if (d != 1)cout << -1 << endl;
//		else
//		{
//			x = (x % b + b) % b;
//			cout << x << endl;
//		}
//	}
//	return 0;
//}











//ll a[3000010];
//
//int main()
//{
//	int _size = 0; int p = 0; cin >> _size >> p;
//	a[1] = 1;
//	for (int i = 2; i <= _size; i++)
//	{
//		a[i] = p - p / i * a[p % i] % p;
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		printf("%lld\n", a[i]);
//	}
//	return 0;
//}










//unordered_map<ll, int>li;
//int f[200010];
//ll a[100010];
//ll b[100010];
//ll e[100010];-
//ll lisan[200010];
//int pos;

//int _find(int x)
//{
//	return f[x] == x ? x : f[x] = _find(f[x]);
//}
//
//void uni(int x, int y)
//{
//	f[_find(x)] = _find(y);
//}
//
//int main()
//{
//	int _size; cin >> _size;
//	while (_size--)
//	{
//		
//		li.clear();
//		pos = 0;
//		int all; cin >> all;
//		for (int i = 1; i <= 2*all; i++)f[i] = i;
//		while (all--)
//		{
//			ll aa; ll bb; int ee; cin >> a[pos] >> b[pos] >> e[pos]; pos++;
//		}
//		int cnt = 0;
//		for (int i = 0; i < pos; i++)
//		{
//			lisan[cnt++] = a[i]; lisan[cnt++] = b[i];
//		}
//		sort(lisan, lisan + cnt);
//		int u = unique(lisan, lisan + cnt) - lisan;
//		for (int i = 0; i < u; i++)
//		{
//			li[lisan[i]] = i + 1;
//		}
//		//// 1. 收集所有需要离散化的值
//		//int cnt = 0;
//		//for (int i = 0; i < pos; i++)
//		//{
//		//	lisan[cnt++] = a[i];
//		//	lisan[cnt++] = b[i];
//		//}
//
//		//// 2. 排序
//		//sort(lisan, lisan + cnt);
//
//		//// 3. 去重（真正移除重复元素）
//		//int unique_cnt = unique(lisan, lisan + cnt) - lisan;
//
//		//// 4. 建立映射
//		//for (int i = 0; i < unique_cnt; i++)
//		//{
//		//	li[lisan[i]] = i + 1;  // 映射到1,2,3...
//		//}
//		for (int i = 0; i <= pos; i++)
//		{
//			if (e[i] == 1)
//			{
//				uni(li[a[i]], li[b[i]]);
//			}
//		}
//		int flag = 1;
//		for (int i = 0; i < pos; i++)
//		{
//			if (e[i] == 0)
//			{
//				if (_find(li[a[i]]) == _find(li[b[i]]))
//					flag = -1;
//			}
//		}
//		if (flag == 1)cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}







//char tu[110][110];
//int f[10100];
//int n; int m;
//int dy[4] = { 1,1,0,-1 };
//int dx[4] = { 0,1,1,1 };
//int _find(int s)
//{
//	return f[s] == s ? s : f[s]=_find(f[s]);
//}
//void _union(int a, int b)
//{
//	int fa = _find(a);
//	int fb = _find(b);
//	if (fa != fb) {
//		f[fb] = fa;
//	}
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 1; i <= n * m; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (tu[i][j] == 'W')
//			{
//				for (int k = 0; k < 4; k++)
//				{
//					int x = i + dx[k]; int y = j + dy[k];
//					if (x < 0 || x >= n || y < 0 || y >= m)continue;
//					if(tu[x][y]=='W')
//					_union(i * m + j, x * m + y);
//				}
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i < n * m; i++)
//	{
//		int x = i / m, y = i % m;
//		if (tu[x][y] == 'W' && f[i] == i) ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}






//int peo[5010];
//int _find(int s)
//{
//	if (peo[s] == s)return s;
//	return peo[s] = _find(peo[s]);
//}
//
//
//int main()
//{
//	int n = 0; int m = 0; int p = 0;
//	cin >> n >> m >> p;
//	for (int i = 1; i <= n; i++)
//	{
//		peo[i] = i;
//	}
//	while (m--)
//	{
//		int a; int b;
//		cin >> a >> b;
//		peo[_find(b)] = _find(a);//根节点绑定
//	}
//	while (p--)
//	{
//		int a = 0; int b = 0;
//		cin >> a >> b;
//		int fa = _find(a); int fb = _find(b);
//		if (fa == fb)cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	return 0;
//}









//int fa[1000100];
//int _size;
//
//
//int _find(int s)
//{
//	if (fa[s] == s)return s;
//	return fa[s] = _find(fa[s]);
//}
//
//
//int main()
//{
//	int p = 0;
//	cin >> _size >> p;
//	for (int i = 1; i <= _size; i++)fa[i] = i;
//	while (p--)
//	{
//		int z; cin >> z;
//		int x; int y;
//		cin >> x >> y;
//		if (z == 1)
//		{
//			int fx = _find(x);
//			int fy = _find(y);
//			fa[fx] = fy;
//		}
//		else
//		{
//			int fx = _find(x);
//			int fy = _find(y);
//			if (fx == fy)cout << "Y" << endl;
//			else cout << "N" << endl;
//		}
//	}
//	return 0;
//}




//int a[1000010];
//deque<int> q;
//int main()
//{
//	int _size = 0; int k = 0;
//	cin >> _size>>k;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < _size; i++)
//	{
//		while (!q.empty() && a[q.back()] >= a[i])q.pop_back();
//		q.push_back(i);
//		if (i - q.front() + 1 > k)q.pop_front();
//		if (i >= k-1)cout << a[q.front()] << endl;
//	}
//	return 0;
//}



//int a[1000100];
//int l[1000100];
//int _size; int n;
//int main()
//{
//	deque<int> qu;
//	cin >> _size >> n;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 0; i < _size; i++)
//	{
//		while (!qu.empty() && a[qu.back()] >= a[i])qu.pop_back();
//		qu.push_back(i);
//		if (qu.back() - qu.front() + 1 > n)qu.pop_front();
//		if(i>=n-1)cout << a[qu.front()] << " ";
//	}
//	cout << endl;
//	qu.clear();
//	for (int i = 0; i < _size; i++)
//	{
//		while (!qu.empty() && a[qu.back()] <= a[i])qu.pop_back();
//		qu.push_back(i);
//		if (qu.back() - qu.front() + 1 > n)qu.pop_front();
//		if (i >= n - 1)cout << a[qu.front()] << " ";
//	}
//	return 0;
//}