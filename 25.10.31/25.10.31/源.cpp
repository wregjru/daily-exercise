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








//int n; int m;
//struct node
//{
//	int x; int y;
//	int t;
//}rat[10100];
//int dp[10100];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> rat[i].t >> rat[i].x >> rat[i].y;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		dp[i] = 1;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (rat[i].t - rat[j].t >= abs(rat[i].x - rat[j].x) + abs(rat[i].y - rat[j].y))
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		ret = max(ret, dp[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}





//int tu[310][310];
//int tim[310][310];
//int dx[5] = { 0,0,0,-1,1 };
//int dy[5] = { 0,-1,1,0,0 };
//
//int main()
//{
//	for (int i = 0; i <= 305; i++)
//	{
//		for (int j = 0; j <= 305; j++)
//		{
//			tu[i][j] = 0x3f3f3f3f;
//			tim[i][j] = 0x3f3f3f3f;
//		}
//	}
//	int n = 0; cin >> n;
//	for (int j = 1; j <= n; j++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		for (int i = 0; i < 5; i++)
//		{
//			int x = a + dx[i];
//			int y = b + dy[i];
//			if (x < 0 || y < 0)continue;
//			tu[x][y] = min(tu[x][y], c);
//		}
//	}
//	queue<pair<int, int>> qu;
//	qu.push({ 0,0 });
//	tim[0][0] = 0;
//	if (tu[0][0] == 0x3f3f3f3f)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop();
//		if (tu[a][b] == 0x3f3f3f3f)
//		{
//			cout << tim[a][b] << endl;
//			return 0;
//		}
//		for (int i = 1; i < 5; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x < 0 || y < 0)continue;
//			if (tim[x][y] != 0x3f3f3f3f)continue;
//			tim[x][y] = tim[a][b] + 1;
//			if (tim[x][y] >= tu[x][y])continue;
//			qu.push({ x,y });
//			
//		}
//	}
//	cout << -1 << endl;
//	return 0;
//}





//unordered_map<ll, int> ma;
//int main()
//{
//	int n; cin >> n;
//	ll sum = 0;
//	ma[0] = 0;
//	for (int i = 1; i < n; i++)
//	{
//		sum += i;
//		ma[sum] = i;
//	}
//	sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		sum += i;
//		if (ma.count(n + sum))
//		{
//			cout << i+1 <<" "<< ma[n + sum] << endl;
//		}
//	}
//	return 0;
//}






//string a; string b;
//
//int main()
//{
//	cin >> a;
//	getchar();
//	getline(cin, b);
//	a = " " + a + " ";
//	b = " " + b + " ";
//	int pos = 0;
//	int cnt = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		a[i] = tolower(a[i]);
//	}
//	for (int i = 0; i < b.size(); i++)
//	{
//		b[i] = tolower(b[i]);
//	}
//	int f = 0;
//	if (b.find(a) != string::npos)
//	{
//		pos = b.find(a);
//		f = pos;
//		while (b.find(a, pos) != string::npos)
//		{
//			pos = b.find(a, pos) + 1;
//			cnt++;
//		}
//	}
//	else
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	cout << cnt << " " << f << endl;
//	return 0;
//}





//int v[110];
//int w[110];
//int n;
//int dp[220];
//int main()
//{
//	int all = 0;//总厚度
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> v[i] >> w[i];
//		all += v[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = all; j >= v[i]; j--)
//		{
//			dp[j] = max(dp[j], dp[j - v[i]] + w[i]);
//		}
//	}
//	for (int i = all; i >= 1; i--)
//	{
//		if (dp[i] <= all - i)
//		{
//			cout << all - i << endl;
//			break;
//		}
//	}
//
//	return 0;
//}


//int a1; int b1;
//int a2; int b2;
//struct node
//{
//	int d1; int d2;
//}dan[100010];
//int n;
//bool cmp(node& a, node& b)
//{
//	return a.d1 > b.d1;
//}
//
//int main()
//{
//	cin >> a1 >> b1 >> a2 >> b2;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int x; int y; cin >> x >> y;
//		dan[i].d1 = (x - a1) * (x - a1) + (y - b1) * (y - b1);
//		dan[i].d2= (x - a2) * (x - a2) + (y - b2) * (y - b2);
//	}
//	sort(dan + 1, dan + 1 + n, cmp);
//	int ret = dan[1].d1;
//	int r = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		r = max(r, dan[i - 1].d2);
//		ret = min(ret, dan[i].d1 + r);
//	}
//	r = max(r, dan[n].d2);
//	ret = min(ret, r);
//	cout << ret << endl;
//	return 0;
//}






//int num[10] = { 6,2,5,5,4,5,6,3,7,6 };
//int ret; int n;
//int che(int s)
//{
//	int r = 0;
//	while (s > 9)
//	{
//		r += num[s % 10];
//		s /= 10;
//	}
//	r += num[s];
//	return r;
//}
//int main()
//{
////	cout << che(238) << endl;
//	 cin >> n;
//	for (int i = 0; i <= 999; i++)
//	{
//		for (int j = 0; j <= 999; j++)
//		{
//			int k = i + j;
//			if ((che(i) + che(j) + che(k)) == (n - 4))ret++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}




//int f[40100];
//struct node
//{
//	int a; int b; int c;//ab间怨气值为c
//}tu[100010];
//int n; int m;
//
//bool cmp(node& a, node& b)
//{
//	return a.c > b.c;
//}
//int _find(int s)
//{
//	return s == f[s] ? s : f[s]=_find(f[s]);
//}
//void un(int a, int b)
//{
//	f[_find(a)] = _find(b);
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> tu[i].a >> tu[i].b >> tu[i].c;
//	}
//	sort(tu + 1, tu + 1 + m, cmp);
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		un(tu[i].a, tu[i].b + n);
//		un(tu[i].b, tu[i].a + n);
//		if (_find(tu[i].a) == _find(tu[i].b))
//		{
//			cout << tu[i].c << endl;
//			return 0;
//		}
//	}
//	cout << 0 << endl;
//	return 0;
//}





//int L; int n; int k;//路长度，原路标数，可增设数
//int num[100010];//原先路标位置
//
//int pan(int s)
//{
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] - num[i - 1] > s)
//		{
//			ret += (num[i] - num[i - 1]-1) / s;
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> L >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int l = 1;
//	int r = L;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (pan(mid) > k)l = mid+1;
//		else r = mid;
//	}
//	cout << l << endl;
//	return 0;
//}







//int n;
//int num[30];
//int tu[30][30];
//int dp[30];
//int pat[30];
//int ret;
//int p;
//
//int bian[30];
//int pos;
//
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			int s; cin >> s;
//			if(s==1)
//			{
//				tu[i][j] = 1;//i到j可以走
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = num[i];
//		for (int j = 1; j < i; j++)
//		{
//			if (tu[j][i] == 0)continue;
//			if (dp[j] + num[i] > dp[i])
//			{
//				dp[i] =  dp[j] + num[i];
//				pat[i] = j;
//			}
//			
//		}
//		if (dp[i] > ret)
//		{
//			ret = dp[i]; p = i;
//		}
//	}
//	while (p != 0)
//	{
//		bian[++pos] = p;
//		p = pat[p];
//	}
//	for (int i = pos; i >= 1; i--)
//	{
//		cout << bian[i] << " ";
//	}
//	cout << endl;
//	cout << ret << endl;
//
//	return 0;
//}





//int num[50][50];
//int n;
//int main()
//{
//	cin >> n;
//	int x = 1;
//	int y = n / 2 + 1;
//	int i = 2;
//	num[x][y] = 1;
//	while (i <= n * n)
//	{
//		x--; y++;
//		if (x<1 && y>n)
//		{
//			num[2][n] = i;
//			x = 2; y = n;
//			i++; continue;
//		}
//		if (x < 1)
//		{
//			num[n][y] = i;
//			x = n; 
//			i++; continue;
//		}
//		if (y > n)
//		{
//			num[x][1] = i;
//			y = 1;
//			i++;
//			continue;
//		}
//		if (num[x][y] != 0)
//		{
//			num[x + 2][y - 1] = i;
//			i++;
//			x = x + 2; y = y - 1;
//			continue;
//		}
//		num[x][y] = i;
//		i++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << num[i][j] << " ";
//		}
//		cout << endl;
//
//	}
//	return 0;
//}





//int n; int m;
//struct node
//{
//	int t; int x; int y;
//}rat[10010];
//int f[10010];
//int ret;
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> rat[i].t >> rat[i].x >> rat[i].y;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		f[i] = 1;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j < i; j++)
//		{
//			if (rat[i].t - rat[j].t >= abs(rat[i].x - rat[j].x) + abs(rat[i].y - rat[j].y))
//			{
//				f[i] = max(f[i], f[j] + 1);
//			}
//		}
//		ret = max(ret, f[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}








//int tu[310][310];
//int tim[310][310];
//queue<pair<int, int>> qu;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= 305; i++)
//	{
//		for (int j = 0; j <= 305; j++)
//		{
//			tu[i][j] = 0x3f3f3f3f;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		tu[a][b] = min(tu[a][b],c);
//		tu[a+1][b] = min(tu[a + 1][b],c);
//		if(a-1>=0)tu[a-1][b] =min(tu[a - 1][b], c);
//		tu[a][b+1] = min(c, tu[a][b + 1]);
//		if(b-1>=0)tu[a][b-1] = min(tu[a][b - 1],c);
//	}
//	memset(tim, 0x3f, sizeof(tim));
//	qu.push({ 0,0 });
//	tim[0][0] = 0;
//	if (tu[0][0] == 0x3f3f3f3f)
//	{
//		cout << 0 << endl; return 0;
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		if (tu[a][b] == 0x3f3f3f3f)
//		{
//			cout << tim[a][b] << endl;
//			return 0;
//		}
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i];
//			int y = b + dy[i];
//			if (x < 0 || y < 0)continue;
//			if (tim[x][y] != 0x3f3f3f3f)continue;
//			
//			tim[x][y] = tim[a][b] + 1;
//			if (tim[x][y] >= tu[x][y])continue;
//			qu.push({ x,y });
//			
//		}
//	}
//	cout << -1 << endl;
//
//	return 0;
//}






//ll num[2000010];
//unordered_map<ll, ll> ma;//前缀和，下标
//
//int main()
//{
//	int n; cin >> n;
//	ll sum = 0;
//	for (int i = 1; i < n; i++)
//	{
//		num[i] = num[i - 1] + i;
//		ma[num[i]] = i;
//	}
//	ma[0] = 0;
//	for (ll i = 0; i < n; i++)
//	{
//		if (ma.count(n + num[i]) && (i + 1 <= ma[n + num[i]]))
//		{
//			cout << i + 1 << " " << ma[n + num[i]] << endl;
//		}
//	}
//	return 0;
//}




//int main()
//{
//	string a; string b;
//	cin >> a;
//	getchar();
//	getline(cin, b);
//	a = " " + a + " ";
//	b = " " + b + " ";
//	for (int i = 0; i < b.size(); i++)
//	{
//		b[i] = tolower(b[i]);
//	}
//	for (int i = 0; i < a.size(); i++)
//
//	{
//		a[i] = tolower(a[i]);
//	}
//	int ret = 0;
//	int f = 0;
//	if (b.find(a) == string::npos)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	else
//	{
//		f = b.find(a);
//		int pos = f;
//		while (b.find(a, pos) != string::npos)
//		{
//			pos = b.find(a, pos) + 1;
//			ret++;
//		}
//	}
//	cout << ret << " " << f << endl;
//	return 0;
//}