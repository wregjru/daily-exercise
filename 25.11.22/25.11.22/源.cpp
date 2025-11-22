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
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;






int num[200010];
int r[200010];
int pos;
void solve()
{
    int n;
    cin >> n;
    cin >> num[1];
    int flag = num[1] % 2;
    int f = 1;
    for (int i = 2; i <= n; i++) 
    {
        cin >> num[i];
        if (num[i] % 2 != flag) 
        {
            f = 0;
        }
    }
    if (f == 0)
    {
        cout << -1 << endl;
        return;
    }
    if (num[1] % 2 == 1)
    {
        cout << 30 << endl;
    }
    else
    {
        cout << 31 << endl;
    }
    for (int i = 29; i >= 0; i--)
    {
        cout << (1LL << i) << " ";
    }
    if (num[1] % 2 == 0)
    {
        cout << 1 << endl;
    }
    else
    {
        cout << endl;
    }
   
   
}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}


/*
1
3
4 6 8
*/


//int num[200010];
//int r[200010];
//int pos;
//void solve()
//{
//	int n; cin >> n;
//	cin >> num[1];
//	int flag = num[1] % 2;
//	for (int i = 2; i <= n; i++)
//	{
//		cin >> num[i];
//		if (num[i] % 2 != flag)
//		{
//			cout << -1 << endl;
//			return;
//		}
//	}
//	if (n == 1)
//	{
//		cout << 1 << endl;
//		cout << num[1] << endl; return;
//	}
//	if (n <= 39)
//	{
//		cout << n << endl;
//		for (int i = 2; i <= n; i++)
//		{
//			int eva = (num[i] + num[i - 1]) / 2;
//			cout << eva << " ";
//			for (int j = 1; j <= n; j++)
//			{
//				num[j] = abs(num[j] - eva);
//			}
//			
//		}
//		cout << num[1] << endl;
//	}
//	else
//	{
//		for (int i = 1; i <= n; i++)r[i] = 0;
//		pos = 0;
//		for (int i = 2; i <= n; i++)
//		{
//			unordered_map<int, bool> ma;
//			if (num[i] == num[i - 1])continue;
//			if (pos >= 39)continue;
//			int eva = (num[i] + num[i - 1]) / 2;
//			r[++pos] = eva;
//			for (int j = 1; j <= n; j++)
//			{
//				num[j] = abs(num[j] - eva);
//			}
//		}
//		r[++pos] = num[1];
//		for (int i = 1; i <= n; i++)
//		{
//			num[i] -= num[1];
//		}
//		int flag = 1;
//		for (int i = 1; i <= n; i++)
//		{
//			if (num[i] != 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			cout << -1 << endl; return;
//		}
//		else
//		{
//			cout << pos << endl;
//			for (int i = 1; i <= pos; i++)
//			{
//				cout << r[i] << " ";
//			}
//			cout << endl;
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


/*
1
3
4 6 8



1
43
1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2



*/




//bool ask(string s)
//{
//	cout << "?" << " " << s << endl;
//	int x; cin >> x;
//	return x;
//}
//
//
//void solve()
//{
//	int n; cin >> n;
//	string a;
//	while(a.size()<n)
//	{
//		if (ask(a + "0"))
//		{
//			a += "0";
//		}
//		else if (ask(a + "1"))
//		{
//			a += '1';
//		}
//		else
//		{
//			break;
//		}
//	}
//	while (a.size() < n)
//	{
//		if (ask("0"+a))
//		{
//			a = "0" + a;
//		}
//		else
//		{
//			a = "1" + a;
//		}
//	}
//	cout << "!" << " " << a << endl;
////	cout.flush();
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





//int peo[200010];
//int huan[200010];
//bool gone[200010];
//
//void solve()
//{
//	int n; int m; int k;
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)cin >> peo[i];
//	for (int i = 1; i <= m; i++)cin >> huan[i];
//	for (int i = 1; i <= n; i++)gone[i] = 0;
//	int p1 = 1; int  p2 = 1;
//	while (p1 <= n && p2 <= m)
//	{
//		gone[peo[p1]] = true;
//		if (huan[p2] != peo[p1])
//		{
//			cout << "TIDAK" << endl;
//			return;
//		}
//		p1++;
//		while (gone[huan[p2]])p2++;
//		if (p2 > m)break;
//		
//	}
//	if (p2 < m)cout << "TIDAK" << endl;
//	else
//	cout << "YA" << endl;
//
//
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return  0;
//}

/*

1
4 2 0
1 2 3 4
2 1


1
4 2 0
1 2 3 4
1 1


1
3 2 0
3 2 1
3 2


1
3 6 0
1 2 3
1 1 2 3 3 2




3 6 0
1 2 3
1 1 2 3 3 2
4 6 0
3 1 4 2
3 1 1 2 3 4

*/





//struct node
//{
//	int  a; int b;
//}num[100010];
//
//
//bool cmp(node& a, node& b)
//{
//	return a.a + a.b < b.a + b.b;
//}
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i].a >> num[i].b;
//	}
//	sort(num + 1, num + 1 + n, cmp);
//	for (int i = 1; i <= n; i++)
//	{
//		cout << num[i].a << " " << num[i].b << " ";
//	}
//	cout << endl;
//}
//
//signed  main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}



// 2 3 4 1 5 10 8 7 9 6




//int num[2010];
//int f[2010];
//int g[2010];
//int n;
//
//
//
//
//void solve()
//{
//	cin >> n;
//	
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	if (n % 2 == 0)
//	{
//		int ret = 0;
//		for (int i = 1; i <= n / 2; i++)
//		{
//			ret = max(num[i * 2] - num[i * 2 - 1], ret);
//		}
//		cout << ret << endl;
//	}
//	else
//	{
//		if (n == 1)
//		{
//			cout << 1 << endl;
//			return;
//		}
//		int ret = 0x3f3f3f3f3f3f3f3f;
//		for (int i = 1; i <= n; i++)
//		{
//			int flag = 1;
//			int r = 0;
//			int tmp = 0;
//			for (int j = 1; j <= n; j++)
//			{
//				if (j == i)continue;
//				if (flag == 1)
//				{
//					tmp = num[j];
//					flag++;
//				}
//				else
//				{
//					tmp = num[j] - tmp;
//					r = max(r, tmp);
//					flag = 1;
//					tmp = 0;
//				}
//				
//			}
//			ret = min(ret, r);
//		}
//		cout << ret << endl;
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




/*
1
5
1 5 8 10 13
*/


//int num[2010];
//int cha[2010];
//int n;
//
//bool check(int s)
//{
//	int pre = num[1];
//	int flag = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		if (num[i] - pre <= s)pre = num[i];
//		else
//		{
//			if (flag == 1)
//			{
//				return false;
//			}
//			pre = num[i];
//			flag = 1;
//			/*if (num[i] - pre <= s)pre = num[i];
//			else return false;*/
//		}
//	}
//	return true;
//}
//
//
//
//void solve()
//{
//	cin >> n;
//	//if (n == 1)
//	//{
//	//	int a; cin >> a;
//	//	cout << 1 << endl;
//	//}
//	//else if (n == 2)
//	//{
//	//	int a; int b; cin >> a >> b;
//	//	cout << b - a << endl;
//	//}
//	//else
//	//{
//	//	for (int i = 1; i <= n; i++)
//	//	{
//	//		cin >> num[i];
//	//	}
//	//	for (int i = 2; i <= n; i++)
//	//	{
//	//		cha[i] = num[i] - num[i - 1];
//	//	}
//	//	sort(cha + 2, cha + n + 1);
//	//	if (cha[n] == cha[n - 1])
//	//	{
//	//		cout << cha[n] << endl;
//	//	}
//	//	else
//	//	cout << cha[n - 1] << endl;
//	//}
//
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int l = 1; int r = n;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (check(mid))r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//}
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
//int dat[30] = { 1,2,2,3,3,4,4,5,5,1,6,7,7,8,8,9,9,10,10,11,11,12,12,13,13,1,6 };
//void solve()
//{
//	int n; cin >> n;
//	if (n % 2 != 0 && n <= 25)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	if (n % 2 == 0)
//	{
//		for (int i = 1; i <= n / 2; i++)
//		{
//			cout << i << " " << i << " ";
//		}
//		cout << endl;
//	}
//	else
//	{
//		for (int i = 0; i <= 26; i++)
//		{
//			cout << dat[i] << " ";
//		}
//		for (int i = 1; i <= (n - 27) / 2; i++)
//		{
//			cout << i + 13 << " " << i + 13 << " ";
//		}
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
