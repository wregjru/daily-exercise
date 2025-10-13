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

int n; int m;//草药数，最少需求
int we[110]; //重量
int pri[110];//价值
int dp [110][50010];
int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)cin >> pri[i] >> we[i];
	
	memset(dp, 0x3f, sizeof(dp));
	dp[0][0] = 0;
	//for (int i = 1; i <= m; i++)dp[0][i] = 0x3f;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= m; j++)
		{
			dp[i][j] = min(dp[i - 1][j], dp[i][max(0, j - pri[i])] + we[i]);
		}
	}
	cout << dp[n][m] << endl;
	return 0;
}







//int _size;
//double a[110][110];
//double z0 = 1e-7;
//bool zero(double t)
//{
//	return fabs(t) < z0;
//}
//
//int gauss()
//{
//	for (int i = 1; i <= _size; i++)
//	{
//		int aim = i;
//		for (int j = 1; j <= _size; j++)//
//		{
//			if (j < i && !zero(a[j][j]))continue;
//			if (fabs(a[j][i]) > fabs(a[aim][i]))aim = j;
//		}
//		if (zero(a[aim][i]))return 0;//无解
//		for (int j = 1; j <= _size + 1; j++)swap(a[i][j], a[aim][j]);
//		for (int j = _size+1; j >= i; j--)a[i][j] /= a[i][i];//大于i才除//
//		for (int j = 1; j <= _size; j++)
//		{
//			if (i == j)continue;
//			double kt = a[j][i] / a[i][i];
//			for (int k = i; k <= _size + 1; k++)a[j][k] -= a[i][k] * kt;//第一列开始
//		}
//	}
//	return 1;
//	
//}
//
//int main()
//{
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= _size+1; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int ret = gauss();
//	if (ret == 0)cout << "No Solution" << endl;
//	else
//	{
//		for (int i = 1; i <= _size; i++)
//		{
//			printf("%.2lf\n", a[i][_size + 1]);
//		}
//	}
//	return 0;
//}













//ll mod = 1e9 + 7;
//
//struct mat
//{
//	ll m[5][5];
//	mat()
//	{
//		memset(m, 0, sizeof(m));
//	}
//	mat operator* (mat& a)
//	{
//		mat ret;
//		for (int i = 1; i <= 2; i++)
//		{
//			for (int j = 1; j <= 2; j++)
//			{
//				for (int k = 1; k <= 2; k++)
//				{
//					ret.m[i][j] = (ret.m[i][j] + m[i][k] * a.m[k][j]) % mod;
//				}
//			}
//		}
//		return ret;
//	}
//
//}A, RET;//乘数，结果
//void kuai(ll k)
//{
//	A.m[1][1] = 1; A.m[1][2] = 1;
//	RET.m[1][1] = 1; RET.m[1][2] = 1; RET.m[2][1] = 1;
//	while (k)
//	{
//		if (k & 1)A = A * RET;
//		k = k >> 1;
//		RET = RET * RET;
//	}
//}
//
//
//int main()
//{
//	ll _size; cin >> _size;
//	if (_size == 1 || _size == 1)
//	{
//		cout << 1 << endl; return 0;
//	}
//	kuai(_size - 2);
//	cout << A.m[1][1];
//	return 0;
//}













//ll mod = 10e9 + 7;
//
//struct mat
//{
//	ll c[5][5];
//	mat()
//	{
//		memset(c, 0, sizeof(c));
//	}
//	void clear()
//	{
//		memset(c, 0, sizeof(c));
//	}
//	mat operator*(mat& B)
//	{
//		mat ret;
//		for (int i = 1; i <= 3; i++)
//		{
//			for (int j = 1; j <= 3; j++)
//			{
//				for (int k = 1; k <= 3; k++)
//				{
//					ret.c[i][j] = (ret.c[i][j] + c[i][k] * B.c[k][j]) % mod;
//					
//				}
//			}
//		}
//		return ret;
//	}
//}A,RET;
//
//void qpow(ll k)
//{
//	RET.c[1][1] = 1; RET.c[1][2] = 1; RET.c[1][3] = 1;
//	A.c[1][1] = 1; A.c[1][2] = 1; A.c[2][3] = 1; A.c[3][1] = 1;
//	while (k)
//	{
//		if (k & 1)RET = RET * A;
//		k = k >> 1;
//		A = A * A;
//	}
//}
//
//int main()
//{
//	int _size; cin >> _size;
//	while (_size--)
//	{
//		ll k = 0; cin >> k;
//		if (k == 1 || k == 2 || k == 3)
//		{
//			cout << 1; continue;
//		}
//		A.clear(); RET.clear();
//		qpow(k-3);
//		cout << RET.c[1][1] << endl;
//	}
//
//	return 0;
//}











//ll n; ll k;//n行，k次
//ll mod = 1e9 + 7;
//
//struct mat
//{
//	ll m[110][110];
//	mat()
//	{
//		memset(m, 0, sizeof(m));
//	}
//	mat operator*(const mat& ju) const
//	{
//		mat ret;
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= n; j++)
//			{
//				for (int k = 1; k <= n; k++)
//				{
//					ret.m[i][j] = (ret.m[i][j] + m[i][k] * ju.m[k][j]) % mod;
//				}
//			}
//		}
//		return ret;
//	}
//}A, RET;
////void qpow(ll b)
////{
////	for (int i = 1; i <= n; i++)
////	{
////		RET.m[i][i] = 1;
////	}
////	while (b)
////	{
////		if (b & 1)RET = RET * A;
////		b = b >> 1;
////		A = A * A;
////
////	}
////}
//void qpow(ll b)
//{
//	// 初始化RET为单位矩阵
//	for (int i = 1; i <= n; i++)
//		RET.m[i][i] = 1;
//
//	mat base = A;  // 使用临时变量，不修改原始矩阵A
//
//	while (b)
//	{
//		if (b & 1) RET = RET * base;
//		b >>= 1;
//		base = base * base;
//	}
//}
//
//
//int main()
//{
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> A.m[i][j];
//		}
//	}
//	qpow(k);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << RET.m[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}








//int a[110][110];
//int b[110][110];
//int c[110][110];
//int main()
//{
//	int q; int w; int e;
//	cin >> q >> w >> e;
//	for (int i = 1; i <= q; i++)
//	{
//		for (int j = 1; j <= w; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	for (int i = 1; i <= w; i++)
//	{
//		for (int j = 1; j <= e; j++)
//		{
//			cin >> b[i][j];
//		}
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		for (int j = 1; j <= e; j++)
//		{
//			for (int k = 1; k <= w; k++)
//			{
//				c[i][j] += a[i][k] * b[k][j];
//			}
//		}
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		for (int j = 1; j <= e; j++)
//		{
//			cout << c[i][j]<<" ";
//		}
//		cout << endl;
//	}
//	return 0;
//}