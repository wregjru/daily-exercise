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

int num[200010];
int n; int k; int x;

int get(int s)
{
	int ret = 0;
	for (int i = 2; i <= n; i++)
	{
		ret += max(0, num[i] - num[i - 1] - 2 * k + 1);
	}
	return ret;
}
//void print(int s)
//{
//	for (int i = 2; i <= n && num[i] <= x; i++)
//	{
//
//	}
//}

int main()
{
	int T; cin >> T;
	while (T--)
	{
		cin >> n >> k >> x;
		for (int i = 1; i <= n; i++)
		{
			cin >> num[i];
		}
		num[++n] = x;
		sort(num + 1, num + 1 + n);
		int l = 0; int r = x + 1;
		while (l < r)
		{
			int mid = (l + r+1) / 2;
			if (get(mid) >= k)l = mid;
			else r = mid - 1;
		}
		cout << l << endl;
		//print(l);
	}
}





//vector<pair<int, int>> tu[1510];
//int n; int m;
//int in[1510];
//queue<int> qu;
//int dist[1510];
//int main()
//{
//	for (int i = 1; i <= 1505; i++)
//	{
//		dist[i] = -0x3f3f3f3f;
//	}
//	dist[1] = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		tu[a].push_back({ b,c });
//		in[b]++;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (in[i] == 0)
//		{
//			qu.push(i);
//		}
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int a = tu[s][i].first;
//			int b = tu[s][i].second;
//			in[a]--;
//			if (in[a] == 0)qu.push(a);
//		}
//	}
//	qu.push(1);
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int a = tu[s][i].first;
//			int b = tu[s][i].second;
//			if (dist[s] +b> dist[a])
//			{
//				dist[a] = dist[s] + b;
//			}
//			in[a]--;
//			if (in[a] == 0)qu.push(a);
//		}
//	}
//	if (dist[n] == -0x3f3f3f3f)cout << -1 << endl;
//	else cout << dist[n] << endl;
//	return 0;
//}





//int n; int r; int q;
//struct node
//{
//	int scr;//分数
//	int val;//几号
//	int eff;//实力
//}peo[200010];
//node win[200010];
//node los[200010];
//
//bool cmp(node& a, node& b)
//{
//	if (a.scr == b.scr)
//	{
//		return a.val < b.val;
//	}
//	return a.scr > b.scr;
//}
//
//
//
//int main()
//{
//	cin >> n >> r >> q;
//	for (int i = 1; i <= n+n; i++)
//	{
//		cin >> peo[i].scr;
//		peo[i].val = i;
//	}
//	for (int i = 1; i <= n + n; i++)
//	{
//		cin >> peo[i].eff;
//	}
//	sort(peo + 1, peo + 1 + n + n, cmp);
//	for (int k = 1; k <= r; k++)
//	{
//		int c1 = 1; int c2 = 1; int pos = 1;
//		for (int i = 1; i <= 2 * n; i += 2)
//		{
//			if (peo[i].eff < peo[i + 1].eff)
//			{
//				peo[i + 1].scr++;
//				win[i / 2 + 1] = peo[i + 1];
//				los[i / 2 + 1] = peo[i];
//			}
//			else
//			{
//				peo[i].scr++;
//				win[i / 2 + 1] = peo[i];
//				los[i / 2 + 1] = peo[i + 1];
//			}
//		}
//		while (c1 <= n && c2 <= n)
//		{
//			if (win[c1].scr > los[c2].scr || (win[c1].scr == los[c2].scr && win[c1].val < los[c2].val))
//			{
//				peo[pos++] = win[c1++];
//			}
//			else
//			{
//				peo[pos++] = los[c2++];
//			}
//		}
//		while (c1 <= n)
//		{
//			peo[pos++] = win[c1++];
//		}
//		while (c2 <= n)
//		{
//			peo[pos++] = los[c2++];
//		}
//	}
//	cout << peo[q].val << endl;
//	return 0;
//}





//int n;
//ll num[200010];
//
//
//int main()
//{
//	cin >> n;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	
//	sort(num + 1, num + 1 + n);
//	n = unique(num + 1, num + 1 + n) - (num + 1);
//	if (n == 1)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	if (n == 2)
//	{
//		cout << num[1] << endl;
//		return 0;
//	}
//	ll ret = max(num[n - 2], num[n] % num[n - 1]);
//	cout << ret << endl;
//	return 0;
//}



//int n;
//int num[100010];
//int dp[100010];
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int s;
//		cin >> s;
//		num[i] = (s == 0 ? -1 : 1);
//		dp[i] = dp[i - 1] + num[i];
//	}
//	int ret = 0;
//	unordered_map<int, int> map;
//	map[0] = 0;//注意
//	for (int i = 1; i <= n; i++)
//	{
//		if (map.count(dp[i]))
//		{
//			ret = max(i - map[dp[i]], ret);
//		}
//		else
//			map[dp[i]] = i;
//	}
//	cout << ret << endl;
//	return 0;
//}



//int n;
//int v[110];//厚度
//int w[110];//宽度
//int dp[220];
//int main()
//{
//	int all = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i] >> w[i];
//		all += v[i];
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = all; j >= v[i]; j--)
//		{
//			
//			
//				dp[j] = min(dp[j], dp[j - v[i]] + w[i]);
//			
//		}
//	}
//	for (int i = all; i >= 0; i--)
//	{
//		if (dp[i] <= all - i)
//		{
//			cout << all - i << endl;
//			break;
//		}
//	}
//	return 0;
//}







//int a1; int b1;
//int a2; int b2;
//struct node
//{
//	int r1; int r2;//距离两点平方和
//}dao[100010];
//bool cmp(node& a, node& b)
//{
//	return a.r1 > b.r1;
//}
//
//int main()
//{
//	cin >> a1 >> b1 >> a2 >> b2;
//	int T; cin >> T;
//	for (int i = 1; i <= T; i++)
//	{
//		int x; int y;
//		cin >> x >> y;
//		dao[i].r1 = (x - a1) * (x - a1) + (y - b1) * (y - b1);
//		dao[i].r2 = (x - a2) * (x - a2) + (y - b2) * (y - b2);
//	}
//	sort(dao + 1, dao + T + 1,cmp);
//	int ret = dao[1].r1;
//	int R2 = 0;
//	for (int i = 2; i <= T; i++)
//	{
//		R2 = max(R2, dao[i-1].r2);
//		ret = min(ret, dao[i].r1 + R2);
//	}
//	R2 = max(R2, dao[T].r2);
//	ret = min(ret, R2);
//	cout << ret << endl;
//	return 0;
//}






//int num[10] = { 6,2,5,5,4,5,6,3,7,6 };
//int n;
//int ret;
//
//int gun(int s)
//{
//	int r = 0;
//	while (s > 9)
//	{
//		r += num[(s % 10)];
//		s /= 10;
//	}
//	r += num[s];
//	return r;
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 0; i <= 999; i++)
//	{
//		for (int j = 0; j <= 999; j++)
//		{
//			int k = i + j;
//			if ((gun(i) + gun(j) + gun(k)) == (n - 4))
//			{
//				ret++;
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}



//int num[10] = { 6,2,5,5,4,5,6,3,7,6 };
//int n;
//int a;int b;
//int an; int bn;//a+b,a位数b位数
//void dfs(int s)
//{
//	for (int i = 0; i <= 9; i++)
//	{
//		if()
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	n -= 4;
//	dfs(n);
//	return 0;
//}