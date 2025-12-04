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




void solve()
{
	int n; cin >> n;
	map<ll, vector<ll>> tu;
	for (int i = 1; i <= n; i++)
	{
		int s; cin >> s;
		int a = s+i-1;
		int b = a + i - 1;
		if (a >= b)continue;
		tu[a].push_back(b);
	}
	int ret = n;
	queue<int> qu;
	qu.push(n);
	unordered_map<int, bool> gone;
	gone[n] = 1;
	while (!qu.empty())
	{
		int s = qu.front();
		gone[s] = 1;
		qu.pop();
		for (int i = 0; i < tu[s].size(); i++)
		{
			
			int p = tu[s][i];
			if (gone[p])continue;
			ret = max(ret, p);
			qu.push(p);
		}
	}
	cout << ret << endl;
}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}




//int num[300010];
//int last[300010];
//int ret;
//unordered_map<int, int>ma;
//int dist;
//void dfs(int s)
//{
//	if (ma[dist]==0)
//	{
//		ret = max(ret, dist);
//		return;
//	}
//	int t = ma[dist];
//	dist += (t - 1);
//	ma[dist] = 0;
//	dfs(t);
//	ma[dist] = t;
//	dist -= (t - 1);
//}
//
//void solve()
//{
//	int n; cin >> n;
//	ret = 0; dist = 0;
//	ma.clear();
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		last[i] = (n + 1) - num[i];
//		ma[last[i]] = i - 1;
//	}
//
//	for (int i = 1; i <= n; i++)
//	{
//		if (last[i] == 0)
//		{
//			dist += (i - 1);
//			dfs(i);
//			dist -= (i - 1);
//		}
//	}
//	cout << ret << endl;
//	
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//int num[200010];
//int dp[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		dp[i] = 0;
//	}
//	int k = (n+1) / 2;
//	int l = 0; int r = 0;
//	int ret = 0;
//	if (n % 2 == 1)
//	{
//		r=l = n / 2 + 1;
//		
//	}
//	else
//	{
//		l = n / 2;
//		r = n / 2 + 1;
//		if (num[l] == num[r])ret++;
//	}
//	for (int i = 1; i <= (n-1)/2; i++)
//	{
//		int c = min((num[l - 1] == num[l] ? 1 : 0) + (num[r + 1] == num[r] ? 1 : 0), (num[l - 1] == num[r] ? 1 : 0) + (num[r + 1] == num[l] ? 1 : 0));
//		dp[i + 1] = dp[i] + c;
//		l--; r++;
//	}
//	cout << dp[(n + 1) / 2]+ret << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




//struct custom_hash {
//	static uint64_t splitmix64(uint64_t x) {
//		x += 0x9e3779b97f4a7c15;
//		x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
//		x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
//		return x ^ (x >> 31);
//	}
//
//	size_t operator()(uint64_t x) const {
//		static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
//		return splitmix64(x + FIXED_RANDOM);
//	}
//};
//
//
//int num[200010];
//void solve()
//{
//	int n; cin >> n;
//	set<int> ma;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	ma.insert(0);
//	int ret = 0;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		sum += num[i];
//		if (ma.count(sum))
//		{
//			ma.clear();
//			ret++;
//			ma.insert(0);
//			sum = 0;
//		}
//		else
//		{
//			ma.insert(sum);
//		}
//	}
//	cout << ret << endl;
//	
//}
//
//
//
//signed main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



//void solve()
//{
//	int n; int k; cin >> n >> k;
//	int val = n  +1;
//	int siz = 1;
//	int sum = 0;//¶àÉÙ¸ön+1
//	while(n >= k)
//	{
//		if (n % 2 == 1)
//		{
//			sum += siz;
//		}
//		n /= 2;
//		siz *= 2;
//	}
//	cout << val * sum/2  << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}