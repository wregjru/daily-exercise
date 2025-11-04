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

int vec[5][5] = { 0,-1,1,1,-1,
				1,0,-1,1,-1,
				- 1,1,0,-1,1,
				- 1,-1,1,0,1,
				1,1,-1,-1,0 };
int all;
int n;int m;
int ca[210]; int cb[210];
int main()
{
	cin >> all;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> ca[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> cb[i];
	}
	int ra = 0; int rb = 0;
	for (int i = 0; i < all; i++)
	{
		if (vec[ca[i % n]][cb[i % m]] == 1)ra++;
		else if (vec[ca[i % n]][cb[i % m]] == -1)rb++;
	}
	cout << ra << " " << rb;
	return 0;
}



//int a[10];
//int n;
//bool dp[25010];
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		cin >> n;
//		int ma = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//		
//		sort(a + 1, a + 1 + n);
//		ma = a[n];
//		int ret = 0;
//		memset(dp, 0, sizeof(dp));
//		dp[0] = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (!dp[a[i]])ret++;
//			for (int j = a[i]; j <= ma;j++)
//			{
//				dp[j] = (dp[j] || dp[j - a[i]]);
//			}
//		}
//		cout << ret << endl;
//	}
//	return 0;
//}







//int n;
//int a[110];
//int dp[110];//i结尾最大值
//int len[110];
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (dp[i - 1] + a[i] < a[i])
//		{
//			len[i] = 1;
//		}
//		else
//		{
//			len[i] = len[i - 1] + 1;
//		}
//		dp[i] = max(dp[i - 1] + a[i], a[i]);
//	}
//	int ret = 0; int rlen = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (dp[i] > ret)
//		{
//			ret = dp[i];
//			rlen = len[i];
//		}
//		else if (dp[i] == ret)
//		{
//			rlen = max(rlen, len[i]);
//		}
//	}
//	cout << ret << " " << rlen;
//	return 0;
//}
//5 1 -2 3 4 -1




//int m; int s; int c;
//int a[210];
//int b[210];
//bool cmp(int x, int y)
//{
//	return x > y;
//}
//
//int main()
//{
//	cin >> m >> s >> c;
//	for (int i = 1; i <= c; i++)
//	{
//		cin >> a[i];
//	}
//	sort(a + 1, a + 1 + c);
//	for (int i = 1; i < c; i++)
//	{
//		b[i] = a[i+1] - a[i]-1;//最开始棚不需要木板
//	}
//	sort(b + 1, b + c + 1, cmp);
//	int ret = a[c] - a[1] + 1;
//	for (int i = 1; i <= m - 1&&i<c; i++)
//	{
//		ret -= b[i];
//	}
//	cout << ret << endl;
//	return 0;
//}





//ll n; ll m;
//ll num[100010];
//ll check(ll s)
//{
//	ll sum = 0;
//	ll ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] > s)return 1e9;
//		sum += num[i];
//		if (sum > s)
//		{
//			sum = num[i];
//			ret++;
//		}
//	}
//	return ret + 1;
//}
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	ll l = 1; ll r = 1e9;
//	while (l < r)
//	{
//		ll mid = l + (r - l) / 2;
//		if (check(mid) <= m)r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	return 0;
//}





//int num[310];
//int n; ll ret;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	int c1 = 0; int c2 = n;
//	while (c1 < c2)
//	{
//		ret += (num[c2] - num[c1]) * (num[c2] - num[c1]);
//		c1++;
//		ret += (num[c2] - num[c1]) * (num[c2] - num[c1]);
//		c2--;
//	}
//	cout << ret << endl;
//	return 0;
//}