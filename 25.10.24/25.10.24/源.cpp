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

int n; int m;//天数，订单数
ll room[1000010];
ll dp[1000010];
ll tmp[1000010];
struct node
{
	ll ro;//房间数
	ll b; ll e;//开始结束
}ord[1000010];

bool ca(ll s)
{
	for (int i = 1; i <= n; i++)
	{
		dp[i] = room[i] - room[i - 1];
	}
	for (int i = 1; i <= s; i++)
	{
		dp[ord[i].b] -= ord[i].ro;
		dp[ord[i].e+1] += ord[i].ro;
	}
	for (int i = 1; i <= n; i++)
	{
		tmp[i] = tmp[i - 1] + dp[i];
		if (tmp[i] < 0)return false;

	}
	return true;
}


int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> room[i];
	}
	for (int i = 1; i <= m; i++)
	{
		cin >> ord[i].ro >> ord[i].b >> ord[i].e;
	}
	ll l = 1; ll r = m;
	while (l < r)
	{
		ll mid = (l + r) / 2;
		if (ca(mid))l = mid + 1;
		else r = mid;
	}
	if (l != m)
	{
		cout << -1 << endl;
		cout << l << endl;
	}
	else cout << 0 << endl;
	return 0;
}




//int n; int m;
//struct node
//{
//	int pri;
//	int rat;
//}obj[40];
//ll dp[30010];
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> obj[i].pri >> obj[i].rat;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = n; j >= obj[i].pri; j--)
//		{
//			dp[j] = max(dp[j], dp[j - obj[i].pri] + obj[i].pri * obj[i].rat);
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}





//int f[10010];//并查集
//int n; int m; int w;//云，搭配，钱
//struct node
//{
//	int pri; int val;
//}yun[10010];
//int root[10010];//根节点存储
//int pos;//根节点数量
//int dp[10010];
//unordered_map<int, int> ro;//是否有根节点
//
//int _find(int s)
//{
//	return (f[s] == s) ? s : f[s] = _find(f[s]);//注意_find(f[s]
//}
//
//int main()
//{
//	cin >> n >> m >> w;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> yun[i].pri >> yun[i].val;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int x; int y; cin >> x >> y;
//		int fx = _find(x); int fy = _find(y);
//		if (fx != fy)
//		{
//			f[fy] = fx;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (_find(i) == i)
//		{
//			root[++pos] = i;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int fi = _find(i);
//		if (fi != i)
//		{
//			yun[fi].val += yun[i].val;
//			yun[fi].pri += yun[i].pri;
//		}
//	}
//	for (int i = 1; i <= pos; i++)
//	{
//		for (int j = w; j >= yun[root[i]].pri; j--)
//		{
//			dp[j] = max(dp[j], dp[j - yun[root[i]].pri] + yun[root[i]].val);
//		}
//	}
//	cout << dp[w];
//	return 0;
//}




//int num[500010];
//int tmp[500010];
//ll ret;
//void merge(int l, int r)
//{
//	if (l >= r)return;
//	int mid = (l + r) / 2;
//	int l1 = l; int l2 = mid + 1;
//	int r1 = mid; int r2 = r;
//	int pos = l;
//	merge(l1, r1); merge(l2, r2);
//	while (l1 <= r1 && l2 <= r2)
//	{
//		if (num[l1] <= num[l2])
//		{
//			tmp[pos++] = num[l1++];
//		}
//		else
//		{
//			ret += (mid - l1 + 1);
//			tmp[pos++] = num[l1++];
//		}
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
//
//}
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	merge(1, n);
//	cout << ret << endl;
//	return 0;
//}






//int n; int m; int k;
//int tu[6010][6010];
//int dp[6010][6010];
//ll ret;
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		int x; int y; int z; 
//		scanf("%d%d%d", &x, &y, &z);
//		tu[x][y] = z;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			dp[i][j] += tu[i][j];
//			dp[i + 1][j] -= tu[i][j];
//			dp[i][j + 1] -= tu[i][j];
//			dp[i + 1][j + 1] += tu[i][j];
//		}
//	}
//	for (int i = 1; i <= n - k + 1; i++)
//	{
//		for (int j = 1; j <= n - k + 1; j++)
//		{
//			
//			int a = dp[i][j];
//			if (a == 0)continue;
//			ret += abs(a);
//			dp[i][j]-= a;
//			dp[i + k][j] += a;
//			dp[i][j+k] += a;
//			dp[i + k][j + k] -= a;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			if (dp[i][j]-dp[i-1][j]-dp[i][j-1]+dp[i-1][j-1] != 0)
//			{
//				cout << -1 << endl;
//				return 0;
//			}
//		}
//	}
//	printf("%lld", ret);
//	return 0;
//}





//int tu[200010];
//int deg[200010];//度
//bool gone[200010];
//
//
//int bfs(int s)
//{
//	int ret = 0;
//	queue<int> qu;
//	qu.push(s);
//	gone[s] = true;
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		ret++;
//		if (tu[a] == s)return ret;
//		qu.push(tu[a]);
//		gone[tu[a]] = true;
//	}
//}
//
//int main()
//{
//	queue<int> qu;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> tu[i];
//		deg[tu[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (deg[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front();
//		deg[tu[a]]--; 
//		qu.pop();
//		gone[a] = true;
//		if (deg[tu[a]] == 0)qu.push(tu[a]);
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!gone[i])
//		{
//			ret=min(bfs(i),ret);
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}






//ll ret = 0;
//
//void eff(ll a, ll b)
//{
//	if (b == 0)return;
//	if (a == b)
//	{
//		ret+=(4 * a);
//		return;
//	}
//	ret += a / b * b * 4;
//	ll tmp = a % b;
//	a = b;b = tmp;
//	eff(a, b);
//
//
//}
//
//int main()
//{
//	ll n; ll m;
//	cin >> n >> m;
//	ll mi = n;
//	ll ma = m;
//	if (n > m)
//	{
//		mi = m;
//		ma = n;
//	}
//	ret += ma / mi * mi * 4;
//	ma = ma % mi;
//	eff(mi, ma);
//	cout << ret << endl;
//	return 0;
//}





//int main()
//{
//	int n; cin >> n;
//	string a; cin >> a;
//	if (n % 2 == 0)
//	{
//		for (int i = 1; i < n / 2; i++)
//		{
//			cout << a[2 * i - 2] << a[2 * i - 1] << "-";
//		}
//		cout << a[a.size() - 2] << a[a.size() - 1];
//	}
//	else
//	{
//		for (int i = 1; i < n / 2; i++)
//		{
//			cout << a[2 * i - 2] << a[2 * i - 1] << "-";
//		}
//		cout << a[a.size() - 3] << a[a.size() - 2] << a[a.size() - 1];
//	}
//	return 0;
//}






//ll room[1000010];//每天教室
//ll dp[1000010];//差分
//int n; int m;//天数，订单量
//ll e[1000010];
//struct node
//{
//	int x; int y; int z;
//}dan[1000010];
//
//bool hol(ll s)
//{
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = room[i] - room[i - 1];
//	}
//	for (int i = 1; i <= s; i++)
//	{
//		dp[dan[i].y] -= dan[i].x; dp[dan[i].z + 1] += dan[i].x;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		dp[i] = dp[i - 1] + dp[i];
//		if (dp[i] < 0)return false;
//	}
//	return true;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> room[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int x; int y; int z; cin >> dan[i].x >> dan[i].y >>dan[i]. z;
//		
//	}
//	
//	ll l = 1;
//	ll r = m;
//	while (l < r)
//	{
//		ll mid = (l + r) / 2;
//		if (hol(mid)) l = mid+1;
//		else r = mid;
//	}
//	if (l != m)
//	{
//		cout << -1 << endl;
//		cout << l << endl;
//	}
//	else cout << 0 << endl;
//	
//	/*for (int i = 1; i <= n; i++)
//	{
//		e[i] = e[i - 1] + dp[i];
//		if (e[i] < 0)
//		{
//			cout << -1 << endl;
//			cout << i << endl;
//			return 0;
//		}
//	}*/
//	//cout << 0 << endl;
//	return 0;
//}






//struct node
//{
//	int pri; int rat;
//}pro[30];
//int n; int m;//钱，物品
//int dp[30010];
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> pro[i].pri >> pro[i].rat;
//	}
//	//memset(dp, 0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = n; j >= pro[i].pri; j--)
//		{
//			dp[j] = max(dp[j], dp[j - pro[i].pri] + pro[i].pri * pro[i].rat);
//		}
//	}
//	cout << dp[n];
//
//	return 0;
//}






//int n; int m;//牛奶总量，农个数
//struct node
//{
//	int pri;
//	int all;//单价，总量
//}peo[5010];
//
//bool cmp(node& a1, node& a2)
//{
//	return a1.pri < a2.pri;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> peo[i].pri >> peo[i].all;
//	}
//	sort(peo + 1, peo + 1 + m,cmp);
//	int ret = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		if (peo[i].all < n)
//		{
//			ret += peo[i].all * peo[i].pri;
//			n -= peo[i].all;
//		}
//		else
//		{
//			ret += (n) * peo[i].pri;
//			break;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}




//int dp[2000010];
//int pri[5010];//单价
//int all[5010];//总量
//int n; int m;//牛奶总量，农个数
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> pri[i] >> all[i];
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		for (int j = n; j >= 0; j--)//牛奶总量
//		{
//			if (dp[j] != 0x3f3f3f3f)
//			{
//				for (int k = 1; k <= all[i] && k+j <=n ; k++)
//				{
//					dp[j+k] = min(dp[j+k], dp[j] + k * pri[i]);
//				}
//			}
//			
//		}
//	}
//	cout << dp[n] << endl;
//	return 0;
//}