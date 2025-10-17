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
const int INF = 2147483647;



ll mod = 1000000007;
ll d[60];

int main()
{
	ll ret = 1;
	int T; cin >> T;
	for(int i=1;i<=T;i++)
	{
		int a;  cin >> a;
		d[i] = a;
	}
	sort(d + 1, d + T + 1);
	for (int i = 0; i < T; i++)
	{
		d[i + 1] -= i;
		ret = ret * d[i + 1] % mod;
	}
	cout << ret << endl;
	return 0;
}








//ll n; ll m; ll p;
//ll d[100010];//阶乘
//ll g[100010];//逆元
//
//ll qow(ll a, ll b, ll c)
//{
//	ll ret=1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		b = b >> 1;
//		a = a * a % c;
//	}
//	return ret;
//}
//
//void init()
//{
//	d[1] = 1; d[0] = 1;
//	for (int i = 2; i <= p - 1; i++)
//	{
//		d[i] = d[i - 1] * i % p;
//	}
//	g[p - 1] = qow(d[p - 1], p - 2, p);
//	for (int i = p - 2; i >= 0; i--)
//	{
//		g[i] = (i + 1) * g[i + 1] % p;
//	}
//}
//ll c(ll n, ll m, ll p)
//{
//	if (n < m)return 0;
//	return d[n] * g[m] % p * g[n - m] % p;
//}
//ll lucus(ll n, ll m, ll p)
//{
//	if (m == 0)return 1;
//	return(lucus(n / p, m / p, p) * c(n % p, m % p, p) % p);
//}
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		cin >> n >> m >> p;
//		init();
//		cout << lucus(n + m, m,p) << endl;
//	}
//	return 0;
//}








//struct node
//{
//	int u; int v; int w;
//}tu[6010];
//int pos;
//int dist[6010];
//int a; int b;//点边
//
//bool bf()
//{
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	bool flag;
//	for (int i = 1; i <= a; i++)
//	{
//		flag = false;
//		for (int j = 1; j <= pos; j++)
//		{
//			int q = tu[j].u;
//			int w = tu[j].v;
//			int e = tu[j].w;
//			if (dist[q] == 0x3f3f3f3f)continue;
//			if (dist[q] + e < dist[w])
//			{
//				dist[w] = dist[q] + e;
//				flag = true;
//			}
//		
//		}
//		if (flag == false)return flag;
//	}
//	return flag;
//}
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		pos = 0;
//		cin >> a >> b;
//		for (int i = 1; i <= b; i++)
//		{
//			int u; int v; int w; cin >> u >> v >> w;
//			pos++;
//			tu[pos].u = u; tu[pos].v = v; tu[pos].w = w;
//			if (w >= 0)
//			{
//				pos++;
//				tu[pos].v = u; tu[pos].u = v; tu[pos].w = w;
//			}
//		}
//		bool f=bf();
//		if (f == true)cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}












//vector<pair<int, int>> tu[10010];//结束点，长度
//int n; int m; int s;//点数边数出发点编号
//int dist[10010];
//bool inq[10010];
//
//void spfa()
//{
//	queue<int>qu;
//	for (int i = 1; i <= n; i++)dist[i] = 0x3f3f3f3f;
//	dist[s] = 0;
//	qu.push(s);
//	inq[s] = true;
//	while (!qu.empty())
//	{
//		int a = qu.front();
//		qu.pop();
//		inq[a] = false;
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int b = tu[a][i].first;
//			int c = tu[a][i].second;
//			if (dist[a] + c < dist[b])
//			{
//				dist[b] = dist[a] + c;
//				if (!inq[b])
//				{
//					qu.push(b);
//					inq[b] = true;
//				}
//			}
//		}
//	}
//
//}
//
//
//int main()
//{
//	cin >> n >> m >> s;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		tu[a].push_back({ b,c });
//	}
//	spfa();
//	for (int i = 1; i <= n; i++)cout << dist[i] << " ";
//	return 0;
//}







//vector<pair<int, int>> tu[10010];//结束点，长度
//int n; int m; int s;//点数边数出发点编号
//int dist[10010];
//
//void bf()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = INF;
//	}
//	dist[s] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			for (int k = 0; k < tu[j].size(); k++)
//			{
//				int a = tu[j][k].first;
//				int b = tu[j][k].second;
//				if (dist[j] + b < dist[a])dist[a] = dist[j] + b;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n >> m >> s;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		tu[a].push_back({ b,c });
//	}
//	bf();
//	for (int i = 1; i <= n; i++)cout << dist[i] << " ";
//	return 0;
//}








//vector<pair<int, int>> net[100100];//目的地，长度
//bool gone[100100];//确定的点
//ll dist[100100];
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;//距离，出发点
//int n; int m; int s;
//
//void dig()
//{
//	memset(dist, 0x3f, sizeof(dist));
//	dist[s] = 0;
//	heap.push({ 0,s });
//	while (!heap.empty())
//	{
//		int a = heap.top().first;
//		int b = heap.top().second;
//		heap.pop();
//		if (gone[b])continue;
//		gone[b] = true;
//		for (int i = 0; i < net[b].size(); i++)
//		{
//			int x = net[b][i].first;
//			int y = net[b][i].second;
//			if (dist[b] + y < dist[x]) 
//			{ 
//				dist[x] = dist[b] + y; 
//				heap.push({ dist[x],x });
//			}
//		}
//
//	}
//	
//}
//
//int main()
//{
//	
//	cin >> n >> m >> s;//点数边数出发点
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		net[a].push_back({ b,c });
//
//	}
//	dig();
//	for (int i = 1; i <= n; i++)
//	{
//		cout << dist[i] << " ";
//	}
//
//	return 0;
//}







//int n;
//vector<int>net[10010];
//int len[10010];//时间
//int in[10010];//度
//int dp[10010];//本节点需要累计时间
//int ret;
//int main()
//{
//	cin >> n;
//	for(int i=1;i<=n;i++)
//	{
//		int b; cin >> b;
//		int t = 0; cin >> t;
//		len[b] = t;
//		int a;
//		while (cin >> a, a)
//		{
//			net[a].push_back(b);
//			in[b]++;
//		}
//	}
//	queue<int> qu;
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		dp[a] += len[a];
//		ret = max(ret, dp[a]);
//		for (int i = 0; i < net[a].size(); i++)
//		{
//			in[net[a][i]]--;
//			dp[net[a][i]] = max(dp[net[a][i]], dp[a]);
//			if (in[net[a][i]] == 0)qu.push(net[a][i]);
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}











//int in[5010]; int out[5010];//入度，出度
//int n; int e;//生物数，边数Z
//vector<int> web[5010];
//int dp[5010];
//int mod = 80112002;
//
//int main()
//{
//	cin >> n >> e;
//	while (e--)
//	{
//		int a; int b; cin >> a >> b;
//		web[a].push_back(b);
//		in[b]++; out[a]++;
//	}
//	queue<int> qu;
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)
//		{
//			qu.push(i);
//			dp[i] = 1;
//		}
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		for (int i = 0; i < web[a].size(); i++)
//		{
//			dp[web[a][i]] = (dp[a] + dp[web[a][i]]) % mod;
//			in[web[a][i]]--;
//			if (in[web[a][i]] == 0)
//			{
//				qu.push(web[a][i]);
//				
//			}
//			
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (out[i] == 0)
//			ret = (ret + dp[i]) % mod;
//	}
//	cout << ret << endl;
//	return 0;
//}