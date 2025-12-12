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


int odd[200010];
int even[200010];
int pre[200010];
int pos1; int pos2;
bool cmp(int a, int b)
{
	return a > b;
}


void solve()
{
	int n; cin >> n;
	for (int i = 0; i <= n + 2; i++)
	{
		odd[i] = even[i] = pre[i] = 0;
	}
	pos1 = pos2 = 0;
	for (int i = 1; i <= n; i++)
	{
		int s; cin >> s;
		if (s % 2 == 1)
		{
			odd[++pos1] = s;
		}
		else
		{
			even[++pos2] = s;
		}
	}
	sort(odd + 1, odd + 1 + pos1, cmp);
	sort(even + 1, even + 1 + pos2, cmp);
	if (pos1 == 0)
	{
		for (int i = 1; i <= n; i++)
		{
			cout << 0 << " ";
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= pos2; i++)
	{
		pre[i] = pre[i - 1] + even[i];
	}
	for (int i = 1; i <= n; i++)
	{
		int ans = 0;
		int p1 = pos1; int p2 = pos2;
		int l = max((int)0, i - p1);
		int r = min(p2, i - 1);
		if (l <= r)
		{
			if ((r % 2) != ((i - 1) % 2))r=r-1;
			if (r >= l)
			{
				int r2 = r;
				ans = odd[1] + pre[r2];
			}
		}
		cout << ans << " ";
	}
	cout << endl;
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}






//int odd[200010];
//int pos1;
//int even[200010];
//int pos2;
//int suf[200010];
//struct node
//{
//	int val; int c1; int c2;
//}dp[200010];
//
//
//bool cmp(int a, int b)
//{
//	return a > b;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	pos1 = pos2 = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		if (s % 2 == 0)
//		{
//			even[++pos2] = s;
//		}
//		else
//		{
//			odd[++pos1] = s;
//		}
//	}
//	sort(odd + 1, odd + 1 + pos1, cmp);
//	sort(even + 1, even + 1 + pos2, cmp);
//	for (int i = 1; i <= pos2; i++)
//	{
//		suf[i] = even[i] + suf[i - 1];
//	}
//	for (int i = 1; i <= pos2+1; i++)
//	{
//		cout << odd[1] + suf[i - 1] << " ";
//	}
//	if (pos1 == 2)
//	{
//		for (int i = pos2 + 2; i <= n; i++)
//		{
//			cout << 0 << " ";
//		}
//		cout << endl;
//		return;
//	}
//	else
//	{
//		for (int i = pos2 + 2; i <= n; i++)
//		{
//			if ((i - pos2) % 2 == 0)
//			{
//				cout << suf[pos2] << " ";
//			}
//			else
//			{
//				cout << suf[pos2]+odd[1] << " ";
//			}
//		}
//		cout << endl;
//		return;
//	}
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//int maxx(string str) 
//{
//	int maxCount = 0, count = 0;
//
//	for (char c : str) {
//		count = (c == '0') ? count + 1 : 0;
//		if (count > maxCount) maxCount = count;
//	}
//
//	return maxCount;
//}
//
//
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	string s; cin >> s;
//	s += s;
//	int m = 0;
//	cout << maxx(s) << endl;
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}






//int num[200010];
//bool del[200010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n + 10; i++)
//	{
//		del[i] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int ret = 0;
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = i + 1; j <= n; j++)
//		{
//			if (num[j] < num[i] && !del[j])
//			{
//				ret++;
//				del[j] = 1;
//			}
//		}
//	}
//	cout << ret << endl;
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//void solve()
//{
//	int n; int x; int k;
//	cin >> n >> x >> k;
//	k = k % (2 * n);
//	deque<int> qu[2];
//	if (x == 1)
//	{
//		for (int i = 1; i <= n / 2+1; i++)
//		{
//			qu[0].push_back(i);
//		}
//		for (int i = n / 2+2; i <=n; i++)
//		{
//			qu[1].push_back(i);
//		}
//		//int fl = x;
//		
//		for (int i = 1; i <= k; i++)
//		{
//			if (x == 1)
//			{
//				int s = qu[1-x].back();
//				qu[1-x].pop_back();
//				qu[x].push_back(s);
//				x = 1 - x;
//
//			}
//			else
//			{
//				int s = qu[1-x].front();
//				qu[1-x].pop_front();
//				qu[x].push_front(s);
//				x = 1 - x;
//			}
//		}
//		for (int i = 0; i < qu[0].size(); i++)
//		{
//			cout << qu[0][i] << " ";
//		}
//		for (int i = 0; i < qu[1].size(); i++)
//		{
//			cout << qu[1][i] << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n / 2; i++)
//		{
//			qu[0].push_back(i);
//		}
//		for (int i = n / 2 + 1; i <= n; i++)
//		{
//			qu[1].push_back(i);
//		}
//		for (int i = 1; i <= k; i++)
//		{
//			if (x == 0)
//			{
//				int s = qu[1-x].front();
//				qu[1-x].pop_front();
//				qu[x].push_front(s);
//				x = 1 - x;
//			}
//			else
//			{
//				int s = qu[1-x].back();
//				qu[1-x].pop_back();
//				qu[x].push_back(s);
//				x = 1 - x;
//			}
//		}
//		for (int i = 0; i < qu[0].size(); i++)
//		{
//			cout << qu[0][i] << " ";
//		}
//		for (int i = 0; i < qu[1].size(); i++)
//		{
//			cout << qu[1][i] << " ";
//		}
//		cout << endl;
//	}
//	
//}
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}






//vector<int> tu[200010];
//int in[200010];
//int dp[200010];
//int out[200010];
//
//
//int dfs(int s)
//{
//	if (tu[s].size() == 0)
//	{
//		return 0;
//	}
//	int t = 0;
//	for (int i = 0; i < tu[s].size(); i++)
//	{
//		t += 2*dfs(tu[s][i])+1+out[tu[s][i]];
//	}
//	return t;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i < n; i++)
//	{
//		int a; int b; cin >> a >> b;
//		tu[b].push_back(a);
//		in[a]++;
//		out[b]++;
//	}
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)
//		{
//			ret += dfs(i);
//			
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
//	int t = 1;
//	while (t--)solve();
//	return 0;
//}







//void solve()
//{
//	int n; int x; int k;
//	cin >> n >> x >> k;
//	int s = min(2 * n, k);
//	int fl = 0;
//	for (int i = 1; i <= s; i++)
//	{
//		if ((i * (i + 1) / 2) % n == (x==0?0:n-x))
//		{
//			fl = 1;
//			break;
//		}
//	}
//	if (fl == 1)
//	{
//		cout << "YES" << endl;
//	}
//	else
//	{
//		cout << "NO" << endl;
//	}
//}
//
//
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



//void solve()
//{
//	int n; cin >> n;
//	if (n == 0)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	string s;
//	while (n > 0)
//	{
//		int d = n % 9;
//		n /= 9;
//		if (d >= 4)d++;
//		s.push_back('0' + d);
//	}
//	reverse(s.begin(), s.end());
//	cout << s << endl;
//}
//
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}