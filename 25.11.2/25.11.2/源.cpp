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
typedef unsigned long long ull;
typedef long long ll;

int f[10010];

struct node
{
	int pri;
	int val;
}cla[10010];
int n; int m; int w;
int root[10010];
int pos;
bool inr[10010];
int dp[10010];
int sum;
int _find(int s)
{
	return s == f[s] ? s : f[s] = _find(f[s]);
}
void uni(int x, int y)
{
	int fx = _find(x); int fy = _find(y);
	f[fx] = fy;
}

int main()
{
	
	cin >> n >> m >> w;
	for (int i = 1; i <= n; i++)f[i] = i;
	for (int i = 1; i <= n; i++)
	{
		cin >> cla[i].pri >> cla[i].val;
		sum += cla[i].val;
	}
	for (int i = 1; i <= m; i++)
	{
		int a; int b; cin >> a >> b;
		uni(a, b);
	}
	for (int i = 1; i <= n; i++)
	{
		int fi = _find(i);
		if (fi != i)
		{
			cla[fi].pri += cla[i].pri;
			cla[fi].val += cla[i].val;
			
		}
		if (!inr[fi])
		{
			inr[fi] = true;
			root[++pos] = fi;
		}
	}
	for (int i = 1; i <= pos; i++)
	{
		for (int j = w; j >= cla[root[i]].pri; j--)
		{
			dp[j] = max(dp[j], dp[j - cla[root[i]].pri] + cla[root[i]].val);
		}
	}
	cout << dp[w];
	return 0;
}





//int num[500010];
//int n;
//int tmp[500010];
//ll ret;
//void merge(int l,int r)
//{
//	if (l >= r)return;
//	int mid = (l + r) / 2;
//	int l1 = l; int r1 = mid;
//	int l2 = mid + 1; int r2 = r;
//	int pos = l;
//	merge(l1, r1);
//	merge(l2, r2);
//	while (l1 <= r1 && l2 <= r2)
//	{
//		if (num[l1] <= num[l2])
//		{
//			tmp[pos++] = num[l1++];
//		}
//		else
//		{
//			tmp[pos++] = num[l2++];
//			ret += (mid - l1 + 1);
//		}
//
//	}
//	while (l1 <= r1)
//	{
//		tmp[pos++] = num[l1++];
//	}
//	while (l2 <= r2)
//	{
//		tmp[pos++] = num[l2++];
//	}
//	for (int i = l; i <= r; i++)
//	{
//		num[i] = tmp[i];
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	merge(1,n);
//	cout << ret << endl;
//	return 0;
//}






//ll dp[60000];
//int n; ll m;
//int k[300];
//int c[300];
//int main()
//{
//	int sum = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> k[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> c[i];
//		sum += k[i] * c[i];
//	}
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = sum; j >= c[i]; j--)
//		{
//			for (int l = 0; l <= k[i] && l * c[i] <= j; l++)
//			{
//				dp[j] = max(dp[j], dp[j - c[i] * l] * l);
//
//			}
//		}
//	}
//	for (int i = 1; i <= sum; i++)
//	{
//		if (dp[i] >= m)
//		{
//			cout << i << endl;
//			return 0;
//		}
//	}
//	return 0;
//}



//int num[10010];
//int n; int I; int h; int r;
//set<pair<int, int>> se;
//int main()
//{
//	cin >> n >> I >> h >> r;
//	for(int i = 1; i <= r; i++)
//	{
//		int a; int b; cin >> a >> b;
//		int ma = a; int mi = b;
//		if (a < b)
//		{
//			ma = b; mi = a;
//		}
//		if(se.count({mi,ma}))continue;
//		num[mi+1]--; num[ma]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] += num[i - 1];
//		cout << num[i] + h << endl;
//	}
//	return 0;
//}




//int n; int m;
//int tu[55][55];
//int dp[110][55][55];
//int main()
//{
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int p = 2; p <= n + m; p++)
//	{
//		for (int i = 1; i <= m; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				int i1 = p - i; int j1 = p - j;
//				if (i == j && p != m+n)continue;
//				if (i1<1 || j1<1 || i1>n || j1>n)continue;
//				dp[p][i][j] = dp[p - 1][i][j];
//				dp[p][i][j] = max(dp[p][i][j], dp[p-1][i-1][j]);
//				dp[p][i][j] = max(dp[p][i][j], dp[p-1][i][j-1]);
//				dp[p][i][j] = max(dp[p][i][j], dp[p-1][i-1][j-1]);
//				dp[p][i][j] += tu[i][i1] + tu[j][j1];
//			}
//		}
//	}
//	cout << dp[n + m][m][m];
//	return 0;
//}




//int need[30];
//int v; int n;
//int liao[30][20];
//int cnt;//当前袋数
//int path;//记录经过
//int pos=30;//可以方案的最小袋数
//int ret;//最小方案的经过
//
//bool ok()
//{
//	for (int i = 1; i <= v; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= n; j++)
//		{
//			if (((path) >> j) & 1)sum += liao[j][i];
//		}
//		if (sum < need[i])return false;
//	}
//	return true;
//}
//
//
//void dfs(int s)
//{
//	if (cnt >= pos)return;
//	if (ok())
//	{
//		ret = path;
//		pos = cnt;
//		return;
//	}
//	if (s > n)return;
//	path |= (1 << s);
//	cnt++;
//	dfs(s + 1);
//	path &= (~ (1 << s));
//	cnt--;
//	dfs(s + 1);
//}
//
//int main()
//{
//	cin >> v;
//	for (int i = 1; i <= v; i++)
//	{
//		cin >> need[i];
//	}
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= v; j++)
//		{
//			cin >> liao[i][j];
//		}
//	}
//	dfs(1);
//	cout << pos << " ";
//	for (int i = 1; i <= n; i++)
//	{
//		if ((ret >> i) & 1)
//			cout << i << " ";
//	}
//	return 0;
//}








//int dp[3010][40];
//int ap[3010];
//int n; int w;
//int main()
//{
//	cin >> n >> w;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> ap[i];
//	}
//	//开始在1位置
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= w; j++)
//		{
//			int c = 0;
//			if ((j % 2 == 0 && ap[i] == 1) || (j % 2 == 1 && ap[i] == 2))c = 1;
//			dp[i][j] = dp[i - 1][j] + c;
//			if (j > 0)dp[i][j] = max(dp[i][j], dp[i - 1][j - 1] + c);
//			//if (j % 2 == 0)//t在1位置
//			//	dp1[i][j] = max(dp1[i - 1][j] + (ap[i] == 1 ? 1 : 0), dp1[i - 1][j - 1] + (ap[i] == 1 ? 0 : 1));
//			//else 
//			//	dp1[i][j] = max(dp1[i - 1][j] + (ap[i] == 1 ? 0 : 1), dp1[i - 1][j - 1] + (ap[i] == 1 ? 1 : 0));
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i <= w; i++)
//	{
//		ret = max(dp[n][i], ret);
//	}
//	cout << ret << endl;
//	return 0;
//}






//int num[50010];
//int f[50010];//(1,i]最大值
//int g[50010];//[i,n)最大值
//int main()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	f[1] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + n + 1);
//	for (int i = 2; i <= n; i++)
//	{
//		int r = 0;
//		for (int j = 1; j <= i; j++)
//		{
//			if (num[j] >= num[i] - k)
//			{
//				r = max(i - j + 1, 0);
//				break;
//			}
//		}
//		f[i] = max(f[i - 1], r);
//	}
//	g[n] = 1;
//	for (int i = n-1; i >= 1; i--)
//	{
//		int r = 0;
//		for (int j = n; j >= i; j--)
//		{
//			if (num[j] - k <= num[i])
//			{
//				r = max(j - i + 1, 0);
//				break;
//			}
//		}
//		g[i] = max(g[i + 1], r);
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = max(ret, f[i - 1] + g[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}






//int cha[1010];
//
//int _find(int s)
//{
//	return s == cha[s] ? s : cha[s] = _find(cha[s]);
//}
//void uni(int x, int y)
//{
//	int fx = _find(x); int fy = _find(y);
//	cha[fx] = fy;
//}
//
//int main()
//{
//	int n; int m;
//	while (cin >> n)
//	{
//		if (n == 0)break;
//		cin >> m;
//		for (int i = 1; i <= n; i++)
//		{
//			cha[i] = i;
//		}
//		for (int i = 1; i <= m; i++)
//		{
//			int x; int y; cin >> x >> y;
//			uni(x, y);
//		}
//		int cnt = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			int fi = _find(i);
//			if (fi == i)cnt++;
//		}
//		cout << cnt-1 << endl;
//	}
//	return 0;
//}




//int n; int m;
//bool up[10010][110];
//ll door[10010][110];
//int cnt[10010];
//int mod = 20123;
//int main()
//{
//	ll ret = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			int a; int b; cin >> a >> b;
//			if (a == 1)
//			{
//				up[i][j] = 1;
//				cnt[i]++;
//			}
//			door[i][j] = b;
//		}
//	}
//	int p; cin >> p;
//	for (int i = 1; i <= n; i++)
//	{
//		ret = (ret + door[i][p]) % mod;
//		int s = door[i][p];
//		s = s % cnt[i];
//		if (s == 0)s = cnt[i];
//		int pos = p;
//		while (1)
//		{
//			if (up[i][pos])s--;
//			if (s == 0)break;
//			pos++;
//			if (pos == m)
//				pos = 0;
//		}
//		p = pos;
//	}
//	cout << ret << endl;
//	return 0;
//}






//ll dp[600000];
//int n; ll m;
//int num[300];//皮肤数
//int pri[300];//价格
//int main()
//{
//	int sum = 0;//总价格
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> pri[i];
//		sum += num[i] * pri[i];
//	}
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = sum; j >=pri[i];j--)
//		{
//			for (int k = 0; k <= num[i] && k * pri[i] <= j; k++)
//			{
//				dp[j] = max(dp[j], dp[j - k * pri[i]] * k);
//			}
//		}
//	}
//	for (int i = 1; i <= sum; i++)
//	{
//		if (dp[i] >= m)
//		{
//			cout << i << endl;
//			return 0;
//		}
//	}
//	return 0;
//}





//int cha[10010];
//int n; int I; int h; int r;
//
//int main()
//{
//	set<pair<int, int>> se;
//	cin >> n >> I >> h >> r;
//	for (int i = 1; i <= r; i++)
//	{
//		int a; int b;
//		cin >> a >> b;
//
//		int mi = a; int ma = b;
//		if (a > b)
//		{
//			mi = b; ma = a;
//		}
//		if (se.count({ mi,ma }))
//		{
//			continue;
//		}
//		se.insert({ mi,ma });
//		cha[mi + 1]--;
//		cha[ma]++;
//	}
//	ll sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cha[i] = cha[i] + cha[i - 1];
//		cout << cha[i] + h << endl;
//	}
//	return 0;
//}



//bool tu[1010][1010];//1到2是否有路
//int k; int n; int m;//牛数牧场数路数
//int arr[1010];//可以到达
//bool mu[1010];//哪个牧场有奶牛
//int pos;//记录有牛牧场数
//bool gone[1010];
//void bfs(int s)
//{
//	memset(gone, 0, sizeof(gone));
//	queue<int> qu;
//	qu.push(s);
//	gone[s] = true;
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		arr[a]++;
//		for (int i = 1; i <= n; i++)
//		{
//			if (tu[a][i] && !gone[i])
//			{
//				qu.push(i);
//				gone[i] = true;
//			}
//
//		}
//	}
//}
//
//int main()
//{
//	cin >> k >> n >> m;
//	for (int i = 1; i<= k; i++)
//	{
//		int s; cin >> s;
//		if (mu[s] == false)pos++;
//		mu[s] = true;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[a][b] = true;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (mu[i])
//		{
//			bfs(i);
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (arr[i] == pos)
//		{
//			ret++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}








//ll num[200010];
//ll sum;
//ll n; ll x;
//
//int main()
//{
//	cin >> n >> x;
//	ll ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int sum = num[i] + num[i + 1];
//		if(sum>x)
//		{
//			ret += sum - x;
//			num[i + 1] -= (sum - x);
//		}
//		/*ret += sum - x;
//		if (x > num[i + 1])
//		{
//			num[i + 1] = 0;
//			num[i] = num[i] - (x - num[i + 1]);
//		}
//		else
//			num[i + 1] -= x;*/
//	}
//	cout << ret << endl;
//	return 0;
//}