#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<algorithm>
#include <cstring> 
using namespace std;
long long dp[1010][1010];
void insert(int x1, int y1, int x2, int y2, int k)
{
	dp[x1][y1] += k; dp[x2 + 1][y1] -= k;
	dp[x1][y2 + 1] -= k; dp[x2 + 1][y2 + 1] += k;
}

int main()
{
	int size = 0; int num = 0;
	cin >> size >> num;
	for (int i = 0; i < num; i++)
	{
		int x1 = 0; int y1 = 0; int x2 = 0; int y2 = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		insert(x1, y1, x2, y2, 1);
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 0; j <= size; j++)
		{
			dp[i][j] = dp[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
		}
	}
	for (int i = 1; i <= size; i++)
	{
		for (int j = 1; j <= size; j++)
		{
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}





//long long dp[1010][1010];
//void insert(int x1,int y1,int x2,int y2,long long t)
//{
//	dp[x1][y1] += t; dp[x2 + 1][y1] -= t;
//	dp[x1][y2 + 1] -= t; dp[x2 + 1][y2 + 1] += t;
//}
//int main()
//{
//	int a = 0; int b = 0; int n = 0;//长宽操作数
//	cin >> a >> b >> n;
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			int t = 0; cin >> t;
//			insert( i, j, i, j, t);
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		int x1 = 0; int x2 = 0; int y1 = 0; int y2 = 0; long long k = 0;
//		cin >> x1 >> y1 >> x2 >> y2 >> k;
//		insert(x1, y1, x2, y2, k);
//	}
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			// 正确的二维前缀和计算
//			dp[i][j] = dp[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
//		}
//	}
//
//	// 输出结果
//	for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			cout << dp[i][j] << " ";
//		}
//		cout << endl;
//	}
//	/*for (int i = 1; i <= a; i++)
//	{
//		for (int j = 1; j <= b; j++)
//		{
//			cout << dp[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1]<<" ";
//		}
//		cout << endl;
//	}*/
//	return 0;
//}




//int _gcb(int a, int b)
//{
//	if (b == 0)return a;
//	else return _gcb(b, a % b);
//}
//int gcb(int a, int b)
//{
//	if (a >= b) return _gcb(a, b);
//	else return _gcb(b, a);
//}
//
//int main()
//{
//	int a = 0; int b = 0; int c = 0;
//	cin >> a >> b >> c;
//	int d = gcb(a, b);
//	int e = gcb(d, c);
//	cout << e << endl;
//	return 0;
//}







//long long dp[100001];
//long long zhan[100001];
//int main()
//{
//	int size;//车站总数
//	int num;//行程车站数
//	cin >> size >> num;
//	int x = 0; cin >> x;
//	for (int i = 0; i < num - 1; i++)
//	{
//		int y = 0; cin >> y;
//		if (x < y)
//		{
//			dp[x]++; dp[y]--;
//		}
//		else
//		{
//			dp[y]++; dp[x]--;
//		}
//		x = y;
//	}
//	for (int i = 1; i <= size; i++)
//	{
//		zhan[i] = zhan[i - 1] + dp[i];
//	}
//	long long ret = 0;
//	for (int i = 1; i <= size-1; i++)
//	{
//		int a = 0; int b = 0; int c = 0;//a单程，b卡单程，c卡钱
//		cin >> a >> b >> c;
//		if (a * zhan[i] > b * zhan[i] + c)
//		{
//			ret += b * zhan[i] + c;
//		}
//		else ret += a * zhan[i];
//
//	}
//	cout << ret;
//	return 0;
//}









//long long num[100001];
//long long dp[100001];
//int main()
//{
//	int n = 0;//元素数量
//	int m = 0;//操作次数
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		dp[i] = num[i] - num[i - 1];
//	}
//	for (int i = 0; i < m; i++)
//	{
//		int x = 0; int y = 0; int k = 0;
//		cin >> x >> y >> k;//左右，加的数
//		dp[x] += k; dp[y + 1] -= k;//注意右边界
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		num[i] = num[i - 1] + dp[i];
//		cout << num[i]<<" ";
//	}
//
//
//	return 0;
//}






//int b[5010][5010];
//int dp[5010][5010];
//int main()
//{
//	int a = 0; int size = 0;//a为边长，size为个数
//	cin >> size >> a;
//	for (int i = 0; i < size; i++)
//	{
//		int x = 0; int y = 0; int v = 0; cin >> x >> y >> v;
//		b[x + 1][y + 1] += v;
//	}
//	for (int i = 1; i <= 5001; i++)
//	{
//		for (int j = 1; j <= 5001; j++)
//		{
//			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + b[i][j];
//		}
//	}
//	if (a > 5001)
//	{
//		cout << dp[5001][5001]; return 0;
//	}
//	int _max = 0;
//	for (int x1 = a; x1 <= 5001; x1++)
//	{
//		for (int y1 = a; y1 <= 5001; y1++)
//		{
//			int x2 = x1 - a + 1; int y2 = y1 - a + 1;
//			_max = max(_max, dp[x1][y1] - dp[x2 - 1][y1] - dp[x1][y2 - 1] + dp[x2 - 1][y2 - 1]);
//		}
//	}
//	cout << _max;
//	return 0;
//}












//long long dp[10000000];
//int main()
//{
//	
//	int n = 0; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		int in = 0; cin >> in;
//		dp[i] = dp[i - 1] + in;
//	}
//	long long _minnum = 0;//为什么不是dp[0]?
//	long long _max = -1000000;
//	for (int i = 1; i <= n; i++)
//	{
//		_max = max(_max, dp[i] - _minnum);
//		_minnum = min(_minnum, dp[i]);
//	}
//	cout << _max;
//	return 0;
//}







  
//int a[5] = { 0 };
//int allo(int push)
//{
//	int ret = 0;
//	while (push)
//	{
//		push = push & (push - 1);
//		ret++;
//	}
//	return ret;
//}
//int main()
//{
//	int T = 0; cin >> T;
//	while (T--)
//	{
//		memset(a, 0, sizeof a);//之前数据清空
//		for (int i = 0; i < 5; i++)
//		{
//			for (int j = 0; j < 5; j++)
//			{
//				char ch; cin >> ch;
//				if (ch == '0') a[i] = a[i] | 1 << (4 - j);
//			}
//		}
//		int ret = 1000000;
//		for (int j = 0; j < (1 << 5); j++)
//		{
//			int push = j;
//			int b[5]; memcpy(b, a, sizeof(a));
//			int p = 0;
//			for (int i = 0; i < 5; i++)
//			{
//				p += allo(push);
//				b[i] = b[i] ^ push ^ (push << 1) ^ (push >> 1);
//				b[i] &= ((1 << 5) - 1);
//				if (i < 4) b[i + 1] ^= push;
//				push = b[i];
//			}
//			if (b[4] == 0) ret = min(ret, p);
//		}
//		if (ret > 6)cout << -1<<endl;
//		else cout << ret<<endl;
//	}
//	
//
//
//	return 0;
//}




//#define _CRT_SECURE_NO_WARNINGS
//#include<iostream>
//#include<string>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<algorithm>
//using namespace std;
//
//int a[5] = { 0 };
//int allo(int push)
//{
//	int ret = 0;
//	while (push)
//	{
//		push = push & (push - 1);
//		ret++;
//	}
//	return ret;
//}
//int main()
//{
//	for (int i = 0; i < 5; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			char ch; cin >> ch;
//			if (ch == '0') a[i] = a[i] | 1 << (4 - j);
//		}
//	}
//	int ret = 10000;
//	for (int j = 0; j < (1 << 5); j++)
//	{
//		int push = j;
//		int b[5]; memcpy(b, a, sizeof(a));
//		int p = 0;
//		for (int i = 0; i < 5; i++)
//		{
//			p += allo(push);
//			b[i] = b[i] ^ push ^ (push << 1) ^ (push >> 1);
//			b[i] &= ((1 << 5) - 1);
//			b[i + 1] ^= push;
//			push = b[i];
//		}
//		if (b[4] == 0) ret = min(ret, p);
//	}
//	if (ret > 6)cout << -1;
//	else cout << ret;
//
//
//	return 0;
//}




//#include <iostream>
//#include <cstring>
//using namespace std;
//const int N = 10;
//int n = 5;
//int a[N]; // ⽤⼆进制表⽰，来存储灯的状态
//int t[N]; // 备份 a 数组
//// 计算 x 的⼆进制表⽰中⼀共有多少个 1
//int calc(int x)
//{
//	int cnt = 0;
//		while (x)
//		{
//			cnt++;
//			x &= x - 1;
//		}
//	return cnt;
//}
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		// 多组测试时，⼀定要注意清空之前的数据
//		memset(a, 0, sizeof a);
//		for (int i = 0; i < n; i++)
//		{
//			for (int j = 0; j < n; j++)
//			{
//				char ch; cin >> ch;
//				// 存成相反的
//				if (ch == '0') a[i] |= 1 << j;
//			}
//		}
//		int ret = 0x3f3f3f3f; // 统计所有合法的按法中的最⼩值
//		// 枚举第⼀⾏所有的按法
//		for (int st = 0; st < (1 << n); st++)
//		{
//			memcpy(t, a, sizeof a);
//			int push = st; // 当前⾏的按法
//			int cnt = 0; // 统计当前按法下⼀共按了多少次
//			// 依次计算后续⾏的结果以及按法
//			for (int i = 0; i < n; i++)
//			{
//				cnt += calc(push);
//				// 修改当前⾏被按的结果
//				t[i] = t[i] ^ push ^ (push << 1) ^ (push >> 1);
//				t[i] &= (1 << n) - 1; // 清空影响
//				// 修改下⼀⾏的状态
//				t[i + 1] ^= push;
//				// 下⼀⾏的按法
//				push = t[i];
//			}
//
//		if (t[n - 1] == 0) ret = min(ret, cnt);
//		}
//		if (ret > 6) cout << -1 << endl;
//		else cout << ret << endl;
//	}
//	return 0;
//}







//int b[1000]; int a[1];
//int n = 0;
//int check1()
//{
//	a[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if (a[i] != 1 && a[i] != 0)return 0;
//	}
//	if (a[n] + a[n - 1] != b[n])return 0;
//	return 1;
//}
//int check2()
//{
//	a[1] = 0;
//	for (int i = 2; i <= n; i++)
//	{
//		a[i] = b[i - 1] - a[i - 1] - a[i - 2];
//		if (a[i] != 1 && a[i] != 0)return 0;
//	}
//	if (a[n] + a[n - 1] != b[n])return 0;
//	return 1;
//}
//
//
//int main()
//{
//	a[0] = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++) cin >> b[i];
//	int ret = 0;
//	ret = ret + check1() + check2();
//	cout << ret;
//	return 0;
//}










//int x = 0; int y = 0;
//int m[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 };
//int main()
//{
//	int ret = 0;
//	cin >> x >> y;
//	for (int i = 1; i <= 12; i++)
//	{
//		for (int j = 1; j <= m[i]; j++)
//		{
//			int year = j % 10 * 1000 + j / 10 * 100 + i % 10 * 10 + i / 10 ;
//			int data = year*10000 + i * 100 + j;
//			if (x <= data && data <= y) {
//				ret++; 
//			}
//		}
//	}
//	cout << ret;
//	return 0;
//}














//int x[10000]; int y[10000]; int a[10000]; int b[10000];
//bool zai(int i, int m, int n)
//{
//	if (m >= x[i] && m <= x[i] + a[i] && n >= y[i] && n <= y[i] + b[i])
//	{
//		return true;
//	}
//	return false;
//}
//
//int main()
//{
//	int _size = 0;
//	cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> x[i] >> y[i] >> a[i] >> b[i];
//	}
//	int m = 0; int n = 0;
//	cin >> m >> n;
//	int ret = -1;
//	for (int i = 0; i < _size; i++)
//	{
//		if (zai(i, m, n))
//		{
//			ret = i + 1;
//		}
//	}
//	cout << ret;
//	return 0;
//}











//string x;
//int a[5001]; long long b; int c[5001];
//int la; int lc;
//void sub(int c[], int a[], long long b)
//{
//	long long u = 0;
//	for (int i = la - 1; i >= 0; i--)
//	{
//		u = u * 10 + a[i];
//		c[i] = u / b;
//		u %= b;
//	}
//	while (lc > 1 && c[lc - 1] == 0) lc--;
//}
//int main()
//{
//	cin >> x >> b; 
//	la = x.size();
//	for (int i = 0; i < la; i++)a[la - 1 - i] = x[i]-'0';
//	lc = la;
//	sub(c, a, b);
//	for (int i = lc - 1; i >= 0; i--)cout << c[i];
//	return 0;
//}















//string x; string y;
//int a[2001]; int b[2001]; int c[4002];
//int la; int lb; int lc;
//void mul(int c[], int a[], int b[])
//{
//	for (int i = 0; i < la; i++)
//	{
//		for (int j = 0; j < lb; j++)
//		{
//			c[i + j] += a[i] * b[j];//注意，+=
//		}
//	}
//	for (int k = 0; k < lc; k++)
//	{
//		c[k + 1] += (c[k] / 10);//先进位再取模
//		c[k] %= 10;
//	}
//	while (c[lc-1] == 0 && lc > 1)lc--;
//}
//int main()
//{
//	cin >> x >> y;
//	la = x.size(); lb = y.size(); lc = la + lb;
//	for (int i = 0; i < la; i++) a[la - 1 - i] = x[i]-'0';
//	for (int i = 0; i < lb; i++) b[lb - 1 - i] = y[i]-'0';
//	mul(c, a, b);
//	for (int k = lc - 1; k >= 0; k--)cout << c[k];
//	return 0;
//}