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
typedef long long ll;
typedef unsigned long long ull;



bool st[1000000];
int pre[1000000]; int cnt = 1;//质数数量
int _size = 0; int s = 0;//范围，查询量
void getp(int _size)
{
	for (long long i = 2; i <= _size; i++)
	{
		if (!st[i])
		{
			pre[cnt] = i; cnt++;
		}
		for (long long j = 1; pre[j] * i <= _size; j++)
		{
			st[pre[j] * i] = true;
			if (i % pre[j] == 0)break;
		}
	}
}

ll gcd(ll a, ll b)
{
	if (b == 1 || a == 1)return 1;
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	getp(1000000);
	int T; cin >> T;
	while (T--)
	{

		int n; cin >> n;
		ll num[100010];
		for (int i = 1; i <= n; i++)
		{
			cin >> num[i];
		}
		ll g = num[1];
		for (int i = 2; i <= n; i++)
		{
			g = gcd(g, num[i]);
		}
		ll ret = 0;
		for (int i = 1; i <= cnt; i++)
		{
			if (g%pre[i]!=0)
			{
				ret = pre[i];
				break;
			}
		}
		if (ret != 0)cout << ret << endl;
		else cout << -1 << endl;
		
	}

	return 0;
}




//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int n; cin >> n;
//		int num[200010] = {0};
//		int cnt = 0;//奇数个数
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> num[i];
//			if (num[i] % 2 == 1)cnt++;
//		}
//		if (cnt == n || cnt == 0)
//		{
//			for (int i = 1; i <= n; i++)
//			{
//				cout << num[i] << " ";
//			}
//		}
//		else
//		{
//			sort(num + 1, num + 1 + n);
//			for (int i = 1; i <= n; i++)
//			{
//				cout << num[i] << " ";
//			}
//		}
//	}
//	return 0;
//}




//bool st[405862];
//int pre[405862]; int cnt = 1;//质数数量
//int _size = 0; int s = 0;//范围，查询量
//void getp(int _size)
//{
//	for (long long i = 2; i <= _size; i++)
//	{
//		if (!st[i])
//		{
//			pre[cnt] = i; cnt++;
//		}
//		for (long long j = 1; pre[j] * i <= _size; j++)
//		{
//			st[pre[j] * i] = true;
//			if (i % pre[j] == 0)break;
//		}
//	}
//}
//
//int main()
//{
//	getp(405862);
//	int T; cin >> T;
//	while (T--)
//	{
//		int 
//		int n; cin >> n;
//
//	}
//	return 0;
//}




//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int ssss; cin >> ssss;
//		int num[30] = { 0 };
//		string a; string b; cin >> a >> b;
//		if (a == "nezuqo")
//		{
//			int ssq = 1;
//		}
//		if (a == b)
//		{
//			cout << "NO" << endl;
//			continue;
//		}
//		for (int i = 0; i < a.size(); i++)
//		{
//			num[a[i] - 'a']++;
//		}
//		for (int i = 0; i <b.size(); i++)
//		{
//			num[b[i] - 'a']--;
//		}
//		int flag = 1;
//		for (int i = 0; i < 29; i++)
//		{
//
//			if (num[i] != 0)
//			{
//				flag = 0;
//			}
//		}
//		if (flag == 0)cout << "NO" << endl;
//		else cout << "YES" << endl;
//	}
//	return 0;
//}



//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int a; int b; int c; int d;
//		cin >> a >> b >> c >> d;
//		if (a == b && b == c && c == d)
//		{
//			cout << "YES" << endl;
//		}
//		else
//			cout << "NO" << endl;
//	}
//	return 0;
//}