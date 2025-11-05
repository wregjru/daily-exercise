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


int num[110];
bool dp[25010];
int n;
int main()
{
	int T; cin >> T;
	while (T--)
	{
		memset(dp, 0, sizeof(dp));
		cin >> n;
		int ret = n;
		for (int i = 1; i <= n; i++)
		{
			cin >> num[i];
		}
		sort(num + 1, num + 1 + n);
		dp[0] = true;
		for (int i = 1; i <= n; i++)
		{
			if (dp[num[i]])ret--;
			for (int j = num[i]; j <= 25000; j++)
			{
				dp[j] = (dp[j] || dp[j - num[i]]);
			}
		}
		cout << ret << endl;
	}
	return 0;
}





//int m; int s; int c;//木板数，牛棚数，牛棚编号
//int num[210];
//int d[210];
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//int main()
//{
//	cin >> m >> s >> c;
//	for (int i = 1; i <= c; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + c);
//	for (int i = 1; i < c; i++)
//	{
//		d[i] = num[i + 1] - num[i] - 1;
//	}
//	int ret = num[c] - num[1] + 1;
//	sort(d + 1, d + c, cmp);
//	for (int i = 1; i <= m - 1&&i<c; i++)
//	{
//		ret -= d[i];
//	}
//	cout << ret << endl;
//	return 0;
//}







//ll n; ll m;
//ll num[100010];
//ll sum;
//
//ll check(ll s)
//{
//	int ret = 1;
//	int all = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] > s)return 1e9;
//		all += num[i];
//		if (all > s)
//		{
//			ret++;
//			all = num[i];
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		sum += num[i];
//	}
//	ll l = 1; ll r = sum;
//	while (l < r)
//	{
//		ll mid = (l + r) / 2;
//		if (check(mid) <= m)r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	return 0;
//}





//int a[510];
//int dp[510][510];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	memset(dp, 0x3f, sizeof(dp));
//	for (int i = 1; i <= n; i++)dp[i][i] = 1;
//	for (int i = 1; i < n; i++)
//	{
//		if (a[i] == a[i + 1])dp[i][i + 1] = 1;
//		else dp[i][i + 1] = 2;
//	}
//	for (int len = 3; len <= n; len++)
//	{
//		for (int i = 1; i + len - 1 <= n; i++)
//		{
//			int j = i + len - 1;
//			for (int k = i; k < j; k++)
//			{
//				dp[i][j] = min(dp[i][j],dp[i][k]+dp[k + 1][j]);
//			}
//			if (a[i] == a[j])dp[i][j] = min(dp[i][j], dp[i + 1][j - 1]);//不要加一
//		}
//	}
//	cout << dp[1][n] << endl;
//	return 0;
//}




//int a[100010];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)cin >> a[i];
//	int pre = 0;
//	int ret = 1;
//	for (int i = 1; i < n; i++)
//	{
//		int d = a[i + 1] - a[i];
//		if (d == 0)continue;
//		if (d > 0)d = 1;
//		else d = -1;
//		if (d != pre)ret++;
//		pre = d;
//	}
//	cout << ret << endl;
//
//	return 0;
//}



//int flo[100010];
//int dpa[100010];
//int dpb[100010];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> flo[i];
//	}
//	//算A条件
//	dpa[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		if (flo[i] >= flo[i - 1]&&flo[])dpa[i] = dpa[i - 1];
//		else if(fio[i]<)
//	}
//	return 0;
//}




//int a[5000010];
//int cha[5000010];
//int n; int p;
//int main()
//{
//	cin >> n >> p;
//	for (int i = 1; i <= n; i++)
//	{
//		int s = 0; cin >> s;
//		a[i] = s;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cha[i] = a[i] - a[i - 1];
//	}
//	for (int i = 1; i <= p; i++)
//	{
//		int a; int b; int c;
//		cin >> a >> b >> c;
//		cha[a] += c; cha[b + 1] -= c;
//	}
//	int ret = cha[1];
//	for (int i = 1; i <= n; i++)
//	{
//		cha[i] += cha[i - 1];
//		ret = min(ret, cha[i]);
//	}
//	cout << ret << endl;
//	return 0;
//}