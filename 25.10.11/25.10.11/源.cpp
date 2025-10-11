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

ll shu[20]; ll last[20];
int _size;

ll ex(ll a, ll b, ll&x, ll&y)
{
	if (b == 0)
	{
		x = 1; y = 0;
		return a;
	}
	ll x1; ll y1;
	ll d = ex(b, a % b, x1, y1);
	x = y1; y = x1 - (a / b) * y1;
	return d;
}

ll cr(ll a, ll b, ll c)//(a*b)%c

{
	ll r = 0;
	while (b)
	{
		if (b & 1) r = (a+r) % c;
		b=b >> 1;
		a = (a + a) % c;
	}
	return r;
}


int main()
{
	ll M = 1;
	cin >> _size;
	
	for (int i = 1; i <= _size; i++)
	{
		cin >> last[i];
	}
	for (int i = 1; i <= _size; i++)
	{
		cin >> shu[i]; M *= shu[i];
	}
	ll ret = 0;
	for (int i = 1; i <= _size; i++)
	{
		ll m = M / shu[i];
		ll x; ll y;
		ex(m, shu[i], x, y);
		x = (x % shu[i] + shu[i]) % shu[i];
		ret = ((ret + cr(cr(last[i], x, M), m, M)) % M + M) % M;
	}
	cout << ret << endl;
	return 0;
}






//ll shu[20]; ll last[20];
//
//ll ex(ll a, ll b, ll&x, ll&y)
//{
//	if (b == 0)
//	{
//		x = 1; y = 0;
//		return a;
//	}
//	ll x1; ll y1;
//	ll d = ex(b, a % b, x1, y1);
//	x = y1; y = x1 - (a / b) * y1;
//	return d;
//}
//
//ll cr(ll a, ll b, ll c)//(a*b)%c
//
//{
//	ll r = 0;
//	while (b)
//	{
//		if (b & 1) r = (a+r) % c;
//		b=b >> 1;
//		a = (a + a) % c;
//	}
//	return r;
//}
//
//
//int main()
//{
//	
//	int _size; cin >> _size;
//	ll M = 1;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> last[i] >> shu[i];
//		M *= last[i];
//	}
//	
//	ll ret = 0;
//	for (int i = 0; i < _size; i++)
//	{
//		ll x; ll y;
//		
//		ll m = M / last[i];
//		ex(m, last[i], x, y);
//		x = (x % last[i] + last[i]) % last[i];//逆元
//		ret = (ret + cr(cr(m, x, M), shu[i], M)) % M;
//	}
//	cout << ret << endl;
//	
//	return 0;
//}









//int read()
//{
//	int ret = 0;
//	char ch = getchar_unlocked();
//	int flag = 1;
//	while (ch > '9' || ch < '0')
//	{
//		if (ch == '-')flag = -1;
//		ch = getchar_unlocked();
//	}
//	while (ch <= '9' && ch >= '0')
//	{
//		 ret = ret * 10 + ch - '0'; ch = getchar_unlocked();
//	}
//	return flag*ret;
//}
//void print(int a)
//{
//	if (a < 0)
//	{
//		putchar('-'); a = -a;
//	}
//	if (a <= 9) { putchar(a + '0'); return; }
//	print(a / 10);
//	putchar(a % 10 + '0');
//
//
//}
//
//
//int main()
//{
//	ll r = 0;
//	int _size = 0; cin >> _size;
//	while (_size--)
//	{
//		r += read();
//	}
//	print(r);
//
//
//
//	return 0;
//}




//int dp[510][510];
//int arr[510][510];
//int main()
//{
//	memset(dp, 999999, sizeof(dp));
//	int n = 0; int m = 0; cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	dp[0][1] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			
//			dp[i][j] = min(dp[i - 1][j], dp[i][j - 1])+arr[i][j];
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}









//int dp[50][50][50][50];
//int x[360];//数组
//int pai[5];//牌组
//
//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0;
//	int n = 0; int m = 0; cin >> n >> m;
//	for (int i = 1; i <= n; i++)cin >> x[i];
//	for (int i = 0; i < m; i++)
//	{
//		int ss = 0; cin >> ss;
//		pai[ss]++;
//	}
//	dp[0][0][0][0] = x[1];
//	for (a = 0; a <= pai[1]; a++)
//	{
//		for (b = 0; b <= pai[2]; b++)
//		{
//			for (c = 0; c <= pai[3]; c++)
//			{
//				for (d = 0; d <= pai[4]; d++)
//				{
//					int u = a + 2 * b + 3 * c + 4 * d + 1;
//					if(a) dp[a][b][c][d] = dp[a - 1][b][c][d] + x[u];
//					if(b) dp[a][b][c][d] = max(dp[a][b][c][d], dp[a][b - 1][c][d] + x[u]);
//					if(c) dp[a][b][c][d] = max(dp[a][b][c][d], dp[a][b][c - 1][d] + x[u]);
//					if(d) dp[a][b][c][d] = max(dp[a][b][c][d], dp[a][b][c][d - 1] + x[u]);
//				}
//			}
//		}
//	}
//	cout << dp[pai[1]][pai[2]][pai[3]][pai[4]] << endl;
//	return 0;
//}




//int a[50][50];
//int main()
//{
//	a[0][1] = 1;
//	int n = 0; int m = 0;//n人传m次
//	cin >> n >> m;
//	for (int i = 1; i <= m; i++)
//	{
//		a[i][1] = a[i-1][n] + a[i-1][2];
//		for (int j = 2; j < n; j++)
//		{
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1];
//		}
//		a[i][n] = a[i - 1][n - 1] + a[i - 1][1];
//	}
//	cout << a[m][1];
//	return 0;
//}







//int s[100010]; 
//int main()
//{
//	s[0] = 1;
//	int n = 0; int k = 0; cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= k && i - j >= 0; j++)
//		{
//			s[i] = (s[i] + s[i - j]) % 100003;
//		}
//	}
//	cout << s[n];
//}





//int a[1010][1010];
//int dp[1010][1010];
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + a[i][j];
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= _size; i++)
//	{
//		ret = max(ret, dp[_size][i]);
//	}
//	cout << ret << endl;
//	return 0;
//}







//ll a[100];
//int main()
//{
//	int _size = 0; cin >> _size;
//	a[0] = 1; a[1] = 1; a[2] = 2; a[3] = 4;
//	for (int i = 4; i <= _size; i++)
//	{
//		a[i] = a[i - 3] + a[i - 2] + a[i - 1];
//	}
//	cout << a[_size] << endl;
//	return 0;
//}