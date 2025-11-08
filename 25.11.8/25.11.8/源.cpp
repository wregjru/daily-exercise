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
			if (num[i] == i)ret[i] = ++pos;
			else ret[i] = ret[i-num[i]];
		}
		for (int i = 1; i <= n; i++)
		{
			cout << ret[i] << " ";
		}
		cout << endl;
	}
	return 0;
}







//int n; int m;
//string sa; string sb;
//struct node
//{
//	int x; int y;
//}pa[1010], pb[1010];
//int dp[1010][1010];
//
//int dist(int a, int b)
//{
//	return (pa[a].x - pb[b].x) * (pa[a].x - pb[b].x) + (pa[a].y - pb[b].y) * (pa[a].y - pb[b].y);
//}
//
//signed main()
//{
//	cin >> n >> m;
//	cin >> pa[0].x >> pa[0].y;
//	cin >> pb[0].x >> pb[0].y;
//	cin >> sa >> sb;
//	
//	for (int i = 0; i < n; i++)
//	{
//		if (sa[i] == 'N')
//		{
//			pa[i + 1].x = pa[i].x;
//			pa[i + 1].y = pa[i].y + 1;
//		}
//		if (sa[i] == 'S')
//		{
//			pa[i + 1].x = pa[i].x;
//			pa[i + 1].y = pa[i].y - 1;
//		}
//		if (sa[i] == 'E')
//		{
//			pa[i + 1].x = pa[i].x + 1;
//			pa[i + 1].y = pa[i].y;
//		}
//		if (sa[i] == 'W')
//		{
//			pa[i + 1].x = pa[i].x - 1;
//			pa[i + 1].y = pa[i].y;
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		if (sb[i] == 'N')
//		{
//			pb[i + 1].x = pb[i].x;
//			pb[i + 1].y = pb[i].y + 1;
//		}
//		if (sb[i] == 'S')
//		{
//			pb[i + 1].x = pb[i].x;
//			pb[i + 1].y = pb[i].y - 1;
//		}
//		if (sb[i] == 'E')
//		{
//			pb[i + 1].x = pb[i].x + 1;
//			pb[i + 1].y = pb[i].y;
//		}
//		if (sb[i] == 'W')
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







//struct node
//{
//	int a; int b; int v;
//}cow[100010];
//int n;
//
//bool cmp(node& a, node& b)
//{
//	return a.a < b.a;
//}
//struct cmp2
//{
//	bool operator()(node& a, node& b)
//	{
//		return a.v > b.v;
//	}
//};
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> cow[i].a >> cow[i].b;
//		cow[i].v = i;
//	}
//	sort(cow + 1, cow + 1 + n, cmp);
//	priority_queue<node, vector<node>, cmp2>heap;
//	int end = 0;
//	int i = 1;
//	int ret = 0;
//	while (i <= n)
//	{
//		while (cow[i].a <= end&&i<=n)heap.push(cow[i++]);
//		if (heap.empty())
//		{
//			heap.push(cow[i++]);
//		}
//		node s = heap.top(); heap.pop();
//		if (s.a >= end)
//		{
//			end = s.a + s.b;
//		}
//		else
//		{
//			ret = max(ret, end-s.a);
//			end += s.b;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}




//int n; int m; int c;
//int tim[100010];
//int check(int s)
//{
//	int ret = 1;
//	int e = tim[1];
//	int pos = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		if (tim[i] - e > s || pos == c)
//		{
//			e = tim[i];
//			ret++;
//			pos = 1;
//		}
//		else pos++;
//	}
//	return ret;
//}
//
//signed main()
//{
//	cin >> n >> m >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tim[i];
//	}
//	sort(tim + 1, tim + 1 + n);
//	int l = 0; int r = tim[n]-tim[1];
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) <= m)r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	return 0;
//}
//





//int n; int k;
//int num[10010];
//int dp[10010];
//signed main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int ma = num[i];
//		for (int j = i - 1; j >= max(i-k,(ll)0); j--)
//		{
//			dp[i] = max(dp[i], dp[j] + (i - j) * ma);
//			ma = max(ma, num[j]);
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, dp[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}







//bool tu[10][10];
//bool gone[10][10];
//int n; int m; int t;
//int x1; int y1; int x2; int y2;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int ret;
//void dfs(int x, int y)
//{
//	if (x == x2 && y == y2)
//	{
//		ret++;
//		return;
//	}
//	gone[x][y] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int a = x + dx[i]; int b = y + dy[i];
//		if (a<1 || a>n || b<1 || b>m)continue;
//		if (tu[a][b])continue;
//		if (gone[a][b])continue;
//		
//		dfs(a, b);
//		
//	}
//	gone[x][y] = false;
//}
//
//signed main()
//{
//	cin >> n >> m >> t;
//	cin >> x1 >> y1 >> x2 >> y2;
//	for (int i = 1; i <= t; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a][b] = true;
//	}
//	dfs(x1, y1);
//	cout << ret << endl;
//	return 0;
//}






//struct node
//{
//	int x; int y;
//}tu[150010];
//int n;
//bool cmp(node& a, node& b)
//{
//	return a.y < b.y;
//}
//int dp[150010];
//int dp2[150010];//最大值
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tu[i].x >> tu[i].y;
//	}
//	sort(tu + 1, tu + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		int l = 0; int r = i - 1;
//		while (l < r)
//		{
//			int mid = (l + r + 1) / 2;
//			if (tu[mid].y < tu[i].x)l = mid;
//			else r = mid - 1;
//		}
//		dp[i] = dp2[l] + tu[i].y - tu[i].x + 1;
//		dp2[i] = max(dp2[i-1], dp[i]);
//
//
//	}
//	cout << dp2[n] << endl;
//	
//	return 0;
//}




//int n; int p; int c;
//vector<pair<int, int>> tu[1000];
//int cha[1000];
//int dist[1000];
//bool gone[1000];
//struct cmp
//{
//	bool operator()(PII&a,PII&b)
//	{
//		return a.second > b.second;
//	}
//};
//
//int dig(int s)
//{
//	memset(dist, 0x3f, sizeof(dist));
//	memset(gone, 0, sizeof(gone));
//	dist[s] = 0;
//	priority_queue<PII, vector<PII>, cmp> heap;
//	heap.push({ s,0 });
//	while (!heap.empty())
//	{
//		int a = heap.top().first;
//		int b = heap.top().second;
//		heap.pop();
//		if (gone[a])continue;
//		gone[a] = true;
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int C = tu[a][i].first;
//			int d = tu[a][i].second;
//			if (b + d >= dist[C])continue;
//			dist[C] = b + d;
//			heap.push({ C,dist[C] });
//		}
//	}
//	int r = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dist[cha[i]] == 0x3f3f3f3f3f3f3f3f)
//		{
//			return 0x3f3f3f3f3f3f3f3f;
//		}
//		r += dist[cha[i]];
//	}
//	return r;
//}
//
//signed main()
//{
//	cin >> n >> p >> c;
//	for(int i=1;i<=n;i++)
//	{
//		cin >> cha[i];
//	}
//	for (int i = 1; i <= c; i++)
//	{
//		int a; int b; int c; cin >> a >> b >> c;
//		tu[a].push_back({ b,c });
//		tu[b].push_back({ a,c });
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 1; i <= p; i++)
//	{
//		ret = min(ret, dig(i));
//	}
//	cout << ret << endl;
//	return 0;
//}






//vector<int> tu[160];
//int n; int m;
//int col[160];
//signed main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[b].push_back(a);//b点由哪些点能到
//		tu[a].push_back(b);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		bool ge[5] = { 0 };
//		for (int j = 0; j < tu[i].size(); j++)
//		{
//			ge [col[tu[i][j]]] = true;
//		}
//		for (int j = 1; j <= 4; j++)
//		{
//			if (!ge[j])
//			{
//				cout << j;
//				col[i] = j;
//				break;
//			}
//		}
//	}
//	return 0;
//}







//int num[15];
//
//int sum;//数字和
//int n;
//void dfs(int pos)
//{
//	if (sum > n)return;
//	if (sum == n)
//	{
//		if (pos == 2)return;
//		for (int i = 1; i < pos - 1; i++)
//		{
//			cout << num[i] << "+";
//		}
//		cout << num[pos-1] <<  endl;
//		return;
//		
//	}
//	for (int i = num[pos-1]; i <= n; i++)
//	{
//		sum += i;
//		num[pos] = i;
//		dfs(pos+1);
//		num[pos] = 0;
//		sum -= i;
//	}
//}
//
//signed main()
//{
//	cin >> n;
//	num[0] = 1;
//	dfs(1);
//	return 0;
//}





/*
5
a a b c d
12
x a x b c y d z a a a a
*/

//unordered_map<string, int> ma;//计算能学到的单词个数
//unordered_map<string, int> xue;//要学的单词
//string tex[100010];
//string re[1010];//要背的词
//int n; int m;//要记单词数，文章单词数
//int cnt;//可以记下的单词
//unordered_map <string, bool>www;
//
////int check(int s)
////{
////	int ret = 0;
////	unordered_map<string, int> dang;//当前已经学到的单词
////	int pos = 0;//当前记录的单词个数
////	for (int i = 1; i <= s; i++)
////	{
////		if (xue[tex[i]] != 0 && dang[tex[i]] == 0)
////		{
////			pos++; dang[tex[i]]++;
////		}
////	}
////	ret = max(ret, pos);
////	int r = s+1; int l = 2;
////	while (r <= m)
////	{
////		if (xue[tex[r]] != 0 && dang[tex[r]] == 0)
////		{
////			pos++; dang[tex[r]]++;
////		}
////		if (xue[tex[l]] != 0)
////		{
////			dang[tex[l]]--;
////			{
////				if (dang[tex[l]] == 0)pos--;
////			}
////		}
////		ret = max(ret, pos);
////		l++; r++;
////	}
////	return ret;
////}
//
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> re[i];
//		xue[re[i]]++;
//	}
//	cin >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> tex[i];
//		ma[tex[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (ma[re[i]] != 0&&www[re[i]]==false)
//		{
//			www[re[i]] = true;
//			cnt++;
//		}
//
//	}
//	
//	cout << cnt << endl;
//	if (cnt == 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int pos = 0;//当前的要记的单词数
//	unordered_map<string, int> dang;
//	int ret = 0x3f3f3f3f;
//	for (int l = 1,r=1; r <= m; r++)
//	{
//		if (xue.count(tex[r]))dang[tex[r]]++;
//		if (dang[tex[r]] == 1)pos++;
//		while (pos == cnt)
//		{
//			ret = min(ret, r-l+1);
//			if (ret == 4)
//			{
//				int sssss = 1;
//			}
//			if(xue.count(tex[l]))dang[tex[l]]--;
//			/*if (dang[tex[l]] == 0)pos--;*/
//			if (xue.count(tex[l]) &&dang.count(tex[l]))pos--;
//			l++;
//		}
//	}
//	cout << ret << endl;
//	/*int l = n; int r = m;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) == cnt)r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;*/
//
//	return 0;
//}






//int n; int m;
//struct node
//{
//	int x; int y;
//}da[1010],db[1010];
//string ta; string tb;
//int dp[1010][1010];
//
//int dist(int a, int b)
//{
//	return (da[a].x - db[b].x) * (da[a].x - db[b].x) + (da[a].y - db[b].y) * (da[a].y - db[b].y);
//}
//
//signed main()
//{
//	cin >> n >> m;
//	cin >> da[0].x >> da[0].y;
//	cin >> db[0].x >> db[0].y;
//	cin >> ta >> tb;
//	for (int i = 0; i < ta.size(); i++)
//	{
//		if (ta[i] == 'N')
//		{
//			da[i + 1].x = da[i].x;
//			da[i + 1].y = da[i].y + 1;
//		}
//		else if (ta[i] == 'S')
//		{
//			da[i + 1].x = da[i].x;
//			da[i + 1].y = da[i].y - 1;
//		}
//		if (ta[i] == 'W')
//		{
//			da[i + 1].x = da[i].x - 1;
//			da[i + 1].y = da[i].y;
//		}
//		if (ta[i] == 'E')
//		{
//			da[i + 1].x = da[i].x + 1;
//			da[i + 1].y = da[i].y;
//		}
//	}
//	for (int i = 0; i < tb.size(); i++)
//	{
//		if (tb[i] == 'N')
//		{
//			db[i + 1].x = db[i].x;
//			db[i + 1].y = db[i].y + 1;
//		}
//		else if (tb[i] == 'S')
//		{
//			db[i + 1].x = db[i].x;
//			db[i + 1].y = db[i].y - 1;
//		}
//		else if (tb[i] == 'W')
//		{
//			db[i + 1].x = db[i].x - 1;
//			db[i + 1].y = db[i].y;
//		}
//		else if (tb[i] == 'E')
//		{
//			db[i + 1].x = db[i].x + 1;
//			db[i + 1].y = db[i].y;
//		}
//	}
//	for (int j = 1; j <= m; j++)
//	{
//		dp[0][j] = dp[0][j - 1] + dist(0, j);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i][0] = dp[i - 1][0] + dist(i, 0);
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			dp[i][j] = min(dp[i][j - 1], min(dp[i - 1][j - 1], dp[i - 1][j])) + dist(i,j);
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}






//int x[2010]; int y[2010];
//struct node
//{
//	int a; int b; int d;
//}tu[2000010];
//int pos;
//int n; int c;
//bool cmp(node& a, node& b)
//{
//	return a.d < b.d;
//}
//int f[2010];
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	f[_find(a)] = _find(b);
//}
//signed main()
//{
//	cin >> n >> c;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> x[i] >> y[i];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			int r = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
//			if (r < c)continue;
//			tu[++pos].d = (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]);
//			tu[pos].a = i; tu[pos].b = j;
//		}
//	}
//	sort(tu + 1, tu + 1 + pos, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//	}
//	int cnt = 0;//连接多少点
//	int ret = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		int a = tu[i].a; int b = tu[i].b; int d = tu[i].d;
//		if (_find(a) != _find(b))
//		{
//			ret += d;
//			uni(a, b);
//			cnt++;
//		}
//		if (cnt == n - 1)break;
//	}
//	if (cnt != n-1)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	cout << ret << endl;
//	return 0;
//}


