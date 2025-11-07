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
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1

int raw[100010];
int num[100010];
int ret[100010];
int pos;
signed main()
{
	int T; cin >> T;
	while (T--)
	{
		memset(raw, 0, sizeof(raw));
		memset(num, 0, sizeof(num));
		memset(ret, 0, sizeof(ret));
		int n; cin >> n;
		unordered_map<int, int> ma;
		for (int i = 1; i <= n; i++)
		{
			cin >> raw[i];
		}
		for (int i = 1; i <= n; i++)
		{
			num[i] = raw[i] - raw[i - 1];
		}
		pos = 0;
		for (int i = 1; i <= n; i++)
		{
			if (num[i] == i)
			{
				ret[i] = (++pos);
				ma[pos]++;
			}
			else
			{
				int r = i - num[i];//与前面r个元素相同
				int j = 0;
				for (j = 1; j <= n; j++)
				{
					if (ma[j] == r)
					{
						break;
					}
				}
				ret[i] = j;
				ma[j]++;
			}
		}
		for (int i = 1; i <= n; i++)
		{
			cout << ret[i] << " ";
		}
		cout << endl;
	}
	return 0;
}





//int num[200010];
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> num[i];
//		}
//		int ret = 0;
//		int ma = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			ma = max(ma, num[i]);
//			if (i % 2 == 0)
//			{
//				num[i] = ma;
//			}
//		}
//		if (num[1] >= num[2])ret += num[1] - num[2] + 1;
//		for (int i = 3; i <= n; i++)
//		{
//			if (i % 2 == 1)
//			{
//				if (num[i] >= num[i - 1])
//				{
//					ret += num[i] - num[i - 1] + 1;
//				}
//			}
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}







//string mac;
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; int m;//机器数，查询数
//		cin >> n >> m;
//		cin >> mac;
//		int flag = 0;
//		int c = 0;
//		for (int i = 0; i < mac.size(); i++)
//		{
//			
//			if (mac[i] == 'A')//如果全为A
//			{
//				c++;
//			}
//			if (c == mac.size())flag = 1;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			int b;
//			cin >> b;
//			if (flag == 1)
//			{
//				cout << b << endl;
//				continue;
//			}
//			int ret = 0;
//			int pos = 0;
//			while (b)
//			{
//				if (mac[pos] == 'A')
//				{
//					b -= 1;
//				}
//				else
//				{
//					b /= 2;
//				}
//				ret++;
//				pos++;
//				if (pos == n)
//				{
//					pos %= n;
//				}
//			}
//			cout << ret << endl;
//		}
//	}
//	return 0;
//}







//int n; int m; int S; int t;
//int f[20010];
//struct node
//{
//	int a; int b; int c;
//}ro[20010];
//bool cmp(node& a, node& b)
//{
//	return a.c < b.c;
//}
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	int fa = _find(a); int fb = _find(b);
//	f[fa] = fb;
//}
//signed main()
//{
//	cin >> n >> m >> S >> t;
//	for (int i = 1; i <= m; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> ro[i].a >> ro[i].b >> ro[i].c;
//	}
//	sort(ro + 1, ro + 1 + m, cmp);
//	int ret = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		uni(ro[i].a, ro[i].b);
//		ret = ro[i].c;
//		if (_find(S) == _find(t))
//		{
//			break;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}








//struct node
//{
//	int s; int b;
//}fo[15];
//int n;
//int s = 1; int b;
//int ret = 0x3f3f3f3f;
//int cho;
//void dfs(int a)
//{
//	if (a == n + 1)return;
//	s *= fo[a].s; b += fo[a].b;
//	cho++;
//	if (cho >= 1)ret = min(ret, abs(s - b));
//	dfs(a + 1);
//	cho--;
//	s /= fo[a].s; b -= fo[a].b;
//	if (cho >= 1)ret = min(ret, abs(s - b));
//	dfs(a + 1);
//}
//
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> fo[i].s >> fo[i].b;
//	}
//	dfs(1);
//	cout << ret << endl;
//	return 0;
//}






//struct node
//{
//	int a; int t; int p;//到时间吃时间资历
//	bool operator<(const node& x) const
//	{
//		return p > x.p;
//	}
//}cow[100010];
//int n;
//
//bool cmp(node& a, node& b)
//{
//	return a.a < b.a;
//}
//priority_queue<node> heap;
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> cow[i].a >> cow[i].t;
//		cow[i].p = i;
//	}
//	sort(cow + 1, cow + 1 + n, cmp);
//	int end = 0;
//	int pos = 0;
//	int wa = 0;
//	int i = 1;
//	while (!heap.empty()||i<=n)
//	{
//		while (i <= n && cow[i].a <= end)heap.push(cow[i++]);
//		if (heap.empty())heap.push(cow[i++]);
//		node s = heap.top(); heap.pop();
//		if (s.a >= end)end = s.a + s.t;
//		else 
//		{
//			wa = max(wa, end - s.a);
//			end += s.t;
//		}
//	}
//	cout << wa << endl;
//	return 0;
//}







//int main()
//{
//	char ch; ch = getchar();
//	int pos = 0;
//	char arr[10];
//	while (ch != ' ' && ch != '\n')
//	{
//		arr[pos++] = ch;
//		ch = getchar();
//	}
//	return 0;
//}






//int ti[100010];
//
//int n; int m; int c;
//
//int check(int s)
//{
//	int ret = 0;
//	int fast = 1; int slow = 1;
//	while (fast <= n)
//	{
//		while (fast<=n&&ti[fast] - ti[slow] <= s && fast - slow+1 <= c)
//		{
//			fast++;
//		}
//		slow = fast;
//		ret++;
//	}
//	return ret;
//	
//	//if (s == 2)
//	//{
//	//	int sss = 1;
//	//}
//	//int ret = 0;
//	//int inc = 1;//现在在车上的牛数
//	//for (int i = 1; i < n; i++)
//	//{
//	//	if (inc == 0)
//	//	{
//	//		inc++; continue;
//	//	}
//	//	if (ti[i + 1] - ti[i] > s)
//	//	{
//	//		ret++;
//	//		inc = 0;
//	//	}
//	//	else
//	//	{
//	//		inc++;
//	//		if (inc == c)
//	//		{
//	//			ret++;
//	//			inc = 0;
//	//		}
//	//	}
//	//}
//	//if (inc > 0)ret++;
//	//return ret;
//}
//
//
//signed main()
//{
//	cin >> n >> m >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ti[i];
//	}
//	sort(ti + 1, ti + 1 + n);
//	int l = 0; int r = ti[n] - ti[1];
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) <= m)r = mid; 
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	return 0;
//}






//struct node
//{
//	int b;
//	int c;//血量，得到剑
//}ms[200010];
//int saw[200010];
//int n; int m;
//
//bool cmp(node& a, node& b)
//{
//	return a.b < b.b;
//}
//
//signed main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> saw[i];
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			cin >> ms[i].b;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			cin >> ms[i].c;
//		}
//		sort(saw + 1, saw + 1 + n);
//		sort(ms + 1, ms + 1 + m, cmp);
//		int ma = 0;
//		int gs = saw[n];
//		for(int i = 1; i <= m; i++)
//		{
//			if (gs >= ms[i].b)
//				ma = max(ma, ms[i].c);
//		}
//		if (ma > gs)
//		{
//
//		}
//	}
//	return 0;
//}









//int num[100010];
//int n;
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		cin >> n;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> num[i];
//		}
//		int a = 0; int b = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			int flag = 0;
//			for (int j = 1; j < i; j++)
//			{
//				if ((num[i] % num[j]) % 2 == 0)
//				{
//					a = i; b = j;
//					flag = 1;
//					break;
//					
//				}
//			}
//			if (flag == 1)break;
//		}
//		if (a == 0 || b == 0)
//		{
//			cout << -1 << endl;
//		}
//		else cout << num[b] << " " << num[a] << endl;
//	}
//	
//	return 0;
//}