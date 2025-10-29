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


int n;
int a; int b;

void _find(int ed, int sum, int x, int y)
{
	int x1 = x + ed - 1;
	int y1 = y + ed - 1;;
	if (a == x || a == x1 || b == y || b == y1)
	{
		if (a == x)
		{
			cout << sum + b - y + 1;
		}
		else if (b == y1)
		{
			cout << sum + ed - 1 + a - x + 1 << endl;
		}
		else if (a == x1)
		{
			cout << sum + 2 * ed - 2 + y1 - b + 1 << endl;
		}
		else
		{
			cout << sum + 3 * ed - 3 + x1 - a + 1 << endl;
		}
		return;
	}
	_find(ed - 1, sum + 4 * (ed - 1), x + 1, y + 1);
}


int main()
{
	cin >> n >> a >> b;
	_find(n, 0, 1, 1);
	return 0;
}




//int n; int r; int q;//n人r轮q名
//
//struct node
//{
//	int sco;//分数
//	int p;//第几位
//	int eff;//实力
//}peo[200010];
//
//bool cmp(node& a, node& b)
//{
//	if (a.sco == b.sco)
//	{
//		return a.p < b.p;
//	}
//	else
//	{
//		return a.sco > b.sco;
//	}
//}
//
//node stro[200010];
//node wea[200010];
//
//int main()
//{
//	cin >> n >> r >> q;
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		cin >> peo[i].sco;
//		peo[i].p = i;
//	}
//	for (int i = 1; i <= 2 * n; i++)
//	{
//		cin >> peo[i].eff;
//	}
//	sort(peo + 1, peo + 2 * n + 1, cmp);
//	for (int mn = 1; mn <= r; mn++)
//	{
//		for (int i = 1; i <= 2 * n; i += 2)
//		{
//			if (peo[i].eff < peo[i + 1].eff)
//			{
//				peo[i + 1].sco++;
//				stro[i / 2 + 1] = peo[i + 1];
//				wea[i / 2 + 1] = peo[i];
//			}
//			else
//			{
//				peo[i].sco++;
//				stro[i / 2 + 1] = peo[i];
//				wea[i / 2 + 1] = peo[i + 1];
//			}
//		}
//		int c1 = 1; int c2 = 1;
//		int pos = 1;
//		while (c1 <= n && c2 <= n)
//		{
//			if (stro[c1].sco > wea[c2].sco||(stro[c1].sco == wea[c2].sco&& stro[c1].p < wea[c2].p))
//			{
//				peo[pos++] = stro[c1++];
//				
//			}
//			else
//			{
//				peo[pos++] = wea[c2++];
//			}
//		}
//		while (c1 <= n)
//		{
//			peo[pos++] = stro[c1++];
//		}
//		while (c2 <= n)
//		{
//			peo[pos++] = wea[c2++];
//		}
//	}
//	cout << peo[q].p << endl;
//	return 0;
//}






//int n;
//ll num[200010];
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	sort(num + 1, num + 1 + n);
//	int _size = unique(num + 1, num + 1 + n) - (num + 1);
//	if (_size == 1)
//	{
//		cout << -1 << endl;
//		return 0;
//	}
//	else if (_size == 2)
//	{
//		cout << num[2] % num[1] << endl;
//		return 0;
//	}
//	else
//	{
//		cout << max(num[_size - 2], num[_size] % num[_size-1]);
//	}
//	return 0;
//}





//int main()
//{
//	unordered_map<int, int> mp;
//	int n; cin >> n;
//	int sum = 0;
//	mp[0] = 0;
//
//	int ret = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		int s = 0; cin >> s;
//		s = (s == 0 ? -1 : 1);
//		sum += s;
//		if (mp.count(sum))
//		{
//			ret = max(ret,i- mp[sum]);
//		}
//		else
//		{
//			mp[sum] = i;
//		}
//		
//	}
//	cout << ret << endl;
//	return 0;
//}