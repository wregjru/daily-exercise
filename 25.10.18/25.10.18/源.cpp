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


int n; int m;
vector<int> tu[2000010];
int dist[1000010];
priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> qu;
int MOD = 100003;
int f[1000010];
bool st[1000010];

void dig()
{
	memset(dist, 0x3f, sizeof(dist));
	dist[1] = 1;
	qu.push({ 0,1 });//距离，点
	f[1] = 1;
	while (!qu.empty())
	{
		int a = qu.top().first; int b = qu.top().second;
		qu.pop();
		if (st[b])continue;
		st[b] = true;

		for (int i = 0; i <tu[b].size(); i++)
		{
			int c = tu[b][i];
			if (dist[b] + 1 < dist[c])
			{
				dist[c] = dist[b] + 1;
				f[c] = f[b];
				qu.push({ dist[c], c });
			}
			else if (dist[b] + 1 == dist[c])
			{
				f[c] = (f[b] + f[c]) % MOD;
			}
		}
	}
	
}


int main()
{
	scanf("%d %d", &n, &m);
	for (int i = 1; i <= m; i++)
	{
		int a; int b; cin >> a >> b;
		tu[a].push_back(b);
		tu[b].push_back(a);
	}
	dig();
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n", f[i]);
	}
	return 0;
}






//int n; int m;
//struct node
//{
//	int a; int b; int c;
//}tu[10100];
//int dist[1010];
//
//bool bf(int s)
//{
//	memset(dist, 0x3f, sizeof(dist));
//	dist[s] = 0;
//	bool flag;
//	for (int i = 1; i <= n; i++)
//	{
//		flag = false;
//		for (int j = 1; j <= m; j++)//注意是m条线
//		{
//			int a = tu[j].a; int b = tu[j].b; int c = tu[j].c;
//			if (dist[a] + c < dist[b])
//			{
//				dist[b] = dist[a] + c;
//				flag = true;
//			}
//		}
//		if (flag == false) return flag;
//	}
//	return flag;
//	
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> tu[i].a >> tu[i].b >> tu[i].c;
//		tu[i].c *= -1;
//	}
//	int ret;
//	bool k = bf(1);
//	if (k)
//	{
//		cout << "Forever love" << endl;
//		return 0;
//	}
//	ret = dist[n];
//	k = bf(n);
//	if (k)
//	{
//		cout << "Forever love" << endl;
//		return 0;
//	}
//	ret = min(ret, dist[1]);
//	cout << ret << endl;
//	return 0;
//}






//int e[110][110];//路
//int dp[110][110];//变换
//
//
//int main()
//{
//	int n; int m; cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			e[i][j] = dp[i][j] = 1e8;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		e[i][i] = dp[i][i] = 0;
//	}
//	int ret = 1e8;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		e[a][b] = e[b][a] = dp[a][b] = dp[b][a] = min(e[a][b], c);
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <k; i++)
//		{
//			for (int j = i+1; j <k; j++)
//			{
//				ret = min(ret, dp[i][j] + e[i][k] + e[k][j]);
//			}
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
//			}
//		}
//	}
//	if (ret == 1e8)cout << "No solution." << endl;
//	else cout << ret << endl;
//	return 0;
//}






//int dp[210][210];
//int n; int m;
//int t[210];
//
//void flo(int k)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
//		}
//	}
//}
//
//
//
//int main()
//{
//	memset(dp, 0x3f, sizeof(dp));
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> t[i];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		dp[a][b] = min(dp[a][b], c);
//		dp[b][a] = min(dp[a][b], c);
//	}
//	int pos = 0;//模拟到第几天第几天
//	int T; cin >> T;
//	while (T--)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		while (pos < n && t[pos] <= c)flo(pos++);
//		if (t[a] > c || t[b] > c || dp[a][b] == 0x3f3f3f3f)cout << -1 << endl;
//		else cout << dp[a][b] << endl;
//	}
//	return 0;
//}






//int main()
//{
//	int n; int m;
//	cin >> n >> m;
//	int p[11000];
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> p[i];
//	}
//	int tu[110][110];
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				tu[i][j] = min(tu[i][j], tu[i][k] + tu[k][j]);
//			}
//			
//		}
//	}
//	ll ret = 0;
//	for (int i = 2; i <= m; i++)
//	{
//		int a = p[i - 1]; int b = p[i];
//		ret += tu[a][b];
//	}
//	cout << ret << endl;
//	return 0;
//}








//int n; int m;
//int dp[110][110];
//
//
//int main()
//{
//	cin >> n >> m;
//	memset(dp, 0x3f, sizeof(dp));
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i][i] = 0;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		dp[a][b] = dp[b][a] = min(c, dp[a][b]);
//	}
//	for (int k = 1; k <= n; k++)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//
//	return 0;
//}











//int x[1100]; int y[1100];
//double dist[1100];
//struct node
//{
//	int a; int b; double d;//始终长度
//}tu[1010];
//int beg; int _end;
//int n; int m;//点，边
//
//double juli(int a, int b)
//{
//	int dx = x[a] - x[b]; int dy = y[a] - y[b];
//	return sqrt(dx * dx + dy * dy);
//}
//
//
//
//void bf()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = 0x3f3f3f3f;
//	}
//	dist[beg] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			int a = tu[j].a; int b = tu[j].b; double d = tu[j].d;
//			if (dist[a] + d < dist[b])
//			{
//				dist[b] = dist[a] + d;
//			}
//
//			if (dist[b] + d < dist[a])
//			{
//				dist[a] = dist[b] + d;
//			}
//		}
//	}
//
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x[i] >> y[i];
//	}
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> tu[i].a >> tu[i].b;
//		tu[i].d = juli(tu[i].a, tu[i].b);
//	}
//	cin >> beg >> _end;
//	bf();
//	printf("%.2lf\n", dist[_end]);
//	return 0;
//}





//int n; int m;//点，路线
//int tu[1010][1010];
//int dist[1010];
//bool used[1010];
//
//void dig()
//{
//	memset(dist, 0x3f, sizeof(dist));
//	memset(used, 0, sizeof(used));
//	dist[1] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int a = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			if (!used[j] && dist[j] < dist[a])
//				a = j;
//		}
//		used[a] = true;
//		for (int j = 1; j <= n; j++)
//		{
//			if (dist[a] + tu[a][j] < dist[j])
//			{
//				dist[j] = dist[a] + tu[a][j];
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n >> m;
//	memset(tu, 0x3f, sizeof(tu));
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		tu[a][b] = min(tu[a][b], c);
//	}
//	dig();
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret += dist[i];
//	}
//	for (int i = 1; i <= n; i++)
//		for (int j = i + 1; j <= n; j++)
//			swap(tu[i][j], tu[j][i]);
//
//	dig();
//	for (int i = 1; i <= n; i++) ret += dist[i];
//
//	cout << ret << endl;
//
//	return 0;
//}





//int cnt[2010];//松弛次数
//vector<pair<int, int>> tu[2010];
//bool inq[2010];//是否在队列
//queue<int> qu;
//int n; int m;//点数，边数
//int dist[2010];
//
//bool spfa()
//{
//	memset(inq, false, sizeof(inq));
//	memset(cnt, 0, sizeof(cnt));
//	memset(dist, 0x3f, sizeof(dist));
//	bool flag = false;
//	qu.push(1);
//	inq[1] = true;
//	dist[1] = 0;
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//		inq[s] = false;
//		for (auto t : tu[s])
//		{
//			int a = t.first; int b = t.second;
//			if (dist[s] + b < dist[a])
//			{
//				dist[a] = dist[s] + b;
//				cnt[a] = cnt[s] + 1;
//				if (cnt[a] >= n)return true;
//				if (!inq[a])qu.push(a);
//
//			}
//		}
//	}
//	return false;
//}
//
//
//
//
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		cin >> n >> m;
//		for (int i = 1; i <= m; i++)
//		{
//			int u; int v; int w; cin >> u >> v >> w;
//			tu[u].push_back({ v,w });
//			if (w >= 0)
//			{
//				tu[v].push_back({ u,w });
//			}
//		}
//		if (spfa())cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//	return 0;
//}