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

int num[200010];
void solve()
{
	int n; int m; int k;
	cin >> n >> m >> k;
	for (int i = 1; i <= m; i++)
	{
		cin >> num[i];
	}
	num[m + 1] = n + 1;
	num[0] = 1 - k;
	int all = 0;
	for (int i = 1; i <= m+1; i++)
	{
		all += (num[i] - num[i - 1] - 1)/k;
	}
	all += m;
	int r1 = all;
	int r2 = 0;
	for (int i = 1; i <= m; i++)
	{
		int tmp = all;
		tmp = tmp - (num[i] - num[i - 1] - 1) / k - (num[i + 1] - num[i] - 1) / k + (num[i + 1] - num[i - 1] - 1) / k - 1;
		r1 = min(r1, tmp);
	}
	for (int i = 1; i <= m; i++)
	{
		int tmp = all;
		tmp = tmp - (num[i] - num[i - 1] - 1) / k - (num[i + 1] - num[i] - 1) / k + (num[i + 1] - num[i - 1] - 1) / k - 1;
		if (tmp == r1)r2++;
	}
	cout << r1 << " " << r2 << endl;

}



signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}







//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//bool pinf(int s)
//{
//	while (s)
//	{
//		if (s == 1)
//		{
//			return 1;
//		}
//		if (s % 2 != 0)
//		{
//			return 0;
//		}
//		s /= 2;
//	}
//}
//
//int shuwei(int s)
//{
//	int ret = 0;
//	while (s)
//	{
//		ret++;
//		s /= 2;
//	}
//	return ret;
//}
//
//void solve()
//{
//	int n; int m;
//	cin >> n >> m;
//	int g = gcd(n, m);
//	n /= g; m /= g;
//	if (!pinf(m))//不为2的次方
//	{
//		cout << -1 << endl;
//		return;
//	}
//	if (m == 1)
//	{
//		cout << 0 << endl;
//		return;
//	}
//	int pos = shuwei(n);//二进制几位
//	int ret = 0;
//	for (int i = 0; i < pos; i++)
//	{
//		if (n & (1LL << i))
//		{
//			if((1LL<<i)<m)
//			ret += (1LL<<i) * (m / (1LL << i) - 1);
//		}
//	}
//	cout << ret*g << endl;
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
//






//int num[200010];
//const int mod = 1e9 + 7;
//
//
//int qow(int a, int b, int c)
//{
//	int ret = 1;
//	while (b)
//	{
//		if(b&1)ret = ret * a % c;
//		b >>= 1;
//		a = a * a % c;
//	}
//	ret = ret % c;
//	return ret;
//}
////int mul(int a, int b, int c)
////{
////	int ret = 0;
////	while (b)
////	{
////		if (b & 1)ret = (ret + a) % c;
////		b >>= 1;
////		a = (a + a) % c;
////	}
////	return ret;
////}
//
//
//void solve()
//{
//	int n; cin >> n;
//	int sum = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		sum = (sum + num[i]) % mod;
//	}
//	int up = 0;
//	for(int i = 1; i <= n; i++)
//	{
//		up = (up + num[i]%mod * ((sum - num[i]+mod)%mod)%mod) % mod;
//	}
//	int down = ((n - 1) * n) % mod;
//	int ret = (up * qow(down, mod - 2, mod)) % mod;
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
20
274817018 727927537 177146587 950730875 848678841 986943245 866831634 471268221 70951207 618585678 530410183 762303308 895314401 861394835 171550414 321095104 570723799 766272005 317771790 967177177

*/




//string s;
//
//bool check(string p)
//{
//	string ret = p;
//	while (ret.size() != s.size())
//	{
//		ret += p;
//	}
//	int no = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (ret[i] != s[i])no++;
//	}
//	if (no != 0 && no != 1)
//	{
//		return 0;
//	}
//	return 1;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	cin >> s;
//	for (int i = 1; i <= n; i++)
//	{
//		if (n % i == 0)
//		{
//			if (check(s.substr(0, i)) || check(s.substr(n - i, i)))
//			{
//				cout << i << endl;
//				return;
//			}
//		}
//	}
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






//void solve()
//{
//	int n; int m; cin >> n >> m;
//	int ret = 0;
//	for (int b = 1; b <= m; b++)
//	{
//		for (int k = 1; k <= n / b; k++)
//		{
//			if ((k + 1) % b == 0)ret++;
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