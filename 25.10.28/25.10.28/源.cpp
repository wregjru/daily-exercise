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



int n; int m;
vector<pair<int, int>> tu[1510];
int dist[1510];
bool inq[1510];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int u; int v; int w;
		cin >> u >> v >> w;
		tu[u].push_back({ v,w });
	}
	for (int i = 2; i < 1505; i++)
	{
		dist[i] = -1e9;
	}
	queue<int> qu;
	qu.push(1);
	inq[1] = true;
	while (!qu.empty())
	{
		int s = qu.front(); qu.pop();
		inq[s] = false;
		for (int i = 0; i < tu[s].size(); i++)
		{
			int a = tu[s][i].first;
			int b = tu[s][i].second;
			if (dist[a] < dist[s] + b)
			{
				dist[a] = dist[s] + b;
				if (!inq[a])
				{
					qu.push(a);
					inq[a] = true;
				}

			}

		}

	}
	if (dist[n] == -1e9)cout << -1 << endl;
	else cout << dist[n] << endl;
	return 0;
}






//int num[220];
//int n;
//int dp[220][220];
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		num[i + n] = num[i];
//	}
//	for (int gap = 3; gap <= n+1; gap++)
//	{
//		for (int i = 1; i + gap - 1 <= 2 * n; i++)
//		{
//			int j = i + gap - 1;
//			for (int k = i + 1; k < j; k++)
//			{
//				dp[i][j] = max(dp[i][j], dp[i][k] + dp[k][j] + num[i] * num[j] * num[k]);
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, dp[i][i + n]);
//	}
//	cout << ret << endl;
//	return 0;
//}




//string s[30];
//int gone[30];
//int n;
//int ret = 0;
//void dfs(string pa)
//{
//	if (pa.size() > ret)ret = pa.size();
//	for (int i = 1; i <= n; i++)
//	{
//		if (gone[i] >= 2)continue;
//		int c1 = pa.size() - 1; int c2 = 0;
//		while (c1 >= 1 && c2 < s[i].size() - 1)
//		{
//			if (pa.substr(c1) == s[i].substr(0, c2 + 1))
//			{
//				gone[i]++;
//				dfs(pa + s[i].substr(c2+1));
//				gone[i]--;
//			}
//			c1--; c2++;
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> s[i];
//	}
//	char ch; cin >> ch;
//	for (int i = 1; i <= n; i++)
//	{
//		if (s[i][0] == ch)
//		{
//			gone[i] = 1;
//			dfs(s[i]);
//			gone[i] = 0;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}



//vector<pair<int, int>> tu[1510];
//int dist[1610];
//int n; int m;
//queue<int> qu;
//bool inq[1510];
//int main()
//{
//	for (int i = 2; i < 1510; i++)
//	{
//		dist[i] = -1e9;
//	}
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u; int v; int w; cin >> u >> v >> w;
//		tu[u].push_back({ v,w });
//	}
//	qu.push(1);
//	inq[1] = true;
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		inq[s] = false;
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int a = tu[s][i].first;
//			int b = tu[s][i].second;
//			if (dist[a] < dist[s] + b)
//			{
//				dist[a] = dist[s] + b;
//				if (!inq[a])
//				{
//					qu.push(a);
//					inq[a] = true;
//				}
//			}
//		}
//	}
//	if (dist[n] == -1e9)cout << -1 << endl;
//	else cout << dist[n] << endl;
//	return 0;
//}




//vector<pair<int, int>> tu[1510];
//int dist[1610];
//int n; int m;
//queue<int> qu;
//int main()
//{
//	for (int i = 2; i < 1510; i++)
//	{
//		dist[i] = -1e9;
//	}
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u; int v; int w; cin >> u >> v >> w;
//		tu[u].push_back({ v,w });
//	}
//	for (int i = 1; i < n; i++)
//	{
//		int flag = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			
//			for (int k = 0; k < tu[j].size(); k++)
//			{
//				int a = tu[j][k].first;
//				int b = tu[j][k].second;
//				if (dist[a] < dist[j] + b)
//				{
//					dist[a] = dist[j] + b;
//					flag = 1;
//				}
//			}
//			
//		}
//		if (flag == 0)break;
//	}
//	if (dist[n] == -1e9)cout << -1 << endl;
//	else cout << dist[n] << endl;
//	return 0;
//}




//vector<pair<int, int>> tu[1510];
//
//int n; int m;
//int in[1510];
//int dp[1510];
//queue<int> qu;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u; int v; int w; cin >> u >> v >> w;
//		tu[u].push_back({ v,w });
//		in[v]++;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		dp[i] = -1e9;
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			in[tu[s][i].first]--;
//			if (in[tu[s][i].first] == 0)
//			{
//				qu.push(tu[s][i].first);
//			}
//
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
//			dp[a] = max(dp[a], dp[s] + b);
//			in[a]--;
//			if (in[a] == 0)qu.push(a);
//		}
//	}
//	if (dp[n] == -1e9)cout << -1 << endl;
//	else cout << dp[n] << endl;
//
//	return 0;
//}




/////////////////////

//int tu[1510][1510];
//int dist[1510];
//int n; int m;
//queue<int>qu;
//
//
//int main()
//{
//	memset(tu, 0x3f, sizeof(tu));
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int u; int v; int w;
//		cin >> u >> v >> w;
//		tu[u][v] = -w;
//
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (dist[j] == NO) continue;
//			for (int k = 1; k <= n; k++)
//			{
//				if (tu[j][k] != NO && dist[k] > tu[j][k] + dist[j])
//				{
//					dist[k] = tu[j][k] + dist[j];
//				}
//			}
//		}
//	}
//	if (-dist[n] == 0x3f3f3f3f)
//	{
//		cout << -1 << endl; return 0;
//	}
//	cout << -dist[n] << endl;
//	return 0;
//}







//int n;
//int sum;
//int x; int y;
//void getn(int ed,int sum,int a,int b)
//{
//	if (x == a || x == a + ed - 1 || y == b || y == b + ed - 1)
//	{
//		if (x == a)
//		{
//			cout << x - a + sum;
//			return;
//		}
//		else if (y == b + ed - 1)
//		{
//			cout << n + sum + x - a;
//			return;
//		}
//		else if (x == a + ed - 1)
//		{
//			cout << sum+2 * n - 2 + b + ed - 1 - y;
//			return;
//		}
//		else
//		{
//			cout << sum + 3 * n - 3 + a + ed - 1 - x;
//			return;
//		}
//	}
//	getn(ed - 1, sum + 4 * (ed - 1), a+ 1, b + 1);
//}
//
//
//
//
//int main()
//{
//	cin >> n;
//	cin >> x >> y;
//	int a = 1; int b = 1;
//	getn(n, sum, a, b);
//	return 0;
//}





//int n; int m;//天数，人数
//int cha[110];
//int dp[110];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		cha[a]++; cha[b+1]--;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + cha[i];
//		if (dp[i] <= 0)
//		{
//			cout << i <<" "<<dp[i]<< endl;
//			return 0;
//		}
//		if (dp[i] > 1)
//		{
//			cout << i << " " << dp[i]<< endl;
//			return 0;
//		}
//	}
//	cout << "OK" << endl;
//	return 0;
//}
//


//int main()
//{
//	int T;
//	cin >> T;
//	while(T--)
//	{
//		string a;
//		cin >> a;
//		int ret = 0;
//		bool flag = false;
//		for (int i = 0; i < a.size(); i++)
//		{
//			ret += (a[i] - '0');
//			if (a[i] == '0')flag = true;
//		}
//		if (flag == true)
//			cout << ret + 9 << endl;
//		else
//		cout << ret+8 << endl;
//	}
//	return 0;
//}