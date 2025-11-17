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

void solve()
{
	int n; cin >> n;
	map<int,int>cnt;
	for (int i = 1; i <= n; i++)
	{
		cin >> num[i];
		if (!cnt.count(i))cnt[i] = 1;
		else cnt[i]++;
	}
	for (auto it=cnt.begin();it!=cnt.end();it++)
	{
		if (it->first != it->second)
		{
			cout << -1 << endl;
			return;
		}
	}
}




signed main()
{
	int t; cin >> t;
	while (t--)solve();
}






//int num[200010];
//int hn[200010];
//int cnt;
//string a;
//
//void solve()
//{
//	int n; cin >> n;
//	cin >> a;
//	a = " " + a;
//	if (a[1] == '0' && a[2] == '1')
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	if (a[n - 1] == '1' && a[n] == '0')
//	{
//		cout << "NO" << endl;
//		return;
//	}
//	for (int i = 1; i <= n - 2; i++)
//	{
//		if (a[i] == '1' && a[i + 1] == '0' && a[i + 2] == '1')
//		{
//			cout << "NO" << endl;
//			return;
//		}
//	}
//
//
//
//	cnt = 0;
//	for (int i = 1; i <= n; i++)
//	{
//		if (a[i] == '1')
//		{
//			num[i] = i;
//			hn[++cnt] = i;
//		}
//	}
//	//hn[++cnt] = n + 1;
//	for (int i = 0; i < cnt; i++)
//	{
//		int x = hn[i]; int y = hn[i + 1];
//		//for (int j = x + 1; j < y; j++)
//		for(int j=1;j<y-x;j++)
//		{
//			num[x + j] = y - j;
//		}
//	}
//	if (hn[cnt] != n)
//	{
//		for (int i = hn[cnt]+1; i <= n; i++)
//		{
//			num[i] = n - (i - hn[cnt]) + 1;
//		}
//	}
//	cout << "YES" << endl;
//	for (int i = 1; i <= n; i++)
//	{
//		cout << num[i] << " ";
//	}
//	cout << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}







//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//using namespace std;
//
////template<class T1,class T2>
//////void swap(T& a1, T& a2)
//////{
//////	T tmp = a1;
//////	a1 = a2;
//////	a2 = tmp;
//////}
////
////T1 add(const T1& a, const T2& b)
////{
////	return a + b;
////}
////int add(const int a, const int b)
////{
////	return a + b;
////}
//////void swap(int& x, int& y)
//////{
//////	int tmp = x;
//////	x = y;
//////	y = tmp;
//////}
////template<class T>
////T* func(int n)
////{
////	return new T[n];
////}
//
//template<class T>
//
//class stack
//{
//public:
//	stack(int n=4)
//		:capacity(n)
//		, size(0)
//		,_arr(new T[n])
//	{ }
//	~stack()
//	{
//		delete[] _arr;
//		_arr = nullptr;
//		capacity = 0;
//		size = 0;
//	}
//	void push(const T& s)
//	{
//		if (capacity == size)
//		{
//			T* tmp = new T[2 * capacity];
//			memcpy(tmp, _arr, sizeof(T) * size);
//			delete[]_arr;
//			capacity *= 2;
//			_arr = tmp;
//		}
//		_arr[size++] = s;
//	}
//private:
//	size_t capacity;
//	size_t size;
//	T* _arr;
//};
//
//
//
//int main()
//{
//	stack<int> st;
//	st.push(1);
//	st.push(2);
//	st.push(3);
//	st.push(4);
//	st.push(5);
//	st.push(6);
//	//int a = 1; int b = 2;
//
//	//////swap(a, (int)b);
//	//cout<<add(a, b) << endl;
//	////int *a=func<int>(5);
//	return 0;
//}






//
//
//
//vector<int> tu[200010];
//
//
//int num[200010];
//int ret[200010];
//int cnt;//ÊýÁ¿
//int ins[200010];
//int r[200010];
//void solve()
//{
//	int n; cin >> n;
//	cnt = 0;
//	for (int i = 0; i <= n + 5; i++)ins[i] = 0;
//	for (int i = 0; i <= n + 5; i++)tu[i].clear();
//	queue<int>qu;
//	for (int i = 1; i < n; i++)
//	{
//		int a; int b; int c; int d;
//		cin >> a >> b >> c >> d;
//		if (c < d)
//		{
//			tu[a].push_back(b);
//			ins[b]++;
//		}
//		else
//		{
//			tu[b].push_back(a);
//			ins[a]++;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (ins[i] == 0)qu.push(i);
//
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		
//		r[s] = ++cnt;
//		for (int i = 0; i < tu[s].size(); i++)
//		{
//			int a = tu[s][i];
//			ins[a]--;
//			if (ins[a] == 0)qu.push(a);
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		cout << r[i] << " ";
//	}
//	cout << endl;
//}
//
//signed main()
//{
//	int t; cin >> t;
//	while (t--)solve();
//	return 0;
//}

/*
* 
1
3
1 2 2 1
2 3 3 2
*/





//int num[100010];
//
//void solve()
//{
//	int n; cin >> n;
//	int p; cin >> p;
//	for (int i = 1; i <= n; i++)cin >> num[i];
//	sort(num + 1, num + 1 + n);
//	int l = 1; int r = n;
//	while()
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
//
//
//
////https://codeforces.com/problemset/problem/2161/C





//int num[200010];
////int f[200010];
////int g[200010];
////int r[200010];
//void solve()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)cin >> num[i];
//	int ma = 0;
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		int ne = (i + 1) % n;
//		int M = max(num[i], num[ne]);
//		ma = max(M, ma);
//		ret += M;
//	}
//	ret -= ma;
//	cout << ret << endl;
//}
//signed main()
//{
//	int T; cin >> T;
//	while (T--)solve();
//	return 0;
//}


/*
1
4
1 1 3 2
*/