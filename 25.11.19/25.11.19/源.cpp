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



int get1(int s)
{
	int ret = 0;
	while (s)
	{
		if (s & 1)ret++;
		s >>= 1;
	}
	return ret;
}

void solve()
{
	int n; int x; cin >> n >> x;
	int num = get1(x);
	int cha = n - num;
	if (n <= num)cout << x << endl;
	if (cha % 2 == 0)cout << x + cha << endl;
	else
	{
		if (x > 1)
		{
			cout << x + cha + 1 << endl;
			return;
		}
		if (x == 1)
		{
			cout << n+3 << endl;
			return;
		}
		else
		{
			if (n == 1)
			{
				cout << -1 << endl;
				return;
			}
			else
			{
				cout << n + 3 << endl;
			}
		}
	}


	/*if (x == 0)
	{
		if (n == 1)
		{
			cout << -1 << endl;
			return;
		}
		else if (n % 2 == 0)
		{
			cout << n << endl;
			return;
		}
		else
		{
			cout << n + 3 << endl;
			return;
		}
	}
	int num = get1(x);
	if (n <= num)
	{
		cout << x << endl;
		return;
	}
	else
	{
		if (x == 1)
		{
			cout << n + 3 << endl;
			return;
		}
		int cha = n - num;
		if (cha == 1)
		{
			cout << x+cha+1 << endl;
		}
		else if (cha % 2 == 0)
		{
			cout << x + cha << endl;
		}
		else
		{
			cout << x + cha + 1 << endl;
		}
	}*/
}


signed main()
{
	int t; cin >> t;
	while (t--)solve();
	return 0;
}







//const int N = 3;
//signed main() {
//    int arr1[N][N] = { 0 };
//    int max1 = 0, max2 = 0x3f3f3f3f, a = 0, b = 0, sum = 0;
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            cin >> arr1[i][j];
//        }
//    }
//    for (int i = 0; i < N; i++) {
//        for (int j = 0; j < N; j++) {
//            if (arr1[i][j] >= max1) {
//                max1 = arr1[i][j];
//                a = j;
//            }
//        }
//        for (int k = 0; k < N; k++) {
//            if (arr1[k][a] <= max1) {
//                max1 = arr1[k][a];
//                b = k;
//            }
//        }
//        if (i == b) 
//            sum++;
//        a = 0;
//        b = 0;
//        max1 = 0;
//        max2 = 0x3f3f3f3f;
//    }
//    cout << "有鞍点" << sum << "个";
//    return 0;
//}


//1 2 3 4 5 6 7 8 9
//9 8 7 6 5 4 3 2 1












//int lu[200010];
//struct node
//{
//	int l; int r;
//}zha[200010];
//int wen[200010];//为-1的点
//int pos;
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)cin >> lu[i];
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> zha[i].l >> zha[i].r;
//	}
//	int left = 0;
//	pos = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (lu[i] == -1)
//		{
// 			wen[++pos] = i;
//		}
//		else
//		{
//			left += lu[i];
//		
//		}
//		while (left  < zha[i].l)
//		{
//			if (pos == 0)
//			{
//				cout << -1 << endl;
//				return;
//			}
//			lu[wen[pos--]] = 1;
//			left++;
//		}
//		while (left + pos > zha[i].r)
//		{
//			if (pos == 0)
//			{
//				cout<<- 1 << endl;
//				return;
//			}
//			lu[wen[pos--]] = 0;
//		}
//	}
//	while (pos != 0)
//	{
//		lu[wen[pos--]] = 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << lu[i] << " ";
//	}
//	cout << endl;
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


/*
1
4
0 -1 -1 1
0 4
1 2
2 4
1 4
*/




//struct node
//{
//	int l; int r;
//}zha[200010];
//struct node2
//{
//	int l; int r;
//}tmp[200010];
//int mov[200010];
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> mov[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> zha[i].l >> zha[i].r;
//	}
//	tmp[n].l = zha[n].l;
//	tmp[n].r = zha[n].r;
//	zha[1].l = zha[1].r = 0;
//	tmp[0].l = tmp[0].r = 0;
//	if (zha[1].l != 0 && zha[1].l != 1)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	for (int i = n; i >= 1; i--)
//	{
//		int L = tmp[i].l, R = tmp[i].r;
//		int Lcand, Rcand;
//
//		if (mov[i] == -1) {
//			// union: [L-1, R]，然后跟 [0, +∞) 取交集在下面统一做
//			Lcand = L - 1;
//			Rcand = R;
//		}
//		else if (mov[i] == 1) {
//			Lcand = L - 1;
//			Rcand = R - 1;
//		}
//		else { // mov[i] == 0
//			Lcand = L;
//			Rcand = R;
//		}
//
//		// 先和 [0, +∞) 取交集（只动下界）
//		int L0 = max(0LL, Lcand);
//		int R0 = Rcand;
//		if (L0 > R0) { // 空区间，说明这一步根本无解
//			cout << -1 << '\n';
//			return;
//		}
//
//		// 再和障碍的区间取交集
//		int nl = max(L0, zha[i - 1].l);
//		int nr = min(R0, zha[i - 1].r);
//		if (nl > nr) {
//			cout << -1 << '\n';
//			return;
//		}
//		tmp[i - 1].l = nl;
//		tmp[i - 1].r = nr;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (mov[i] == -1)
//		{
//			if (tmp[i].l > tmp[i - 1].l)
//			{
//				mov[i] = 1;
//			}
//			else
//			{
//				mov[i] = 0;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << mov[i] << " ";
//	}
//	cout << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}






//struct node
//{
//	int l; int r;
//}zha[200010];
//struct node2
//{
//	int l; int r;
//}tmp[200010];
//int mov[200010];
//
//
//
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> mov[i];
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> zha[i].l >> zha[i].r;
//	}
//	tmp[n].l = zha[n].l;
//	tmp[n].r = zha[n].r;
//	tmp[0].l = tmp[0].r = 0;
//	if (zha[1].l != 0&&zha[1].l!=1)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	for (int i = n; i > 1; i--)
//	{
//		if (mov[i] == -1)
//		{
//			tmp[i - 1].l = max((int)0,tmp[i].l - 1);
//			tmp[i - 1].r = max((int)0, tmp[i].r);
//		}
//		if (mov[i] == 1)
//		{
//			tmp[i - 1].l = max((int)0, tmp[i].l - 1);
//			tmp[i - 1].r = max((int)0, tmp[i].r - 1);
//		}
//		if (mov[i] == 0)
//		{
//			tmp[i - 1].l = max((int)0, tmp[i].l);
//			tmp[i - 1].r = max((int)0, tmp[i].r);
//		}
//		if (tmp[i - 1].l > zha[i - 1].r || tmp[i - 1].r < zha[i - 1].l)
//		{
//			cout << -1 << endl;
//			return;
//		}
//		else
//		{
//			tmp[i - 1].l = max(tmp[i - 1].l, zha[i - 1].l);
//			tmp[i - 1].r = min(tmp[i - 1].r, zha[i - 1].r);
//		}
//	}
//	if (tmp[1].l != 0)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (mov[i] == -1)
//		{
//			if (tmp[i].l > tmp[i - 1].l)
//			{
//				mov[i] = 1;
//			}
//			else
//			{
//				mov[i] = 0;
//			}
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << mov[i] << " ";
//	}
//	cout << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//}







//vector<int> tu[10000010];
//int pos[10000010];
//int cnt;
//void solve()
//{
//	int n; int m; cin >> n >> m;
//	cnt = 0;
//	int r = 0;
//	int l = 0x3f3f3f3f;
//	for(int i=1;i<=m;i++)
//	{
//		int s; cin >> s;
//		tu[s / 100].push_back(s);
//		pos[s / 100]++;
//		r = max(r, s / 100);
//		l = min(l, s / 100);
//	}
//	while (l <= r||cnt<=n)
//	{
//		if (pos[l] < pos[r])
//		{
//			for (int i = 1; i <= pos[m]; i++)
//			{
//				for (int j = 1; j <= 6; j++)
//				{
//
//				}
//			}
//			
//			pos[r] -= pos[l];
//			pos[l] = 0;
//		}
//		
//	}
//
//
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}





//void solve()
//{
//	int n; int l; int r; int k;
//	cin >> n >> l >> r >> k;
//	if (n % 2 == 1)
//	{
//		cout << l << endl;
//		return;
//	}
//	if (n == 2)
//	{
//		cout << -1 << endl;
//		return;
//	}
//	if (n == 1)
//	{
//		cout << l << endl;
//		return;
//	}
//	int t = 1;
//	int flag = 0;
//	while (t <= r)
//	{
//		if (t > l)
//		{
//			flag = 1;
//			if (k == n - 1 || k == n)
//			{
//				cout << t << endl;
//				return;
//			}
//			else
//			{
//				cout << l << endl;
//				return;
//			}
//		}
//		t *= 2;
//	}
//	if (flag == 0)cout << -1 << endl;
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