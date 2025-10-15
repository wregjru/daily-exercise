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
const int INF = 0x3f3f3f3f;



int arr[310];
int dp[310];
int dmax[310][310];
int dmin[310][310];
int main()
{
	int _size; cin >> _size;
	for (int i = 1; i <= _size; i++)
	{
		cin >> arr[i];
		arr[i + _size] = arr[i];
	}
	memset(dmax,-0x3f, sizeof(dmax));
	memset(dmin, 0x3f, sizeof(dmin));
	for (int i = 1; i <= 2*_size; i++)
	{
		dmax[i][i] = 0;
		dmin[i][i] = 0;
	}
	for (int i = 1; i <= 2 * _size; i++)
	{
		dp[i] = dp[i - 1]+arr[i];
	}
	
	for (int len = 2; len <= _size; len++)
	{
		for(int i=1;i+len-1<=2*_size;i++)
		{
			int j = i + len - 1;
			int all = dp[j] - dp[i-1];
			for (int k = i; k < j; k++)
			{
				dmax[i][j] = max(dmax[i][j], dmax[i][k] + dmax[k + 1][j] + all);
				dmin[i][j] = min(dmin[i][j], dmin[i][k] + dmin[k + 1][j] + all);
			}
		}
	}
	int ma = -0x3f3f3f3f; int mi = 0x3f3f3f3f;
	for (int i = 1; i <= _size; i++)
	{
		ma = max(ma, dmax[i][i + _size-1]);
		mi = min(mi, dmin[i][i + _size-1]);
	}
	cout << mi << endl;
	cout << ma << endl;
	return 0;
}









//int arr[310];
//int dp[310];
//int d[310][310];
//
//int main()
//{
//	int _size; cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> arr[i];
//		dp[i] = dp[i - 1] + arr[i];
//	}
//	memset(d, 0x3f, sizeof(d));
//	for (int i = 1; i <= _size; i++)d[i][i] = 0;
//	for (int len = 2; len <= _size; len++)
//	{
//		for (int i = 1; i + len - 1 <= _size; i++)
//		{
//			int j = i + len - 1;
//			int all = dp[j] - dp[i-1];
//			for (int k = 0; k < len-1; k++)
//			{
//				d[i][j] = min(d[i][j], d[i][i + k] + d[i + k + 1][j] + all);
// 			}
//		}
//	}
//	cout << d[1][_size];
//	return 0;
//}













//int dist[5010];//距树距离
//int d[5010][5010];//存数据
//bool used[5010];
//int n;//节点数
//int m;//边数
//
//int mintree()
//{
//	int ret = 0;
//	memset(dist, 0x3f, sizeof(dist));
//	dist[1] = 0;
//	//used[1] = true;
//	
//	for (int k = 1; k <= n; k ++ )
//	{
//		int t = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			if (!used[i] && dist[i] < dist[t])
//			{
//				t = i;
//			}
//		}
//		
//		if (dist[t] == INF)return INF;
//		ret += dist[t];
//		used[t] = true;
//		for (int j = 1; j <= n; j++)
//		{
//			dist[j] = min(dist[j], d[t][j]);
//		}
//	}
//	return ret;
//	
//
//}
//
//
//int main()
//{
//	
//	cin >> n >> m;
//	memset(d, 0x3f, sizeof(d));
//	for (int i = 1; i <= m; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		d[a][b] = d[b][a] = min(c, d[a][b]);
//	}
//	int r=mintree();
//	if(r==INF)cout << "orz" << endl;
//	else cout << r << endl;
//	return 0;
//}








//int _size;
//int a[2010];
//int dp[2010][2010];
//int main()
//{ 
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> a[i];
//	}
//	for (int len = 1; len <= _size; len++)
//	{
//		for (int i = 1; len + i - 1 <= _size; i++)
//		{
//			int j = i + len - 1;
//			int d = _size - len + 1;
//			dp[i][j] = max(dp[i + 1][j] + a[i] * d, dp[i][j - 1] + a[j] * d);
//		}
//	}
//	cout << dp[1][_size] << endl;
//}









//int _size;
//int dp[1010][1010];
//int main()
//{
//	string arr;
//	cin >> arr;
//	_size = arr.size();
//	arr = " " + arr;
//	for (int len = 1; len <= _size; len++)
//	{
//		for (int i = 1; i + len - 1 <= _size; i++)
//		{
//			int j = i + len - 1;
//			if (arr[i] == arr[j])dp[i][j] = dp[i + 1][j - 1];
//			else
//			{
//				dp[i][j] = min(dp[i + 1][j], dp[i][j - 1]) + 1;
//			}
//		}
//	}
//	cout << dp[1][_size];
//	return 0;
//}









//int n; int m; int x;//人数，侦察能力，钱
//int a[110]; int b[110]; int c[110];//价值，伪装，工资
//int dp[1100][1100];//伪装，工资
//
//
//int main()
//{
//	cin >> n >> m >> x;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i] >> b[i] >> c[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = m; j >= b[i]; j--)
//		{
//			for (int k = x; k >= c[i]; k--)
//			{
//				dp[j][k] = max(dp[j][k], dp[j - b[i]][k - c[i]] + a[i]);
//			}
//		}
//	}
//	cout << dp[m][x];
//	return 0;
//}








//int ti[10010]; int a[10010]; int n[10010];
//int dp[10010];
//
//int main()
//{
//	int _size;
//	int t1; char ch; int t2; int t3; char ch2; int t4;
//	cin >> t1 >> ch >> t2 >> t3 >> ch2 >> t4 >> _size;
//	int t = abs(t1 * 60 + t2 - t3 * 60 - t4);
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> ti[i] >> a[i] >> n[i];
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		
//		
//			if (n[i] == 0)
//			{
//				for (int j = ti[i]; j <= t; j++)
//				dp[j] =  max(dp[j],dp[j - ti[i]] + a[i]);
//			}
//			else if (n[i] == 1)
//			{
//				for(int j=t;j>=ti[i];j--)
//				dp[j] =  max(dp[j],dp[j - ti[i]] + a[i]);
//			}
//			else
//			{
//				for (int j = t; j >= 1; j--)
//				{
//					for (int k = 1; k <= n[i] && k * ti[i] <= j; k++)
//					{
//						dp[j] = max(dp[j], dp[j - ti[i] * k] + a[i] * k);
//					}
//				}
//			}
//		
//	}
//	cout << dp[t] << endl;
//	return 0;
//}






//int s; int n;//玩家，城堡数
//int a[110][20010];
//int m;//士兵数
//int dp[110][20010];
//int main()
//{
//	cin >> s >> n >> m;
//	for (int i = 1; i <= s; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> a[j][i];
//			a[j][i] = a[j][i] * 2 + 1;
//		}
//	}
//	for (int i = 1;i <= n; i++)
//	{
//		sort(a[i] + 1, a[i] + s + 1);//左闭右开
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 0; j <= m; j++)//注意0
//		{
//			dp[i][j] = dp[i - 1][j];
//			for (int k = 1; k <= s&&a[i][k]<=j; k++)
//			{
//				dp[i][j] = max(dp[i][j], dp[i - 1][j - a[i][k]] + k * i);
//			}
//		}
//	}
//	cout << dp[n][m] << endl;
//	return 0;
//}