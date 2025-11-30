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
#include <chrono>
#include<random>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);
using namespace std;

int num[200010];

void solve()
{
	int n; int q; cin >> n >> q;
	unordered_map<int, int>ma;
	int M = 0;
	int ps = n;
	int n1 = 0;
	for (int i = 1; i <= ps; i++)
	{
		int s; cin >> s;
		if (s == 1)
		{
			ma[1] = 1;
			n1++;
			n--;
			continue;
		}
		num[i-n1] = s;
		M = max(num[i], M);
	}
	for (int i = 1; i <= n; i++)
	{
		int mul = 1;
		for (int j = 0; j <= 40; j++)
		{
			int k = i + j;
			if (k > n)break;
			mul *= num[k];
			//if (mul > M)break;
			if (mul > 1e9)break;
			ma[mul] = 1;
		}
	}
	for (int i = 1; i <= q; i++)
	{
		int s; cin >> s;
		if (ma[s] == 1)
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}




//bool prim[10100];
//int prime[10100]; 
//int cnt = 0;   
//bool gone[10100];
//int dist[10100];
//int cha(int s, int i, int j) 
//{
//    int power = 1;
//    for (int k = 1; k < i; k++) 
//    {
//        power *= 10;
//    }
//    int o = (s / power) % 10;
//    int ret = s - o * power + j * power;
//
//    return ret;
//}
//
//
//
//
//void getp(int n) 
//{
//    memset(prim, 0, sizeof(prim)); 
//    prim[0] = prim[1] = 1;         
//
//    for (int i = 2; i <= n; i++) 
//    {
//        if (prim[i] == 0) 
//        {        
//            prime[cnt++] = i;      
//        }
//        for (int j = 0; j < cnt && i * prime[j] <= n; j++) 
//        {
//            prim[i * prime[j]] = 1; 
//            if (i % prime[j] == 0) 
//            {
//                break;
//            }
//        }
//    }
//}
//
//
//void solve()
//{
//    for (int i = 1; i <= 10000; i++)
//    {
//        gone[i] = 0;
//        dist[i] = 0;
//    }
//	int a; int b; cin >> a >> b;
//	queue<int> qu;
//	qu.push(a);
//	while (!qu.empty())
//	{
//		int s = qu.front();
//		qu.pop();
//        if (s == b)
//        {
//            cout << dist[b] << endl;
//            return;
//        }
//        for (int i = 1; i <= 4; i++)
//        {
//            for (int j = 0; j <= 9; j++)
//            {
//                int k = cha(s, i, j);//将s第i位改为j
//                if (k == s)continue;
//                if (gone[k] || prim[k])continue;
//                dist[k] = dist[s] + 1;
//                gone[k] = 1;
//                qu.push(k);
//            }
//        }
//	}
//    cout << -1 << endl;
//}
//
//
//
//signed main()
//{
//    getp(10050);
//	int t; cin >> t;
//	while (t--)solve();
//}
//




//struct node
//{
//	int n; int val;
//}que[200010];
//int num[200010];
//
//bool cmp(node& a, node& b)
//{
//	return a.n < b.n;
//}
//int ret[200010];
//
//void solve()
//{
//	int n; int q; cin >> n >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		ret[i] = 0;
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		cin >> que[i].n;
//		que[i].val = i;
//	}
//	sort(que + 1, que + 1 + q, cmp);
//	int l; int r;
//	int mul = 1;
//	while(l<)
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//int num[200010];
//int n;
//int gap[200010];
//int pos;
//int suf[200010];
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//signed main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	for (int i = 2; i <= n; i++)
//	{
//		gap[++pos] = num[i] - num[i - 1];
//	}
//	sort(gap + 1, gap + 1 + pos, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		suf[i] = suf[i -1] + gap[i];
//	}
//	int sum = num[n] - num[1];
//	for (int i = 1; i <= n; i++)
//	{
//		cout << sum - suf[i - 1] << " ";
//	}
//	cout << endl;
//	return 0;
//}





//vector<int> tu[200010];
//int ro[200010];
//void solve()
//{
//	int n;
//	cin >> n;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		tu[i].clear();
//		ro[i] = 0;
//	}
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int a; int b;
//		cin >> a >> b;
//		tu[a].push_back(b);
//		tu[b].push_back(a);
//		ro[a]++;
//		ro[b]++;
//	}
//	queue<int> qu;
//	int ret = -0x3f3f3f3f;
//	int p = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int r = 0;
//		for (int j = 0; j < tu[i].size(); j++)
//		{
//			r += (ro[tu[i][j]] - 1);
//		}
//		if (r > ret)
//		{
//			ret = r;
//			p = i;
//		}
//	}
//	cout << p << " " << ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	
//	return 0;
//}




//int f[400010];
//
//
//void solve()
//{
//	int n;
//	for (int i = 1; i <= n * 2; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= n - 1; i++)
//	{
//		int a; int b; cin >> a >> b;
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}




//int num[200010];
//
//void solve()
//{
//	int n; int k; cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		int s; cin >> s;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



//int num[100010];
//int f[100010];
//int g[100010];
//signed main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = g[i - 1] + num[i];
//		if (i == 1)continue;
//		if (i == 2)
//		{
//			g[i] = num[i];
//			continue;
//		}
//		g[i] = max(g[i - 2] + num[i],f[i-2]+num[i]);
//	}
//	cout << max(f[n], g[n]) << endl;
//	return 0;
//}



//signed main()
//{
//	int n; int m; cin >> n >> m;
//	
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		double a; double b; double c;
//		cin >> a >> b >> c;
//		ret += max((double)0, (m * a + b - 1) / b - c);
//	}
//	cout << ret << endl;
//	return 0;
//}



//int num[110];
////int ma[110];
////int mi[110];
//
//signed main()
//{
//	int n; cin >> n;
//	int ma = 0;
//	int mi = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		ma = max(num[i], ma);
//		mi = min(mi, num[i]);
//	}
//	cout << 1 << " " << n << " " << ma - mi << endl;
//	return 0;
//}
//



//int num[200010];
//int premin[200010];
//int sufmax[200010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 0; i <= n + 3; i++)
//	{
//		premin[i] = sufmax[i] = 0;
//	}
//	premin[1] = num[1];
//	for (int i = 2; i <= n; i++)
//	{
//		premin[i] = min(premin[i - 1], num[i]);
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		sufmax[i] = max(sufmax[i + 1], num[i]);
//	}
//	int flag = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (premin[i - 1] > sufmax[i])
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}






//int num[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int premin = 0x3f3f3f3f;
//	int premax = 0;
//	int ppremin = 0;
//	int ppremax = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (num[i] == 1)break;
//		if (premin > num[i])
//		{
//			premin = num[i];
//			ppremin = i;
//		}
//	}
//	for (int j = ppremin; j <= n; j++)
//	{
//		if (num[j] == 1)break;
//		if (num[j] > premax)
//		{
//			premax = num[j];
//			ppremax = j;
//		}
//	}
//	int submax = 0;
//	int psubmax = 0;
//	for (i=i+1; i <= n; i++)
//	{
//		if (submax < num[i])
//		{
//			submax = num[i];
//			psubmax = i;
//		}
//	}
//	if (premin == 0x3f3f3f3f)premin = 0;
//	if (premin > submax)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	int flag = 1;
//	int ma = (submax, premax);
//	for (int i = 1; i <= ppremin; i++)
//	{
//		if (num[i] > ma)
//		{
//			flag = 0;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}


/*
1
8
7 8 4 6 1 2 3 5

1
6
4 2 6 5 1 3

1
6
1 3 4 5 2 6

*/


//vector<int> tu[200010];
//vector<int> pro[200010];
//int dist[200010];
//struct cmp
//{
//	bool operator()(PII& a, PII& b)
//	{
//		return a.second > b.second;
//	}
//};
//
//void solve()
//{
//	int n; int m; int k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= k; i++)
//	{
//		pro[i].clear();
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		tu[i].clear();
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dist[i] = 0x3f3f3f3f;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		pro[s].push_back(i);
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a].push_back(b);
//		tu[b].push_back(a);
//	}
//	priority_queue<PII,vector<PII>,cmp>heap;
//	heap.push({ 1,0 });
//	dist[1] = 0;
//	while (!heap.empty())
//	{
//		int a = heap.top().first;
//		int b = heap.top().second;
//		heap.pop();
//		if (dist[a] < b)continue;
//		for (int i = 0; i < tu[a].size(); i++)
//		{
//			int c = tu[a][i];
//			
//			if (dist[c] > dist[a] + 1)
//			{
//				dist[c] = dist[a] + 1;
//				heap.push({ c,dist[c] });
//			}
//			
//		}
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		int m = 0;
//		for (int j = 0; j < pro[i].size(); j++)
//		{
//			if (dist[pro[i][j]] == 0x3f3f3f3f)continue;
//			m = max(m, dist[pro[i][j]]);
//		}
//		cout << m << " ";
//	}
//	cout << endl;
//}
//
//signed main()
//{
//	solve();
//
//	return 0;
//}





//int num[200010];
//int ad[200010];
//int pre[200010];
//int sub[200010];
//void solve()
//{
//	int n; int k; cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ad[i];
//	}
//	for (int i = 0; i <= n + 4; i++)
//	{
//		pre[i] = sub[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		pre[i] = max(num[i], pre[i - 1] + num[i]);
//	}
//	for (int i = n; i >= 1; i--)
//	{
//
//		
//		sub[i] = max(sub[i + 1] + num[i], num[i]);
//	}
//	int m = -0x3f3f3f3f;
//	int p = 0;
//	if (k % 2 == 1)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			int s = pre[i] + sub[i] + ad[i] - num[i];
//			m = max(s, m);
//		}
//		cout << m << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			int s = pre[i] + sub[i] - num[i];
//			m = max(s, m);
//		}
//		cout << m << endl;
//	}
//	
//
//
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}