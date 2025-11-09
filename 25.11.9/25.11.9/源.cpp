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
typedef pair<int, int> PII;


struct node
{
	int up; int dowm;
}mov[10010];
struct node2
{
	int up; int down;
}pip[10010];
int n; int m; int k;
int dp[10010][1010];
bool st[10010];
int INF = 0x3f3f3f3f3f3f3f3f;
signed main()
{
	memset(dp, 0x3f, sizeof(dp));
	cin >> n >> m >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> mov[i].up >> mov[i].dowm;
	}
	for (int i = 1; i <= k; i++)
	{
		int s; cin >> s;
		cin >> pip[s].down >> pip[s].up;
		st[s] = true;
	}
	for (int i = 1; i <= m; i++)
	{
		dp[0][i] = 0;
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = mov[i-1].up+1; j <= m; j++)//上升，注意，算的是上一步的up
		{
			dp[i][j] = min(dp[i - 1][j - mov[i-1].up]+1, dp[i][j]);
			dp[i][j] = min(dp[i][j - mov[i-1].up]+1, dp[i][j]);
		}
		for (int j = m - mov[i-1].up; j <= m; j++)
		{
			dp[i][m] = min(dp[i][m], dp[i - 1][j]+1);
			dp[i][m] = min(dp[i][m], dp[i][j] + 1);
		}
		for (int j = 1; j <= m - mov[i - 1].dowm; j++)
		{
			dp[i][j] = min(dp[i][j], dp[i - 1][j + mov[i - 1].dowm]);
		}
		if (st[i])
		{
			for (int j = 0; j <= pip[i].down; j++)dp[i][j] = INF;
			for (int j = pip[i].up; j <= m; j++)dp[i][j] = INF;
		}
	}
	int ret = INF;
	for (int i = 1; i <= m; i++)
	{
		ret = min(ret, dp[n][i]);
	}
	if (ret == INF)
	{
		cout << 0 << endl;
		int r = 0;
		for (int i = 1; i <= n; i++)
		{
			if (st[i])
			{
				for (int j = pip[i].down; j <= pip[i].up; j++)
				{
					if (dp[i][j] != INF)
					{
						r++;
						break;
					}
				}
			}
		}
		cout << r << endl;
	}
	else
	{
		cout << 1 << endl;
		cout << ret << endl;
	}
	return 0;
}






//int n; int q;
//struct node
//{
//	int val; int id;
//}num[10000];
//bool cmp(node& a, node& b)
//{
//	if (a.val == b.val)return a.id < b.id;
//	return a.val < b.val;
//}
//int yuan[10000];//用原id找现在值
//void getid()
//{
//	for (int i = 1; i <= n; i++)
//	{
//		yuan[num[i].id] = i;
//	}
//}
//signed main()
//{
//	
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i].val;
//		num[i].id = i;
//	}
//	sort(num + 1, num + 1 + n, cmp);
//	getid();
//	while (q--)
//	{
//		int s; cin >> s;
//		if (s == 2)
//		{
//			int a; cin >> a;
//			cout << yuan[a] << endl;
//		}
//		else
//		{
//			int a; cin >> a;
//			int b; cin >> b;
//			num[yuan[a]].val = b;
//			for (int i = 2; i <= n; i++)
//			{
//				if ((num[i - 1].val > num[i].val) || (num[i - 1].val == num[i].val && num[i - 1].id > num[i].id))
//				{
//					swap(num[i - 1], num[i]);
//				}
//			}
//			for (int i = n; i >=2; i--)
//			{
//				if ((num[i - 1].val > num[i].val) || (num[i - 1].val == num[i].val && num[i - 1].id > num[i].id))
//				{
//					swap(num[i - 1], num[i]);
//				}
//			}
//			getid();
//		}
//	}
//	return 0;
//}









//struct node
//{
//	int l; int r;
//}gra[200000];
//
//int n;
//bool cmp(node& a, node& b)
//{
//	return a.r < b.r;
//}
//int dp[200000];//i个堆最大吃草数
//int dp2[200000];
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> gra[i].l >> gra[i].r;
//	}
//	sort(gra + 1, gra + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		int l = 0; int r = i - 1;
//		while (l < r)
//		{
//			int mid = (l + r + 1) / 2;
//			if (gra[mid].r >= gra[i].l)r = mid - 1;
//			else l = mid;
//		}
//		dp[i] = dp2[l] + gra[i].r - gra[i].l + 1;
//		dp2[i] = max(dp2[i - 1], dp[i]);
//	}
//	cout << dp2[n] << endl;
//	return 0;
//}






//vector<PII>tu[1000];
//int n; int m; int c;
//int muc[1000];
//int dist[1000];
//bool gone[1000];
//struct cmp
//{
//	bool operator()(PII& a, PII& b)
//	{
//		return a.second > b.second;
//	}
//};
//int dig(int s)
//{
//	memset(dist, 0x3f, sizeof(dist));
//	memset(gone, 0, sizeof(gone));
//	priority_queue<PII, vector<PII>, cmp>heap;
//	dist[s] = 0;
//	heap.push({ s,0 });
//	while (!heap.empty())
//	{
//		int x = heap.top().first;
//		heap.pop();
//		if (gone[x])continue;
//		gone[x] = true;
//		for (int i = 0; i < tu[x].size(); i++)
//		{
//			int y = tu[x][i].first;
//			if (dist[x] + tu[x][i].second<dist[y])
//			{
//				dist[y] = dist[x] + tu[x][i].second;
//				heap.push({ y,dist[y] });
//			}
//		}
//	}
//	int r = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dist[muc[i]] == 0x3f3f3f3f3f3f3f3f)return 0x3f3f3f3f3f3f3f3f;
//		r += dist[muc[i]];
//	}
//	return r;
//
//}
//
//signed main()
//{
//	cin >> n >> m >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> muc[i];
//	}
//	for (int i = 1; i <= c; i++)
//	{
//		int a; int b; int d;
//		cin >> a >> b >> d;
//		tu[a].push_back({ b,d });
//		tu[b].push_back({ a,d });
//	}
//	int ret = 0x3f3f3f3f3f3f3f3f;
//	for (int i = 1; i <= m; i++)
//	{
//		ret = min(ret, dig(i));
//	}
//	cout << ret << endl;
//	return 0;
//}






//int n;
//int sum;//总和
//int pos;//多少个数
//int num[20];
//void dfs()
//{
//	if (sum > n)return;
//	if (sum == n)
//	{
//		if (pos == 1)return;
//		for (int i = 1; i < pos; i++)
//		{
//			cout << num[i] << "+";
//		}
//		cout << num[pos] << endl;
//	}
//	for (int i = num[pos]; i <= n - 1; i++)
//	{
//		pos++;
//		num[pos] = i;
//		sum += i;
//		dfs();
//		sum -= i;
//		num[pos] = 0;
//		pos--;
//	}
//}
//
//signed main()
//{
//	cin >> n;
//	num[0] = 1;
//	dfs();
//	return 0;
//}
//








//string lua; string lub;
//int n; int m;
//int x1; int y1; int x2; int y2;
//struct node
//{
//	int x; int y;
//}pa[1010];
//struct node2
//{
//	int x; int y;
//}pb[1010];
//int dp[1010][1010];
//
//int dist(int i, int j)
//{
//	return (pa[i].x - pb[j].x) * (pa[i].x - pb[j].x) + (pa[i].y - pb[j].y) * (pa[i].y - pb[j].y);
//}
//
//signed main()
//{
//	cin >> n >> m;
//	cin >> pa[0].x >> pa[0].y >> pb[0].x >> pb[0].y;
//	cin >> lua >> lub;
//	for (int i = 0; i < lua.size(); i++)
//	{
//		if (lua[i] == 'N')
//		{
//			pa[i + 1].x = pa[i].x;
//			pa[i + 1].y = pa[i].y + 1;
//		}
//		if (lua[i] == 'S')
//		{
//			pa[i + 1].x = pa[i].x;
//			pa[i + 1].y = pa[i].y - 1;
//		}
//		if (lua[i] == 'E')
//		{
//			pa[i + 1].x = pa[i].x + 1;
//			pa[i + 1].y = pa[i].y;
//		}
//		if (lua[i] == 'W')
//		{
//			pa[i + 1].x = pa[i].x - 1;
//			pa[i + 1].y = pa[i].y;
//		}
//	}
//	for (int i = 0; i < lub.size(); i++)
//	{
//		if (lub[i] == 'N')
//		{
//			pb[i + 1].x = pb[i].x;
//			pb[i + 1].y = pb[i].y + 1;
//		}
//		if (lub[i] == 'S')
//		{
//			pb[i + 1].x = pb[i].x;
//			pb[i + 1].y = pb[i].y - 1;
//		}
//		if (lub[i] == 'E')
//		{
//			pb[i + 1].x = pb[i].x + 1;
//			pb[i + 1].y = pb[i].y;
//		}
//		if (lub[i] == 'W')
//		{
//			pb[i + 1].x = pb[i].x - 1;
//			pb[i + 1].y = pb[i].y;
//		}
//	}
//	for (int i = 1; i <= n; i++)dp[i][0] = dp[i - 1][0] + dist(i, 0);
//	for (int j = 1; j <= m; j++)dp[0][j] = dp[0][j - 1] + dist(0, j);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
//			dp[i][j] += dist(i, j);
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}






//vector<int> tu[200];
//int n; int m;
//int ret[200];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a].push_back(b);
//		tu[b].push_back(a);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == 5)
//		{
//			int rrr = 1;
//		}
//		bool gone[200] = { 0 };
//		for (int j = 0; j < tu[i].size(); j++)
//		{
//			int s = tu[i][j];
//			gone[ret[s]] = true;
//		}
//		for (int j = 1; j <= n; j++)
//		{
//			if (gone[j] == false)
//			{
//				ret[i] = j;
//				break;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)cout << ret[i];
//	return 0;
//}






//int C[2010][2010];
//int num[1010];
//const int mod = 1e9 + 7;
//int n; int m;
//void init()
//{
//	C[0][0] = 1;
//	for (int i = 1; i <= 2005; i++)
//	{
//		C[i][0] = 1;
//		for (int j = 1; j <= 2005; j++)
//		{
//			C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
//		}
//	}
//}
//
//signed main()
//{
//	init();
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> num[i];
//	}
//	int ret = 1;
//	for (int i = 1; i <= m; i++)
//	{
//		ret = (ret * C[num[i] + n - 1][n - 1]) % mod;
//	}
//	for (int i = 1; i < n; i++)
//	{
//		int r = C[n][i];
//		for (int j = 1; j <= m; j++)
//		{
//			r = (r * C[num[j] + n - 1 - i][n - 1 - i]) % mod;
//		}
//		if (i % 2 == 1)ret = ((ret - r) % mod + mod) % mod;
//		else ret = (ret + r) % mod;
//	}
//	cout << ret << endl;
//	return 0;
//}




//int n; int m;
//vector<PII> tu[1010];
//int ful[1010][1010];
//int dist[1010];
//int INF = 0x3f3f3f3f3f3f3f3f;
//bool gone[1010];
//
//struct cmp
//{
//	bool operator()(PII& a, PII& b)
//	{
//		return a.second > b.second;
//	}
//};
//
//int dig(int s)
//{
//	if (s == 4)
//	{
//		int sdsfsd = 1;
//	}
//	memset(dist, 0x3f, sizeof(dist));
//	memset(gone, 0, sizeof(gone));
//	priority_queue<PII,vector<PII>,cmp> qu;
//	qu.push({1,0});//节点，长度
//	dist[1] = 0;
//	while (!qu.empty())
//	{
//		int a = qu.top().first;
//		int b = qu.top().second;
//		qu.pop();
//		if (gone[a])continue;
//		gone[a] = true;
//		
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int c = tu[a][i].first;
//			int d = tu[a][i].second;
//			
//			if (ful[a][c] < s)continue;
//			if(gone[c])continue;
//			if (dist[a] + d < dist[c])
//			{
//				dist[c] = dist[a] + d;
//				qu.push({ c,dist[c] });
//			}
//		}
//	}
//	return dist[n];
//}
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c; int d;
//		cin >> a >> b >> c >> d;
//		ful[a][b] = d; ful[b][a] = d;
//		tu[a].push_back({ b,c });
//		tu[b].push_back({ a,c });
//	}
//	int ret = 0;
//	for (int i = 1; i <= 1000; i++)
//	{
//		ret = max(ret, 1000000*i / dig(i));//最小花费
//	}
//	cout << ret << endl;
//	return 0;
//}






//int num[100010];
//int shu[1000010];
//int ret[1000010];
//
//signed main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		shu[num[i]]++;
//	}
//	for (int i = 1; i < 1000010; i++)
//	{
//		if (shu[i] == 0)continue;
//		for (int j = i; j < 1000010; j+=i)
//		{
//			ret[j] += shu[i];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ret[num[i]] - 1 << endl;
//	}
//
//	return 0;
//}




//int num[100010];
//int shu[1000010];
//signed main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		shu[num[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int ret = 0;
//		for (int j = 1; j <= num[i]/j; j++)
//		{
//			if (num[i] % j == 0)
//			{
//				ret += shu[j] + shu[num[i] / j];
//				if (j == num[i] / j)ret -= shu[j];
//			}
//		}
//		cout << ret-1 << endl;
//	}
//	return 0;
//}








//int INF = 0x3f3f3f3f3f3f3f3f;
//int n; int m; int k;
//struct node
//{
//	int down; int up;
//}guan[10010];//管道
//struct node2
//{
//	int down; int up;
//}mov[10010];//点击上下移动量
//int dp[10010][1010];//到i,j点击次数
//bool st[10010];//是否有管道
//
//signed main()
//{
//	cin >> n >> m >> k;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> mov[i].up >> mov[i].down;
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		int s; cin >> s;
//		cin >> guan[s].down >> guan[s].up;
//		st[s] = true;
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	for (int i = 1; i <= m; i++)
//	{
//		dp[0][i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = mov[i - 1].up+1; j <= m; j++)
//		{
//			dp[i][j] = min(dp[i][j], dp[i - 1][j - mov[i - 1].up] + 1);
//			dp[i][j] = min(dp[i][j], dp[i][j - mov[i - 1].up] + 1);
//		}
//		
//		for (int j = m - mov[i - 1].up; j <= m; j++)
//		{
//			dp[i][m] = min(dp[i][m], dp[i - 1][j] + 1);
//			dp[i][m] = min(dp[i][m], dp[i][j] + 1);
//		}
//		for (int j = 1; j <= m-mov[i-1].down; j++)
//		{
//			dp[i][j] = min(dp[i][j], dp[i - 1][j + mov[i - 1].down]);
//		}
//		if (st[i])
//		{
//			for (int j = 0; j <= guan[i].down; j++)dp[i][j] = INF;
//			for (int j = guan[i].up; j <= m; j++)dp[i][j] = INF;
//		}
//
//	}
//	int ret = INF;
//	for (int i = 1; i <= m; i++)
//	{
//		ret = min(ret, dp[n][i]);
//	}
//	if (ret == INF)
//	{
//		cout << 0 << endl;
//		int r = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (st[i])
//			{
//				for (int j = guan[i].up; j >= guan[i].down; j--)
//				{
//					if (dp[i][j] != INF)
//					{
//						r++;
//						break;
//					}
//				}
//			}
//		}
//		cout << r << endl;
//	}
//	else
//	{
//		cout << 1 << endl;
//		
//		cout << ret << endl;
//	}
//	return 0;
//}







//struct node
//{
//	int val; int id;
//}num[10000];
//int n; int q;
//int id[10000];
//bool cmp(node& a, node& b)
//{
//	if (a.val == b.val)return a.id < b.id;
//	else return a.val < b.val;
//}
//void getid()//查询原来第i个数的现在第几个数
//{
//	for (int i = 1; i <= n; i++)
//	{
//		id[num[i].id] = i;
//	}
//}
//
//signed main()
//{
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i].val; num[i].id = i;
//	}
//	sort(num + 1, num + 1 + n,cmp);
//	getid();
//	while (q--)
//	{
//		int s; cin >> s;
//		if (s == 1)
//		{
//			int a; int b; cin >> a >> b;
//			num[id[a]].val = b;
//			for (int i = 1; i <n; i++)
//			{
//				if (num[i].val > num[i+1].val||(num[i].val == num[i + 1].val&&num[i].id>num[i+1].id))
//				{
//					swap(num[i], num[i + 1]);
//				}
//			}
//			for (int i = n-1; i >=1; i--)
//			{
//				if (num[i].val > num[i + 1].val || (num[i].val == num[i + 1].val && num[i].id > num[i+1].id))
//				{
//					swap(num[i], num[i + 1]);
//				}
//			}
//			getid();
//		}
//		else
//		{
//			int a; cin >> a;
//			cout << id[a] << endl;
//		}
//	}
//	return 0;
//}






//int INF = 0x3f3f3f3f3f3f3f3f;
//vector<int> tu[10010];
//vector<int> fantu[10010];
//bool cang[10010];
//int dist[10010];
//int n; int m;
//bool check(int s)
//{
//	for (int i = 0; i < tu[s].size(); i++)
//	{
//		if (!cang[tu[s][i]])return false;
//	}
//	return true;
//}
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a].push_back(b);
//		fantu[b].push_back(a);
//	}
//	int beg; int end;
//	cin >> beg >> end;
//	//哪些点能到
//	queue<int> fant;
//	fant.push(end);
//	cang[end] = true;
//	while (!fant.empty())
//	{
//		int s = fant.front(); fant.pop();
//		for (int i = 0; i < fantu[s].size(); i++)
//		{
//			int d = fantu[s][i];
//			if (cang[d])continue;
//			cang[d] = true;
//			fant.push(d);
//		}
//	}
//	if (!cang[beg])
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	//最短
//	if (!check(beg))
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	memset(dist, 0x3f, sizeof(dist));
//	queue<int> qu;
//	qu.push(beg);
//	dist[beg] = 0;
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		if (s == end)
//		{
//			cout << dist[s] << endl;
//			return 0;
//		}
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int d = tu[s][i];
//			if (dist[d] != INF)continue;
//			if (!cang[d])continue;
//			if (!check(d))continue;
//			dist[d] = dist[s] + 1;
//			qu.push(d);
//		}
//	}
//	cout << -1 << endl;
//	return 0;
//}






//int n; int m;
//struct node
//{
//	int chao;
//	string cre;
//}peo[100010];
//int pos;//朝外的人数
//
//
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> peo[i].chao >> peo[i].cre;
//	}
//	int pos = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		if (a == peo[pos].chao)
//		{
//			pos = ((pos - b) % n + n) % n;
//		}
//		else pos = ((pos + b) % n + n) % n;
//	}
//	cout << peo[pos].cre << endl;
//	return 0;
//}