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





int _size;
ll m[100010]; ll r[100010];



ll qmul(ll a, ll b, ll p)
{
	ll sum = 0;
	while (b)
	{
		if (b & 1) sum = (sum + a) % p;
		b >>= 1;
		a = (a + a) % p;
	}
	return sum;
}

ll exgcd(ll a, ll b, ll& x, ll& y)
{
	if (b == 0)
	{
		x = 1, y = 0;
		return a;
	}
	ll x1, y1;
	ll d = exgcd(b, a % b, x1, y1);
	x = y1, y = x1 - a / b * y1;
	return d;
}
ll excrt()  
{
	ll M = 1; ll ret = 0;
	for (int i = 1; i <= _size; i++)
	{
		ll a = M; ll b = m[i]; ll c = r[i] - ret;
		ll x; ll y;
		ll d = exgcd(a, b, x, y);
		x = x * c / d;
		int k1 = b / d;
		x = (x % k1 + k1) % k1;
		ret = ret + x * M;
		M = x * M;
	}
	return ret;
}


int main()
{
	cin >> _size;
	for (int i = 1; i <= _size; i++)
	{
		cin >> m[i] >> r[i];
	}
	cout << excrt() << endl;
	return 0;
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   }











//int dp[1010];
//int v[1010];//体积
//int va[1010] ;//价格
//
//int main()
//{
//	int _size; cin >> _size;//种类
//	int vol; cin >> vol;//包可装下
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> v[i] >> va[i];
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = v[i]; j <= vol; j++)
//		{
//			
//			if(j>=v[i])dp[j] = max(dp[j], dp[j - v[i]] + va[i]);
//
//		}
//	}
//	cout << dp[vol] << endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0] = 0;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = v[i]; j <= vol; j++)//从0开始加
//		{
//			
//			if (j >= v[i])dp[j] = max(dp[j], dp[j - v[i]] + va[i]);
//
//		}
//	}
//	if(dp[vol]<0)
//	cout << 0;
//	else
//		cout << dp[vol];
//	return 0;
//}



















//int dp[2010][2010];
//int abil[2010];//能力
//int mod = 100000000;
//int main()
//{
//	int _size; cin >> _size;//牛总数
//	int f = 0; cin >> f;//幸运数字
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> abil[i];
//	}
//	dp[0][0] = 1;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 0; j < f; j++)
//		{
//			dp[i][j] = dp[i - 1][j]%mod;
//			dp[i][j] = (dp[i - 1][(j - abil[i] % f + f) % f] + dp[i][j]) % mod;
//		}
//	}
//	cout << dp[_size][0]-1 << endl;
//	return 0;
//}










//int dp[1100][1100];
//int m[1100];//菜价格
//int main()
//{
//	int _size;//种类
//	int mon;//钱数
//	cin >> _size >> mon;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> m[i];
//	}
//	dp[0][0] = 1;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 0; j <= mon; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= m[i])dp[i][j] += dp[i-1][j - m[i]];
//		}
//	}
//	cout << dp[_size][mon];
//	return 0;
//}














//int dp[1100][1100];
//int main()
//{
//	int n;//采药时间
//	int _size;//数目
//	int t[110];//时间
//	int val[110];//价值
//	cin >> n >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> t[i] >> val[i];
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= t[i])dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - t[i]]+val[i]);
//		}
//	}
//	cout << dp[_size][n];
//	return 0;
//}









//int dp[1010][1010];
//int v[1010]; int n[1010];//体积，可取物品价值
//
//int main()
//{
//	int v1; int n1; cin >> v1 >> n1;//物品数量，可容纳体积
//	for (int i = 1; i <= v1; i++)
//	{
//		cin >> v[i] >> n[i];
//	}
//	int ret = 0;
//	for (int i = 1; i <= v1; i++)
//	{
//		for (int j = 1; j <= n1; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if(j>=v[i])dp[i][j]=max(dp[i - 1][j], dp[i - 1][j - v[i]]+n[i]);
//			ret = max(ret, dp[i][j]);
//		}
//
//	}
//	cout << dp[v1][n1]<<endl;
//	memset(dp, -0x3f, sizeof(dp));
//	dp[0][0] = 0;
//	for (int i = 1; i <= v1; i++)
//	{
//		for (int j = 0; j <= n1; j++)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if (j >= v[i])dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - v[i]] + n[i]);
//			ret = max(ret, dp[i][j]);
//		}
//
//	}
//	if (dp[v1][n1] < 0)cout << 0;
//	else cout << dp[v1][n1];
//	return 0;
//}








//int dp[2010][2010];
//int main()
//{
//	string a; string b; cin >> a >> b;
//	a = " " + a; b = " " + b;
//	for (int i = 1; i <= a.size(); i++)dp[i][0] = i;
//	for (int j = 1; j <= b.size(); j++)dp[0][j] = j;
//	for (int i = 1; i <= a.size(); i++)
//	{
//		for (int j = 1; j <= b.size(); j++)
//		{
//			
//			if (a[i] == b[j])
//			{
//				dp[i][j] = dp[i - 1][j - 1];
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j] + 1;
//				dp[i][j] = min(dp[i][j], dp[i][j-1] + 1);
//				dp[i][j] = min(dp[i][j], dp[i-1][j - 1] + 1);
//			}
//		}
//	}
//	cout << dp[a.size()][b.size()];
//	return 0;
//}











//int dp[5010][5010];
//int main()
//{
//	string a; string b;
//	while (cin >> a >> b)
//	{
//		int n = a.size(); int m = b.size();
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				if (a[i - 1] == b[j - 1])dp[i][j] = dp[i - 1][j - 1] + 1;
//				else
//				{
//					dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
//				}
//			}
//		}
//		cout << dp[n][m] << endl;
//	}
//
//
//
//	return 0;
//}










//int a[200];
//int dp[200];
//int dp2[200];
//
//
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <=_size; i++)
//	{
//		dp[i] = 1;
//		for(int j = 1; j < i; j++)
//		{
//			if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
//		}
//	}
//	int m = 0;
//	for (int i = _size; i >= 1; i--)
//	{
//		dp2[i] = 1;
//		for (int j = _size; j >i; j--)
//		{
//			if (a[j] < a[i])dp2[i] = max(dp2[i], dp2[j] + 1);
//		}
//	}
//	/*int ret = 10000;
//	for (int i = 1; i <= _size; i++)
//	{
//		ret = min(ret, _size - dp[i] - dp2[i]+1);
//	}
//	cout << ret << endl;*/
//	int ret = 0;
//	for (int i = 1; i <= _size; i++)
//	{
//		ret = max(ret,dp[i] + dp2[i]);
//	}
//	cout << _size - ret + 1 << endl;
//	return 0;
//}



//int a[100010]; int dp[100010];
//int len;
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 1; i <= _size; i++)cin >> a[i];
//	for (int i = 1; i <= _size; i++)
//	{
//		if (len == 0 || a[i] > dp[len])dp[++len] = a[i];
//		else
//		{
//			int left = 1; int right = len; 
//			while (left < right)
//			{
//				int mid = (left + right) / 2;
//				if (dp[mid] >=a[i])right = mid;
//				else left = mid + 1;
//			}
//			dp[left] = a[i];
//		}
//	}
//	cout << len << endl;
//	return 0;
//}






//int a[5010];
//int dp[5010];
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> a[i];
//	}
//	int ret = 1;
//	for (int i = 1; i <= _size; i++)
//	{
//		dp[i] = 1;//记得
//		for (int j = 1; j <= i; j++)
//		{
//			if (a[j] < a[i])dp[i] = max(dp[i], dp[j] + 1);
//		}
//		ret = max(ret, dp[i]);
//	}
//	cout << ret;
//}




//ll a[15][15];
//int dp[40][15][15];//步数，横坐标，横坐标
//int main()
//{
//	int nn = 0; cin >> nn;
//	int x; int y; int n;
//	while (cin >> x >> y >> n, x, y, n)
//	{
//		a[x][y] = n;
//	}
//	for (int s = 2; s <= 2 * nn; s++)
//	{
//		for (int i1 = 1; i1 <= nn; i1++)
//		{
//			for (int i2 = 1; i2 <= nn; i2++)
//			{
//				int j1 = s - i1; int j2 = s - i2;
//				if (i1<1 || j1>nn || i2<1 || j2>nn)continue;
//				dp[s][i1][i2] = dp[s - 1][i1][i2];//取最大值
//				dp[s][i1][i2] = max(dp[s][i1][i2], dp[s - 1][i1-1][i2]);
//				dp[s][i1][i2] = max(dp[s][i1][i2], dp[s - 1][i1][i2 - 1]);
//				dp[s][i1][i2] = max(dp[s][i1][i2], dp[s - 1][i1 - 1][i2 - 1]);
//				if (i1 == i2)dp[s][i1][i2] += a[i1][j1];
//				else
//				{
//					dp[s][i1][i2] = a[i1][j1]+a[i2][j2]+ dp[s][i1][i2];
//				}
//			}
//		}
//	}
//	cout << dp[2 * nn][nn][nn];
//	
//	return 0;
//}




//ll f[3010][3010];
//
//int x1, wy1; int x2, y2;
//
//bool check(int i, int j)
//{
//	int d = abs(x1 - i) + abs(wy1 - j);
//	if (d == 3 && i != x1 && j != wy1)return true;
//	else if (i == x1 && j == wy1)return true;
//	return false;
//}
//
//
//
//int main()
//{
//	cin >> x2 >> y2 >> x1 >>wy1;
//	x1++; wy1++; x2++; y2++;
//	f[0][1] = 1;
//	for (int i = 1; i <= x2; i++)
//	{
//		for (int j = 1; j <= y2; j++)
//		{
//			if (check(i, j))continue;
//			f[i][j] = f[i - 1][j] + f[i][j - 1];
//		}
//	}
//
//	cout << f[x2][y2] << endl;
//
//	return 0;
//}







//int a[3010][3010];
//int f[3010][3010];
//int n; int m;
//
//int main()
//{
//	scanf("%d%d", &n, &m);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	f[n][0] = 1;
//	for (int i = n; i > 0; i--)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == 0)f[i][j] = (f[i][j - 1] + f[i + 1][j])%2333;
//			
//		}
//	}
//	printf("%d", f[1][m]);
//	return 0;
//}

