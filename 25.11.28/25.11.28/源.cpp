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


int a[200010];
int b[200010];
int k;


void solve()
{
	int n; cin >> n; cin >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int j = 1; j <= n; j++)
	{
		cin >> b[j];
	}
	sort(a + 1, a + 1 + n);
	sort(b + 1, b + 1 + n);
	int r = n;
	int ret = 0;
	for (int i = 1; i <= n; i++)
	{
		if (a[i] >= k)break;
		int s = (double)(k - a[i]) / (double)(a[i] + 1);
		while (r>0&&b[r] > s)
			r--;//不能重复使用
		if (r == 0)break;
		else 
		{
			ret++;
			r--;
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





//int a[200010];
//int b[200010];
//bool used[200010];
//
//
//int k;
//bool check(int s, int ai)
//{
//	return ai * (s + 1) + 1 <= k;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	cin >> k;
//	for (int i = 1; i <= n; i++)used[i] = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	sort(a + 1, a + 1 + n); sort(b + 1, b + 1 + n);
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int l= 1; int r = n;
//		while (l < r)
//		{
//			int m = (l + r) / 2;
//			if (check(b[m], a[i]))r = m;
//			else l = m+1;
//		}
//		while (used[l])l--;
//		if(check(b[l],a[i])&&used[l]==false)
//		{
//			used[l] = true;
//			ret++;
//		}
//	}
//	cout << ret << endl;
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
3 10
5 6 5
7 1 7

1
5 42
5 4 2 2 1
9 8 9 8 100

*/



//int num[110][110];
//
//void solve()
//{
//	int n;
//	cin >> n;
//	int ans = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			int c = i * n + j + 1;
//			if (i > 0) c += (i - 1) * n + j + 1;
//			if (i < n - 1) c += (i + 1) * n + j + 1;
//			if (j > 0) c += i * n + j;
//			if (j < n - 1) c += i * n + j + 2;
//			ans = max(ans, c);
//		}
//	}
//	cout << ans << endl;
//}
//
//
//signed main()
//{
//	int t;
//	cin >> t;
//	while (t--) 
//	{
//		solve();
//	}
//	return 0;
//}


//int num[110][110]
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//
//		}
//	}
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}

//int n;
//int b[200010];
//void solve()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//	}
//	sort(b + 1, b + 1 + n);
//	int q = 0;
//	if (b[n] == n)
//	{
//		for (int i = 1; i <= n; i++)
//		{
//			if (b[i] != 0)
//			{
//				q = i;
//				break;
//			}
//		}
//		cout << (n - q + 1) << endl;
//		return;
//	}
//	else
//	{
//		int sum = 0;
//		for (int i = n; i >= 1; i--)
//		{
//			sum += max((int)0,b[i] - 1);
//		}
//		int ret = 0;
//		if (sum >= n - 1)
//		{
//			int p = 0;
//			for (int i = 1; i <= n; i++)
//			{
//				if (b[i] != 0)
//				{
//					p = i;
//					break;
//				}
//			}
//			cout << n-p+1 << endl;
//		}
//		else
//		{
//			int k = n-sum;
//			int p = 0;
//			for (int i = 1; i <= n; i++)
//			{
//				if (b[i] != 0)
//				{
//					k--;
//					if (k == 1)
//					{
//						p = i; break;
//					}
//				}
//			}
//			cout << (n - p) << endl;
//		}
//	}
//	
//	
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//1 5 0 0 0 0 6


//string a;
//void solve()
//{
//	int n;
//	a = " ";
//	int mp = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		if (s == n)mp = i;
//		a += to_string(s);
//	}
//	for (int i = 1; i <= mp; i++)
//	{
//
//	}
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}




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