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


ll num[200010];
ll n; ll k; ll x;
ll check(int s)
{
	ll ret = 0;
	ret += max(num[1] - s + 1, (ll)0);
	for (int i = 2; i <= n; i++)
	{
		ret += max(num[i] - num[i - 1] - 2 * s + 1, (ll)0);
	}
	ret += max(x - num[n] - s + 1, (ll)0);
	return ret;
	/*if (num[1] >= s)ret++;
	for (int i = 2; i <= n; i++)
	{
		if (num[i] - num[i - 1] > 2 * s)
			ret += 2;
		else if (num[i] - num[i - 1] == 2 * s)
			ret += 1;
	}
	if (x - num[n] >= s)ret++;
	return ret;*/
}
void print(int s)
{
	int ret = 0;
	if (num[1] - s >= 0)
	{
		for (int i = 0; i <= num[1] - s; i++)
		{
			if (ret == k)return;
			cout << i << " ";
			ret++;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (ret == k)return;
		if (num[i] - num[i - 1] - 2 * s >= 0)
		{
			if (ret == k)return;
			for (int j = num[i - 1] + s; j <= num[i] - s; j++)
			{
				cout << j << " ";
				ret++;
			}
		}
	}
	if (x - num[n] - s >= 0)
	{
		if (ret == k)return;
		for (int i = num[n] + s; i <= x; i++)
		{
			if (ret == k)return;
			cout << i << " ";
			ret++;
		}
	}
}

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
		sort(num + 1, num + 1 + n);
		num[n + 1] = x;
		int l = 0; int r = x;
		while (l < r)
		{
			int mid = l+(r - l + 1) / 2;
			if (check(mid) >= k)l = mid;
			else r = mid - 1;
		}
		print(l);
		cout << endl;
	}

	return 0;
}
//1 4 3 12 0 4 8 12
//1 3 4 9 8 7 9




//int num[1010];
//int dp[1010][10010];//统一加5000
//int main()
//{
//	memset(dp, 0x3f, sizeof(dp));
//	dp[0][5000] = 0;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int a; int b; cin >> a >> b;
//		num[i] = a - b;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = -5000; j <= 5000; j++)
//		{
//			dp[i][j + 5000] = min(dp[i - 1][j + 5000 - num[i]], dp[i - 1][j + 5000 + num[i]] + 1);
//		}
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 0; i <= 5000; i++)
//	{
//		ret = min(dp[n][i + 5000], dp[n][-i + 5000]);
//		if (ret < 0x3f3f3f3f)break;
//	}
//	cout << ret << endl;
//	return 0;
//}






//int f[40010];
//struct node
//{
//	int a; int b; int nu;
//}ang[100010];
//int n; int m;
//
//bool cmp(node& a, node& b)
//{
//	return a.nu > b.nu;
//}
//
//int _find(int s)
//{
//	return s == f[s] ? s : f[s] = _find(f[s]);
//}
//void uni(int a, int b)
//{
//	int fa = _find(a);
//	int fb = _find(b);
//	f[fb] = fa;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> ang[i].a >> ang[i].b >> ang[i].nu;
//	}
//	sort(ang + 1, ang + m, cmp);
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int a = ang[i].a; int b = ang[i].b;
//		int nu = ang[i].nu;
//		uni(a, b + n);
//		uni(a + n, b);
//		if (_find(a) == _find(b))
//		{
//			cout << nu << endl;
//			return 0;
//		}
//	}
//	cout << 0 << endl;
//	return 0;
//}




//int L; int n; int k;
//int road[100010];
//
//int check(int s)
//{
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		/*if(road[i]-road[i-1]>s)*/
//		ret += (road[i] - road[i - 1] - 1) / s;
//	}
//	/*ret += (L - road[n] - 1) / s;*/
//	return ret;
//}
//
//
//int main()
//{
//	cin >> L >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> road[i];
//	}
//	int l = 1; int r = L;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid) > k)l = mid + 1;
//		else r = mid;
//	}
//	cout << l << endl;
//	return 0;
//}





//int num[30];
//int dp[30];
//int tu[30][30];
//int n;
//int pat[30];
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
//			cin >> tu[i][j];
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
//				dp[i] = dp[j] + num[i];
//				pat[i] = j;
//			}
//		}
//
//	}
//	int p = 0;
//	int donp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dp[i] > p)
//		{
//			p = dp[i];
//			donp = i;
//		}
//	}
//
//	int a = donp;
//	int zan[30] = { 0 };
//	int pos = 0;
//	while (a != 0)
//	{
//		zan[++pos] = a;
//		a = pat[a];
//	}
//	for (int i = 1; i <=pos; i++)
//	{
//		cout << zan[i] << " ";
//	}
//	cout << endl;
//	cout << p << endl;
//	return 0;
//}





//int dp[110][55][55];
//int n; int m;
//int tu[55][55];
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
//	for (int i = 2; i <= n + m ; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			for (int k = 1; k <= m; k++)
//			{
//				int j1 = i - j;
//				int k1 = i - k;
//				if (j == k && i != m+n)continue;
//				if (j1<1 || j1>n || k1<1 || k1>n)continue;
//				dp[i][j][k] = dp[i - 1][j][k];
//				dp[i][j][k] = max(dp[i][j][k], dp[i-1][j][k - 1]);
//				dp[i][j][k] = max(dp[i][j][k], dp[i-1][j - 1][k]);
//				dp[i][j][k] = max(dp[i][j][k], dp[i-1][j - 1][k - 1]);
//				dp[i][j][k] += tu[j][j1] + tu[k][k1];
//			}
//		}
//	}
//	cout << dp[m + n][m][m] << endl;
//	return 0;
//}





//int v; int g;
//int need[30];
//int liao[30][30];
//int dp[30][30];
//int path;//路径
//int cnt;//记录当前选了多少
//int ret = 30;
//int st;
//bool check()
//{
//	for (int i = 1; i <= v; i++)
//	{
//		int sum = 0;
//		for (int j = 1; j <= g; j++)
//		{
//			if ((path >> j) & 1)sum += liao[j][i];
//		}
//		if (sum < need[i])return false;
//	}
//	return true;
//}
//void dfs(int s)
//{
//	if (cnt >= ret)return;
//	if (check())
//	{
//		ret = cnt;
//		st = path;
//		return;
//	}
//	if (s > g)return;
//	cnt++;
//	path |= (1 << s);
//	dfs(s + 1);
//	cnt--;
//	path &= ~(1 << s);
//	
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
//	cin >> g;
//	for (int i = 1; i <= g; i++)
//	{
//		for (int j = 1; j <= v; j++)
//		{
//			cin >> liao[i][j];
//		}
//	}
//	dfs(1);
//	cout << ret << " ";
//	for (int i = 1; i <= g; i++)
//	{
//		if ((st >> i) & 1)cout << i << " ";
//	}
//	return 0;
//}







//struct node
//{
//	int tim; int val;
//}peo[1010];
//bool cmp(node& a, node& b)
//{
//	if (a.tim == b.tim)
//	{
//		return a.val < b.val;
//	}
//	else
//	{
//		return a.tim < b.tim;
//	}
//}
//int main()
//{
//	int n; cin >> n;
//	double sum = 0;
//	double wait = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> peo[i].tim;
//		peo[i].val = i;
//		
//		
//	}
//	sort(peo + 1, peo + 1 + n, cmp);
//	
//	for (int i = 1; i <= n; i++)
//	{
//		cout << peo[i].val << " ";
//		sum += wait;
//		wait += peo[i].tim;
//	}
//	double r = sum / n;
//	cout << endl;
//	printf("%.2lf\n", r);
//	return 0;
//}





//struct node
//{
//	int up; int down;
//}pai[1010];
//int n;
//int sum;
//int num[1010];
//int dp[1010][10010];//第二维数组统一加上5000
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> pai[i].up >> pai[i].down;
//		num[i] = pai[i].up - pai[i].down;
//		sum += num[i];
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	dp[0][5000] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = -5000; j <= 5000; j++)
//		{
//			dp[i][j + 5000] = min(dp[i - 1][j + 5000 - num[i]], dp[i - 1][j + 5000 + num[i]] + 1);
//		}
//	}
//	int ret = 0X3f3f3f3f;
//	for (int j = 0; j <= 5000; j++)
//	{
//		ret = min(dp[n][j + 5000], dp[n][-j + 5000]);
//		if (ret < 0x3f3f3f3f)break;
//	}
//	cout << ret << endl;
//	/*int ma = 0;
//	for (int j = 0; j <= abs(sum); j++)
//	{
//		if (dp[n][j] != 0x3f3f3f3f)
//		{
//			ret = dp[n][j+5000];
//			ma = j;
//			break;
//		}
//	}
//	for (int j = 0; j >= -abs(sum); j--)
//	{
//		if (dp[n][j] != 0x3f3f3f3f)
//		{
//			if (ma < abs(j))
//			{
//				ret = dp[n][j+5000];
//			}
//			else if (ma == abs(j))
//			{
//				ret = min(dp[n][j + 5000],ret);
//			}
//			break;
//		}
//	}*/
//	return 0;
//}










//struct node
//{
//	int up; int down;
//}pai[1010];
//int n;
//int sum;
//int num[1010];
//int dp[1010][10010];//第二维数组统一加上5000
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> pai[i].up >> pai[i].down;
//		num[i] = pai[i].up - pai[i].down;
//		sum += num[i];
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	dp[0][5000] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = -abs(sum); j <= abs(sum); j++)
//		{
//			dp[i][j + 5000] = min(dp[i - 1][j + 5000 - num[i]], dp[i - 1][j + 5000 + num[i]] + 1);
//		}
//	}
//	int ret = 0X3f3f3f3f;
//	for (int j = 0; j <= abs(sum); j++)
//	{
//		ret = min(dp[n][j + 5000], dp[n][-j + 5000]);
//		if (ret < 0x3f3f3f3f)break;
//	}
//	cout << ret << endl;
//	/*int ma = 0;
//	for (int j = 0; j <= abs(sum); j++)
//	{
//		if (dp[n][j] != 0x3f3f3f3f)
//		{
//			ret = dp[n][j+5000];
//			ma = j;
//			break;
//		}
//	}
//	for (int j = 0; j >= -abs(sum); j--)
//	{
//		if (dp[n][j] != 0x3f3f3f3f)
//		{
//			if (ma < abs(j))
//			{
//				ret = dp[n][j+5000];
//			}
//			else if (ma == abs(j))
//			{
//				ret = min(dp[n][j + 5000],ret);
//			}
//			break;
//		}
//	}*/
//	return 0;
//}







//ll n; ll m; ll t;
//
//int main()
//{
//	int ret = 0;
//	cin >> n >> m >> t;
//	if (m<(n - 1) || m>(n - 1) * (n - 2) / 2+1)
//	{
//		cout << -1 << endl; return 0;
//	}
//	int v = n - 1;
//	if (t == n - 1)
//	{
//		v = n - 2;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == t)continue;
//		if (ret == m)break;
//		cout << t << " " << i << endl;
//		ret++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (i == t || i == v)continue;
//		if (ret == m)break;
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (j == t || j == v)continue;
//			if (ret == m)break;
//			cout << i << " " << j << endl;
//			ret++;
//		}
//	}
//	cout << t << " " << n << endl;
//	ret++;
//	for (int i = 1; i <= n - 1; i++)
//	{
//		if (ret == m)break;
//		if (i == t)continue;
//		cout << i << " " << t << endl;
//		ret++;
//	}
//	for (int i = 1; i <= n-1; i++)
//	{
//		if (ret == m)break;
//		if (i == t)continue;
//		for (int j = i + 1; j <= n - 1; j++)
//		{
//			if (ret == m)break;
//			if (j == t)continue;
//			cout << i << " " << j << endl;
//			ret++;
//		}
//		
//	}
//	return 0;
//}







//ll qow(ll a, ll b, ll c)//a^b%c
//{
//	ll ret=1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		a = a * a % c;
//		b = b >> 1;
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	int n; int m; int k; int x;
//	cin >> n >> m >> k >> x;
//	ll r = qow(10, k, n);
//	ll ret = (x % (n)+r * m % (n))%n;
//	cout << ret << endl;
//	return 0;
//}






//int num[100010];
//ll tim;
//
//int main()
//{
//	int ret = 1;
//	int n; int m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		if (num[i] - num[i - 1] > m)ret = 1;
//		else ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}