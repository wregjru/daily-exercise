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
const int INF = 0x3f3f3f3f;


int val[2010][2010];
int dp[2010][2010];

int main()
{
	int n; int k; cin >> n >> k;
	for (int i = 0; i <= 2000; i++)
	{
		val[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			val[i][j] = (val[i - 1][j] + val[i - 1][j - 1]) % k;
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + (val[i][j] == 0 ? 1 : 0);
		}
		dp[i][i + 1] = dp[i][i];
	}
	while (n--)
	{
		int a; int b; cin >> a >> b;
		cout << dp[a][min(a, b)] << endl;
	}
	return 0;
}








//int d[510];//度
//bool scan[510];//标记是否有摄像头
//vector<int> s[510];//摄像头信息
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i<=n; i++)
//	{
//		int j = 0; cin >> j;
//		scan[j] = true;
//		int _size; cin >> _size;
//		while (_size--)
//		{
//			int a; cin >> a;
//			s[j].push_back(a);
//			d[a]++;
//		}
//	}
//	queue<int>qu;
//	for (int i = 0; i <= 500; i++)
//	{
//		if (d[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int e = qu.front(); qu.pop();
//		for (int i = 0; i < s[e].size(); i++)
//		{
//			d[s[e][i]]--;
//			if (scan[s[e][i]] && d[s[e][i]] == 0)
//				qu.push(i);
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i <= 500; i++)
//	{
//		if (scan[i] && d[i])ret++;
//	}
//	if (ret == 0)cout << "YES" << endl;
//	else cout << ret << endl;
//	return 0;
//}










//int in[110];//度
//vector<int> peo[110];
//queue<int> qu;
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int s;
//		while (cin >> s, s)
//		{
//			peo[i].push_back(s);
//			in[s]++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//		cout << s << " " ;
//		for (int j = 0; j < peo[s].size(); j++)
//		{
//			in[peo[s][j]]--;
//			if (!in[peo[s][j]])qu.push(peo[s][j]);
//		}
//	}
//	return 0;
//}

















//int h[100010];//每个点对应高度
//int n; int m;//点，路
//vector<pair<int, int>> tu[100010];
//bool gone[100010];//已经dfs的点
//int cnt; int pos; int ret;//1可以达到路数，点数，总长度
//int f[100010];
//bool used[100010];
//struct node//可以走到的点
//{
//	int a; int b; int c;//起点终点长度
//}cd[100010];
//void dfs(int s)
//{
//	cnt++;
//	gone[s] = true;
//	for (int i = 0; i < tu[s].size(); i++)
//	{
//		int le = tu[s][i].first;
//		int ri = tu[s][i].second;
//		pos++;
//		cd[pos].a = s; cd[pos].b = le; cd[pos].c = ri;
//		if (!gone[le])dfs(le);
//
//	}
//}
//
//bool cmp(node& qq, node& ww)
//{
//	if (h[qq.b] != h[ww.a])return h[qq.b] > h[ww.a];
//	return qq.c < ww.c;
//}
//
//int find(int ss)
//{
//	return ss == f[ss] ? ss : f[ss] = find(f[ss]);
//}
//
//void kk()
//{
//	for (int i = 1; i <= n; i++)f[i] = i;
//	sort(cd + 1, cd + pos + 1, cmp);
//	for (int i = 1; i <= pos; i++)
//	{
//		int a = cd[1].a; int b = cd[1].b; int c = cd[1].c;
//		int fa = find(a); int fb = find(b);
//		if (fa != fb)
//		{
//			ret += c;
//			f[fa] = fb;
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> h[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		if (h[a] >= h[b])tu[a].push_back({b,c});
//		if (h[a] <= h[b])tu[b].push_back({a,c});
//	}
//	dfs(1);
//	kk();
//	cout << cnt << " " << ret << endl;
//	return 0;
//}







//int p; int e;//地点，路
//struct node
//{
//	int a; int b; int c;
//}tu[10010];
//int f[320];
//
//bool cmp(node& qq, node& ww)
//{
//	return qq.c < ww.c;
//}
//int ma = 0;//最大路
//
//int find(int s)
//{
//	return s == f[s] ? s : f[s] = find(f[s]);
//}
//
//int kk()
//{
//	//int cnt = 0; int ret = 0;
//	for (int i = 1; i <= e; i++)
//	{
//		int a = tu[i].a; int b = tu[i].b; int c = tu[i].c;
//		int fa = find(a); int fb = find(b);
//		if (fa != fb)
//		{
//			f[fa] = fb;
//			ma = max(ma, c);
//
//
//		}
//	}
//	return ma;
//}
//
//
//int main()
//{
//	cin >> p >> e;
//	for (int i = 1; i <= e; i++)
//	{
//		cin >> tu[i].a >> tu[i].b >> tu[i].c;
//	}
//	for (int i = 1; i <= p; i++)
//	{
//		f[i] = i;
//	}
//	sort(tu + 1, tu + e + 1, cmp);
//	int r = kk();
//	cout << p - 1 << " " << r << endl;
//	return 0;
//}







//int arr[1010];
//int pri;//价格
//int n;//商品数
//int f[250010];//并查集
//int ret = 0; int cnt = 0; int pos = 0;
//struct node
//{
//	int a; int b; int c;
//}tu[250010];
//
//bool cmp(node& qq, node& ww)
//{
//	return qq.c < ww.c;
//}
//
//
//int find(int s)
//{
//	return s == f[s] ? s : f[s] = find(f[s]);
//}
//
//int kk()
//{
//	sort(tu + 1,tu + pos + 1, cmp);
//	
//	for(int i = 1; i <= pos; i++)
//	{
//		int a = tu[i].a; int b = tu[i].b; int c = tu[i].c;
//		int fa = find(a); int fb = find(b);
//		if (fa != fb)
//		{
//			cnt++;
//			ret += c;
//			f[fa] = fb;
//		}
//	}
//	return ret;
//}
//
//
//
//
//int main()
//{
//	cin >> pri >> n;
//	
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int s;
//			cin >> s;
//			if (i >= j || s == 0 || s >= pri)continue;
//			pos++;
//			tu[pos].a = i; tu[pos].b = j;
//			tu[pos].c = s;
//		}
//	}
//	int r = kk();
//	cout << r +  (n - cnt) * pri << endl;
//	return 0;
//}








//int f[5010]; 
//int p; int e;//节点，边
//struct node
//{
//	int a; int b; int c;
//}point[200010];
//
//
//bool cmp(node& rr, node& tt)
//{
//	return rr.c < tt.c;
//}
//int find(int r)
//{
//	return f[r] == r ? r : f[r] = find(f[r]);
//}
//
//int kk()
//{
//	sort(point + 1, point + 1 + e, cmp);
//	int cnt = 0; int ret = 0;
//	for (int i = 1; i <= e; i++)
//	{
//		int x = point[i].a;
//		int y = point[i].b;
//		int z = point[i].c;
//		int fa = find(x); int fb = find(y);
//		if (fa != fb)
//		{
//			cnt++;
//			f[fa] = fb;
//			ret += z;
//		}
//	}
//	return cnt == p-1 ? ret : INF;
//}
//
//
//
//
//int main()
//{
//	cin >> p >> e;
//	for (int i = 1; i <= e; i++)
//	{
//		int x; int y; int z; cin >> x >> y >> z;
//		point[i].a = x; point[i].b = y; point[i].c = z;
//	}
//	for (int i = 1; i <= p; i++)
//	{
//		f[i] = i;
//	}
//	int ret = kk();
//	if (ret == INF)cout << "orz" << endl;
//	else cout << ret << endl;
//
//	return 0;
//}







//int p; int e;//p个点e条边
//vector<pair<int, int>> tu[5010];
//int dest[5010]; bool used[5010];
//int tree()
//{
//	int ret = 0;
//	memset(dest, 0x3f, sizeof(dest));
//	dest[1] = 0; 
//	for (int k = 1; k <= p; k++)
//	{
//		int t = 0;
//		for (int i = 1; i <= p; i++)
//		{
//			if (!used[i]&&dest[t] > dest[i])t = i;
//		}
//		if (dest[t] == INF)return INF;
//		used[t] = true;
//		ret += dest[t];
//		for (int i = 0; i < tu[t].size(); i++)//[0到size)
//		{
//			int a = tu[t][i].first;
//			int b = tu[t][i].second;
//			dest[a] = min(dest[a], b);
//		}
//	}
//	
//	return ret;
//}
//
//int main()
//{
//	cin >> p >> e;
//	for (int i = 1; i <= e; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		tu[a].push_back({ b,c });
//		tu[b].push_back({ a,c });//双向
//	}
//	int r = tree();
//	if (r == INF)cout << "orz" << endl;
//	else cout << r << endl;
//	return 0;
//}






//int arr[260];
//int dp[260][260];
//
//
//int main()
//{
//	int _size; cin >> _size;
//	int ret = 0;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> arr[i];
//		dp[i][i] = arr[i];
//		ret = max(ret,arr[i]);
//	}
//	for (int len = 2; len <= _size; len++)
//	{
//		for (int i = 1; i + len - 1 <= _size; i++)
//		{
//			int j = i + len - 1;
//			for (int k = i; k < j; k++)
//			{
//				if (dp[i][k]&&dp[i][k] == dp[k + 1][j])
//				{
//					dp[i][j] = max(dp[i][k] + 1, dp[i][j]);
//					
//				}
//				ret = max(ret, dp[i][j]);
//			}
//		}
//	}
//
//	cout << ret << endl;
//	return 0;
//}