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



//HR

void solve()
{
	int n; cin >> n;
	string lu; cin >> lu;
	lu = " " + lu;
	int N = 0; int E = 0;//抵消后N，E的个数
	for (int i = 1; i <= n; i++)
	{
		if (lu[i] == 'E')E++;
		else if (lu[i] == 'N')N++;
		else if (lu[i] == 'W')E--;
		else N--;
	}
	if ((E & 1) || (N & 1))
	{
		cout << "NO" << endl;
		return;
	}
	if (n == 1)
	{
		cout << "NO" << endl;
		return;
	}
	if (E == 0 && N == 0 && n == 2)
	{
		cout << "NO" << endl;
		return;
	}
	int e1 = E / 2;
	int e2 = E / 2;
	int n1 = N / 2;
	int n2 = N / 2;
	string ret(n + 1, 'R');
	int fl1 = 0;
	int fl2 = 0;
	if (e1 == 0 && n1 == 0)
	{
		ret[1] = 'H';
		if (lu[1] == 'N')
		{
			for (int i = 2; i <= n; i++)
			{
				if (lu[i] == 'S')
				{
					ret[i]  = 'H';
					break;
				}
			}
		}
		else if (lu[1] == 'S')
		{
			for (int i = 2; i <= n; i++)
			{
				if (lu[i] == 'N')
				{
					ret[i] = 'H';
					break;
				}
			}
		}
		else if (lu[1] == 'W')
		{
			for (int i = 2; i <= n; i++)
			{
				if (lu[i] == 'E')
				{
					ret[i] = 'H';
					break;
				}
			}
		}
		else if (lu[1] == 'E')
		{
			for (int i = 2; i <= n; i++)
			{
				if (lu[i] == 'W')
				{
					ret[i] = 'H';
					break;
				}
			}
		}
		for (int i = 1; i <= n; i++)
		{
			cout << ret[i];
		}
		cout << endl;
		return;
	}
	for (int i = 1; i <= n; i++)
	{
		if (lu[i] == 'N' && n1 > 0)
		{
			ret[i] = 'H'; n1--;
		}
		if (lu[i] == 'S' && n1 < 0)
		{
			ret[i] = 'H'; n1++;
		}
		if (lu[i] == 'E' && e1 > 0)
		{
			ret[i] = 'H'; e1--;
		}
		if (lu[i] == 'W' && e1 < 0)
		{
			ret[i] = 'H'; e1++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		cout << ret[i];
	}
	cout << endl;
}

signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}

/*


1
6
NENSNE
RRRRRR


1
6
NESSWS


1
4
SSNN
*/



//int num[200010];
//void solve()
//{
//	int n; cin >> n;
//	int k; cin >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] = i;
//	}
//	if (n % 2 == 0)
//	{
//		if (k<0 || k % 2 == 1 || k>(n * n) / 2)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	else
//	{
//		if (k<0 || k % 2 == 1 || k>(n * n-1) / 2)
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//	cout << "YES" << endl;
//	int pos = k / 2;
//	int l = 1; int r = n;
//	while (pos > 0&&l<r)
//	{
//		if (r - l <= pos)
//		{
//			pos -= (r - l);
//			swap(num[l], num[r]);
//			l++; r--;
//		}
//		else
//		{
// 			l++; r--;
//		}
//	}
//	for (int i = 2; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (pos == 0)break;
//			if (num[j] < num[j - 1])continue;
//			swap(num[j], num[j - 1]);
//			pos --;
//		}
//		if (pos == 0)break;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << num[i] << " ";
//	}
//	cout << endl;
//	/*for (int i = 2; i <= n; i++)
//	{
//		for (int j = i; j <= n; j++)
//		{
//			if (pos == 0)break;
//			
//		}
//		if (pos == 0)break;
//	}*/
//}
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
//
//
//
//int cha[200010];
//int num1[200010];
//int num2[200010];
//
//void solve()
//{
//	int n; cin >> n;
//	unordered_map<int, int, custom_hash>b;
//	for (int i = 1; i <= n; i++)cin >> num1[i];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num2[i];
//		b[num2[i]]++;
//	}
//	unordered_map<int, int, custom_hash>ma;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num1[i] != num2[i])
//		{
//
//			ma[num2[i]]++;
//		}
//	}
//	int m; cin >> m;
//	unordered_map<int, int, custom_hash>ma2;
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> cha[i]; ma2[cha[i]]++;
//	}
//	for (auto& it : ma)
//	{
//		if (ma2[it.first] < ma[it.first])
//		{
//			
//			cout << "NO"<<endl;
//			return;
//		}
// 	}
//	if (b[cha[m]]==0)
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	else
//	{
//		cout << "YES" << endl;
//		return;
//	}
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



/*
1
5
7 6 1 10 10
3 6 1 11 11
3
4 3 11


1
4
1 2 3 5
2 1 3 5
2
2 3



1
1
1
1
5
1 3 4 5 1



*/


//int r[110];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	pos = 0;
//	for (int i = 63; i >= 0; i--)
//	{
//		if (((n & (1LL << i)) == (1LL << i)) && ((1LL << i) != n))
//		{
//			r[++pos] = n - (1LL << i);
//		}
//	}
//	r[++pos] = n;
//	cout << pos << endl;
//	for (int i = 1; i <= pos; i++)
//	{
//		cout << r[i] << " ";
//	}
//	cout << endl;
//
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


//1 3