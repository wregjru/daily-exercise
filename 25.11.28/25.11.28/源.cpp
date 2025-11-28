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








//int num[1010][1010];
//
//void solve()
//{
//	int n; int m;
//	cin >> n >> m;
//	int pos = 1;
//	for (int i = 2; i <= n; i+=2)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			num[i][j] = pos++;
//		}
//	}
//	for (int i = 1; i <= n; i += 2)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			num[i][j] = pos++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << num[i][j] << " ";
//		}
//		cout << endl;
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//int num[100010];
//int ret[100010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 0; i < n; i++)cin >> num[i];
//	if (num[n-1] == 1)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	cout << "YES" << endl;
//	int slow = 0; int fast = 0;
//	while (num[fast] == 1)fast++;
//	if(fast>0&&num[fast-1]==1)ret[++pos] = fast;
//	while (fast < n)
//	{
//		while (fast > slow&& fast < n)
//		{
//			slow++;
//			ret[++pos] = 0;
//		}
//		while (num[fast]==0&& fast < n)
//		{
//			if (fast==0||num[fast - 1] != 1)ret[++pos] = 0;
//			fast++; slow++;
//		}
//		while (num[fast] == 1&&fast<n)
//		{
//			fast++;
//		}
//		if (num[fast - 1] == 1 && fast < n)ret[++pos] = fast - slow;
//	}
//	for (int i = pos; i >= 1; i--)
//	{
//		cout << ret[i] << " ";
//	}
//	cout << endl;
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}


/*
1
5
1 1 0 0 0
*/



//int yin[1000000];
//int pos;
//
//void solve()
//{
//	pos = 0;
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			yin[++pos] = i;
//		}
//	}
//	int gap = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (yin[i] != i)
//		{
//			gap = i;
//			break;
//		}
//	}
//	if (gap == 0)gap = 25;
//	string ret(1e6 + 10, '0');
//	for (int i = 1; i <= gap; i++)
//	{
//		for (int j = i; j <= n; j += gap)
//		{
//			ret[j] = 'a' + i - 1;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << ret[i];
//	}
//	cout << endl;
//}
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
//	int ma = -0x3f3f3f3f; int pma = 0;
//	int mi = 0x3f3f3f3f; int pmi = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		if (s > ma)
//		{
//			ma = s;
//			pma = i;
//		}
//		if (s < mi)
//		{
//			mi = s;
//			pmi = i;
//		}
//		
//	}
//	if (ma > 0)
//	{
//		cout << 2 * n + 5 << endl;
//		cout << pma << " " << pma << endl;
//		cout << pma << " " << pma << endl;
//		cout << pma << " " << pma << endl;
//		cout << pma << " " << pma << endl;
//		cout << pma << " " << pma << endl;
//		cout << pma << " " << pma << endl;
//		cout << 1 << " " << pma << endl;
//		for (int i = 2; i <= n; i++)
//		{
//			cout << i << " " << i-1 << endl;
//			cout << i << " " << i << endl;
//		}
//	}
//	else if (ma == 0 && mi == 0)
//	{
//		cout << 0 << endl;
//	}
//	else
//	{
//		cout << 2 * n + 5 << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << pmi << " " << pmi << endl;
//		cout << n << " " << pmi << endl;
//		for (int i = n-1; i >= 1; i--)
//		{
//			cout << i << " " << i+1 << endl;
//			cout << i << " " << i << endl;
//		}
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}


//int n;
//
//bool check(int s)
//{
//	return ((s * s - s) / 2 + s) < n;
//}
//
//
//void solve()
//{
//
//	cin >> n;
//	int l = 1; int r = 2*n;
//	/*while (l < r)
//	{
//		int mid = l + (r - l + 1) / 2;
//		if (check(mid))l = mid;
//		else r = mid - 1;
//	}*/
//	while (l < r)
//	{
//		int mid = l + (r - l) / 2;
//		if (check(mid))r = mid;
//		else l = mid + 1;
//	}
//	int y = n - r * (r - 1) / 2;
//	if ((r + 1) * r / 2 <= n) 
//	{
//		cout << min(r + y, r + 1 + n - (r + 1) * r / 2) << "\n";
//	}
//	else 
//	{
//		cout << r + y << "\n";
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}