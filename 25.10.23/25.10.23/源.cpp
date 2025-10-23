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


int n; int m;
int main()
{
	ll ch = 0;//长方形
	ll zh = 0;//正方形
	cin >> n >> m;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = i + 1; k <= n; k++)
			{
				for (int l = j + 1; l <= m; l++)
				{
					if ((k - i) == (l - j))
					{
						zh++;
					}
					else
					{
						ch++;
					}
				}
			}
		}
	}
	cout << zh << " " << ch << endl;
	return 0;
}








//int num[500010];
//int tmp[500010];
//ll ret = 0;
//void merge(int l, int r)
//{
//	if (l >= r)return;
//	int mid = (l + r) / 2;
//	int l1 = l; int r1 = mid;
//	int l2 = mid + 1; int r2 = r;
//	merge(l, mid);
//	merge(mid + 1, r);
//	int pos = l;
//	while (l1 <= r1 && l2 <= r2)
//	{
//		if (num[l1] <= num[l2])
//		{
//			tmp[pos++] = num[l1++];
//		}
//		else
//		{
//			ret += (mid - l1 + 1);
//			tmp[pos++] = num[l2++];
//		}
//	}
//	while (l1 <= r1)
//	{
//		tmp[pos++] = num[l1++];
//	}
//	mwhile (l2 <= r2)
//	{
//		tmp[pos++] = num[l2++];
//	}
//	for (int i =l; i <= r; i++)
//	{
//		num[i] = tmp[i];
//	}
//}
//
//int main()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	merge(1, n);
//	cout << ret << endl;
//	return 0;
//}







//int pri[10010];
//int val[10010];
//int n; int m; int w;//商品，和，价值 
//int f[10010];//并查集
//int ro[10010];
//unordered_map<int,int> root;//并查集根是否在数组里
//int pos;//并查集根的个数
//int dp[10010];//背包
//
//inta _find(int s)
//{
//	return f[s] == s ? s : f[s] = _find(f[s]);
//}
//
//
//int main()
//{
//	cin >> n >> m >> w;
//	for (int i = 1; i <= n; i++)
//	{
//		f[i] = i;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> pri[i] >> val[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		int x; int y;
//		cin >> x >> y;
//		int fx = _find(x); int fy = _find(y);
//		if (fx != fy)
//		{
//			f[fy] = fx;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		int fi = _find(i);
//		if (fi != i)
//		{
//			pri[fi] += pri[i];
//			val[fi] += val[i];
//		}
//		if (root[fi] == 0)
//		{
//		in	root[fi] = 1;
//			ro[++pos] = fi;
//		}
//	}
//	
//	for (int i = 1; i <= pos; i++)
//	{
//		for (int j = w; j >= pri[ro[i]]; j--)//i个商品，j元下最大价值
//		{
//			dp[j] = max(dp[j], dp[j - pri[ro[i]]] + val[ro[i]]);
//		}
//	}
//	cout << dp[w] << endl;
//
//
//	return 0;
//}







//int num[500010];
//int n;
//ll ret = 0;
//int tmp[500010];
//void merge(int l,int r)
//{
//	if (l >= r)return;
//	int mid = (l + r) / 2;
//	merge(l, mid);
//	merge(mid + 1, r);
//	int l1 = l; int l2 = mid + 1;
//	int r1 = mid; int r2 = r;
//	int pos = l;
//	while (l1 <= r1 && l2 <= r2)
//	{
//		if (num[l1] <= num[l2])
//		{
//			tmp[pos++] = num[l1++];
//		}
//		else 
//		{
//			ret += (mid - l1 + 1);
//			tmp[pos++] = num[l2++];
//		}
//	}
//	while (l1 <= r1)tmp[pos++] = num[l1++];
//	while (l2 <= r2)tmp[pos++] = num[l2++];
//	for (int i = l; i <= r; i++)
//	{
//		num[i] = tmp[i];
//	}
//}
//
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	merge(1,n);
//	cout << ret << endl;
//	return 0;
//}













//int peo[10010];
//int n; int m;//人数，水龙头数
//int wa[110];
//
//priority_queue <int, vector<int>, greater<int>> heap;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> peo[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		heap.push(peo[i]);
//	}
//	for (int i = m + 1; i <= n; i++)
//	{
//		int r = heap.top();
//		heap.pop();
//		heap.push(r + peo[i]);
//	}
//	for (int i = 1; i < m; i++)
//	{
//		heap.pop();
//	}
//	cout << heap.top() << endl;
//	return 0;
//}






//bool cmp(int x, int y)
//{
//	return x > y;
//}
//
//
//int ti(int w)//在n时间弄完要多少水龙头
//{
//	
//	int s = 0;//累计
//	int ret = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (peo[i] > w)return 0x3f3f3f3f;
//		if (peo[i] + s > w)
//		{
//			ret++;
//			s = peo[i];
//		}
//		else s += peo[i];
//
//	}
//	return ret;
//}
//
//int main()
//{
//	int sum = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> peo[i];
//		sum += peo[i];
//	}
//	int l = 1; int r = sum;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (ti(mid) <= m)r = mid;
//		else l = mid + 1;
//
//	}
//	cout << l << endl;
//	return 0;
//}





//int f[40010];
//int pos = 1;
//int main()
//{
//	int k;
//	cin >> k;
//	for (int i = 1; i <= 200; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			f[pos] = i;
//			pos++;
//		}
//	}
//	ll ret = 0;
//	for (int i = 1; i <= k; i++)
//	{
//		ret += f[i];
//	}
//	cout << ret << endl;
//	return 0;
//}