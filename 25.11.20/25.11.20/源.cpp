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


int tu[1010][1010];


void solve()
{
	int n; int m; cin >> n >> m;
	int x = 1; int y = 1;
	string lu; cin >> lu;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> tu[i][j];
		}
	}
	int sum = 0;
	int flag = 1;//1:ÃÓ––£¨0£∫ÃÓ¡–
	if (lu[0] == 'D')
	{
		for (int i = 1; i <= m; i++)sum += tu[1][i];
		flag = 1;
		x++;
	}
	else
	{
		for (int i = 1; i <= n; i++)sum += tu[i][1];
		flag = 0;
		y++;
	}
	for (int i = 1; i <= n; i++)
	{
		if (lu[i] != lu[i - 1])flag = 1 - flag;
		if (flag == 1)
		{
			int s = 0;
			for (int j = 1; j <= m; j++)
			{
				s += tu[x][j];
			}
			tu[x][y] = sum - s;
			x++;
		}
		else
		{
			int s = 0;
			for (int j = 1; j <= n; j++)
			{
				s += tu[j][y];
			}
			tu[x][y] = sum - s;
			y++;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cout << tu[i][j] << " ";
		}
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
3 3
DRRD
0 2 3
0 0 0
3 1 0
*/



//int num[200010];
//void solve()
//{
//	int n; int k; cin >> n >> k;
//	for (int i = 1; i <= n; i++)cin >> num[i];
//	if (n == k)
//	{
//		int pos = 1;
//		for (int i = 2; i <= n; i += 2)
//		{
//			if (num[i] != pos)
//			{
//				cout << pos << endl;
//				return;
//			}
//			pos++;
//		}
//		cout << n/ 2+1 << endl;
//		return;
//	}
//	else
//	{
//		int flag = 1;
//		for (int i = 2; i <= n - k + 2; i++)
//		{
//			if (num[i] != 1)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			cout << 2 << endl;
//		}
//		else
//		cout << 1 << endl;
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

1 7 7
1 1 2 2 3 3 4 
 

1 8 8
1 1 2 2 3 3 4 4
*/





//int a[200010];
//int b[200010];
////int pai[200010];
//int vala[200010];
//int valb[200010];
//struct node
//{
//	int a; int b;
//}r[200010];
//int pos;
//
//void solve()
//{
//	int n; cin >> n;
//	int mid = 0;
//	pos = 0;
//	for (int i = 0; i <= n + 3; i++)
//	{
//		vala[i] = valb[i] = 0;
//	}
//	int c = 0;
//	unordered_map<int, int> pai;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//		vala[a[i]] = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> b[i];
//		valb[b[i]] = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		pai[a[i]] = b[i];
//		if (pai.count(b[i]))
//		{
//			if (pai[b[i]] != a[i])
//			{
//				cout << -1 << endl;
//				return;
//			}
//		}
//		if (a[i] == b[i])
//		{
//			c++;
//			mid = a[i];
//		}
// 	}
//	if ((n % 2 == 0 && c != 0) || (n % 2 != 0 && c != 1))
//	{
//		cout << -1 << endl;
//		return;
//	}
//	int cnt = 0;
//	if(n%2==1)
//	if(vala[mid]!=(n+1)/2)
//	{
//		r[++pos].a = (n + 1) / 2;
//		r[pos].b = vala[mid];
//		int t = a[(n + 1) / 2];
//		swap(a[vala[mid]], a[vala[a[(n + 1) / 2]]]);
//		swap(vala[mid], vala[t]);
//		
//		cnt++;
//	}
//	for (int i = 1; i < n / 2; i++)
//	{
// 		if (vala[pai[a[i]]] != n + 1 - i)
//		{
//			r[++pos].a = n+1-i;
//			r[pos].b = vala[pai[a[i]]];
//			cnt++;
//			int t = pai[a[i]];int u= a[n + 1 - i];
//			swap(a[vala[t]], a[vala[u]]);
//			swap(vala[t], vala[u]);
//		}
//	}
//	cout << cnt << endl;
//	for (int i = 1; i <= pos; i++)
//	{
//		int m = min(r[i].a, r[i].b);
//		int M = max(r[i].a, r[i].b);
//		cout << m << " " << M << endl;
//	}
//
//}




//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

/*
1
5
2 5 1 3 4
3 5 4 2 1



1
3
1 3 2
2 3 1




1
6
4 2 5 3 6 1
6 1 3 5 4 2
*/


//int tu[510][510];
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i <= n + 2; i++)
//	{
//		for (int j = 0; j <= n + 2; j++)
//		{
//			tu[i][j] = 0;
//		}
//	}
//	tu[n - 1][n - 1] = 0;
//	tu[n - 1][n] = 1;
//	tu[n][n - 1] = 2;
//	tu[n][n] = 3;
//	int pos = 4;
//	for (int i = 1; i <= n - 2; i++)
//	{
//		int pos = (i + 1) * (i + 1);
//		for (int j = n - i; j <= n; j++)
//		{
//			tu[n - i - 1][j] = (pos++);
//		}
//		for (int j = n - i; j <= n; j++)
//		{
//			tu[j][n - i - 1] = (pos++);
//		}
//		tu[n - 1 - i][n - 1 - i] = pos;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cout << tu[i][j] << " ";
//		}
//		cout << endl;
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




//int get1(int s)
//{
//	int ret = 0;
//	while (s)
//	{
//		if (s & 1)ret++;
//		s >>= 1;
//	}
//	return ret;
//}
//
//void solve()
//{
//	int n; int x; cin >> n >> x;
//	int num = get1(x);
//	int cha = n - num;
//	if (n <= num)
//	{
//		cout << x << endl;
//		return;
//	}
//	if (cha % 2 == 0)cout << x + cha << endl;
//	else
//	{
//		if (x > 1)
//		{
//			cout << x + cha + 1 << endl;
//			return;
//		}
//		if (x == 1)
//		{
//			cout << n + 3 << endl;
//			return;
//		}
//		else
//		{
//			if (n == 1)
//			{
//				cout << -1 << endl;
//				return;
//			}
//			else
//			{
//				cout << n + 3 << endl;
//			}
//		}
//	}
//
//
//	/*if (x == 0)
//	{
//		if (n == 1)
//		{
//			cout << -1 << endl;
//			return;
//		}
//		else if (n % 2 == 0)
//		{
//			cout << n << endl;
//			return;
//		}
//		else
//		{
//			cout << n + 3 << endl;
//			return;
//		}
//	}
//	int num = get1(x);
//	if (n <= num)
//	{
//		cout << x << endl;
//		return;
//	}
//	else
//	{
//		if (x == 1)
//		{
//			cout << n + 3 << endl;
//			return;
//		}
//		int cha = n - num;
//		if (cha == 1)
//		{
//			cout << x+cha+1 << endl;
//		}
//		else if (cha % 2 == 0)
//		{
//			cout << x + cha << endl;
//		}
//		else
//		{
//			cout << x + cha + 1 << endl;
//		}
//	}*/
//}
//
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}