#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
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

using namespace std;
const int maxn = 100005;
int n;
int a[maxn];
int main()
{
    scanf("%d", &n);
    int k = 0;
    int m = 1;
    int cnt = sqrt(n);//每块平均长度也是根号n
    for (int i = 1; i <= (n / cnt); i++)
    {
        for (int j = n + 1 - i * cnt; j < n + 1 - (i - 1) * cnt; j++)
            a[k++] = j;
    }
    while (k < n)
    {
        a[k++] = m++;
    }
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}




//int ret[2010];
//int main()
//{
//	int k; cin >> k;
//	int pos = 0;
//	for (int i = 1; i <= k; i+=2)
//	{
//		if (i <= k - 1)
//		{
//			ret[++pos] = i + 1;
//			ret[++pos] = i;
//		}
//		else
//		{
//			ret[++pos] = i;
//		}
//	}
//	for (int i = 1; i <= pos; i++)
//	{
//		cout << ret[i]<<" ";
//	}
//	return 0;
//}





//int main()
//{
//	string a; cin >> a;
//	int r = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		if (a[i] == '0')r++;
//	}
//	if (r % 2 == 0)cout << "Yes" << endl;
//	else cout << "No" << endl;
//	return 0;
//}








//ll zimu[100];
//
//int cnt(char ch)
//{
//	if (ch >= 'a' && ch <= 'z')
//	{
//		return ch - 'a';
//	}
//	else
//	{
//		return ch - 'A' + 26;
//	}
//}
//
//
//
//int main()
//{
//	int n; int k;//长度，次数
//	cin >> n >> k;
//	if (k >= 26)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		char ch; cin >> ch;
//		int d = cnt(ch); zimu[d]++;
//	}
//	for (int i = 1; i <= k; i++)
//	{
//		int m = 0;
//		for (int j = 0; j <= 60; j++)
//		{
//			if (zimu[j] > zimu[m])
//			{
//				m = j;
//			}
//		}
//		if (zimu[m] >= 3)
//			zimu[m] = 0;
//	}
//	ll ret = 0;
//	for (int i = 0; i <= 60; i++)
//	{
//		ret += zimu[i];
//	}
//	cout << ret << endl;
//	return 0;
//}
//
//
//ll zimu[100];
//
//int cnt(char ch)
//{
//	if (ch >= 'a' && ch <= 'z')
//	{
//		return ch - 'a';
//	}
//	else
//	{
//		return ch - 'A' + 26;
//	}
//}
//
//int main()
//{
//	int n; int k;//长度，次数
//	cin >> n >> k;
//	string s; cin >> s;
//	vector<int> shuzi(26, 0);//存字符串
//	for (int i = 0; i < s.size(); i++)
//	{
//		shuzi[s[i] - 'a']++;
//	}
//	int all = 0;//删除了多少
//	for (int i = 0; i < 26; i++)
//	{
//		if (shuzi[i] >= 3)
//		{
//			int a = shuzi[i] / 3;
//			int r = min(a, k);//最多只能去掉
//			all += r*3;
//			k -= r;
//
//		}
//	}
//	cout << n - all << endl;
//	return 0;
//}



//int tu[1010][1010];
//
//
//int main()
//{
//	int n; cin >> n;//边长
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	if (tu[1][1] == 1)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int maxs = 0;
//	int minlong = n;//长
//	for (int i = 1; i <= n; i++)
//	{
//		int _long = 0;
//		if (tu[i][1] == 1)break;
//		for (int j = 1; j <= minlong; j++)
//		{
//			if (tu[i][j] == 1)
//			{
//				minlong = min(minlong, j-1);
//				break;
//				
//			}
//			_long = j;
//		}
//		if (_long >= 0)
//		{
//			maxs = max(maxs, _long * i);
//		}
//		if (_long == n)
//		{
//			maxs = max(maxs, n * i);
//		}
//	}
//	cout << maxs << endl;
//}






//int tu[1010][1010];//可通过1，不可0
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { 1,-1,0,0 };
//queue<pair<int, int>> qu;
//bool gone[1010][1010];
//
//int main()
//{
//	int n; int m; cin >> n >> m;
//	n += 2;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			tu[i][j] = 1;
//		}
//	}
//	for (int i = 2; i <= n - 1; i++)
//	{
//		int a; char ch;
//		cin >> a >> ch;
//		if (ch == 'L')
//		{
//			for (int j = 1; j <= a; j++)
//			{
//				tu[i][j] = 0;
//			}
//		}
//		else
//		{
//			for (int j = a; j <= m; j++)
//			{
//				tu[i][j] = 0;
//			}
//		}
//	}
//	qu.push({ 1,m });
//	gone[1][m] = true;
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x<1 || x>n || y<1 || y>m || gone[x][y]||tu[x][y]==0)continue;
//			if (x == n && y == 1)
//			{
//				cout << "YES" << endl;
//				return 0;
//			}
//			qu.push({ x,y });
//			gone[x][y] = true;
//		}
//	}
//	cout << "NO" << endl;
//	return 0;
//}








//ll tian[500010];
//ll qi[500010];
//bool used[500010];
//
//bool cmp(ll a, ll b)
//{
//	return a > b;
//}
//
//
//int main()
//{
//	int n1; int n2;//田忌，齐威王马数
//	scanf("%d %d", &n1, &n2);
//	for (int i = 1; i <= n1; i++)
//	{
//		ll s = 1; scanf("%lld", &s);
//		tian[i] = s;
//	}
//	for (int i = 1; i <= n2; i++)
//	{
//		ll s = 1; scanf("%lld", &s);
//		qi[i] = s;
//	}
//	ll ret = 0;
//	sort(tian + 1, tian + 1 + n1, cmp);
//	int p1 = 1; int p2 = 1;
//	int ts = n1;//天机最慢的马
//	while (p1 <= n2 && p2 <= n2)
//	{
//		if (tian[p1] > qi[p2])
//		{
//			ret += qi[p2];
//			p2++; p1++;
//		}
//		else
//		{
//			ts--;
//			p2++;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}






//2
//ll num[1200000];
//
//int main()
//{
//	int n; int k;
//	scanf("%d %d", &n, &k);
//	for (int i = 1; i <= n; i++)
//	{
//		ll s;
//		scanf("%lld", &s);
//		num[i] = s;
//	}
//	return 0;
//}




//1
//int t;
//
//int main()
//{
//	cin >> t;
//	for (int i = 1; i <= t; i++)
//	{
//		cout << "%";
//
//	}
//	return 0;
//}






//ll dp[1000010][6];//血量，轻棍数,存储最小体力花费
//ll h[1000010];
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//		int hp; int a; int b; int c; int d;
//		cin >> hp >> a >> b >> c >> d;
//		for (int i = 0; i <= hp; i++)
//		{
//			for (int j = 0; j <= 4; j++)
//			{
//				dp[i][j] = 0x3f3f3f3f3f3f3f3f;
//			}
//		}
//
//		dp[hp][0] = 0;
//		for (int i = 1; i <= hp; i++)
//		{
//			cin >> h[i];
//		}
//		for (int i = hp; i >= 0; i--)
//		{
//			for (int j = 0; j <= 4; j++)
//			{
//				if (dp[i][j] == 0x3f3f3f3f)continue;
//				dp[max(i-b,0)][min(4,j+1)] = min(dp[i][j] + a, dp[max(i - b, 0)][min(4, j + 1)]);
//				if (j < 4)dp[max(i - d, 0)][0] = min(dp[max(i - d, 0)][0],dp[i][j] + c);
//				else dp[max(i - d - h[i], (ll)0)][0] = min(dp[max(i - d-h[i], (ll)0)][0], dp[i][j] + c);
//			}
//		}
//		ll ret = 0x3f3f3f3f3f3f3f3f;
//		ret = min(dp[0][0], ret); ret = min(dp[0][1], ret); ret = min(dp[0][2], ret); ret = min(dp[0][3], ret); ret = min(dp[0][4], ret);
//		cout << ret << endl;
//	}
//	return 0;
//}




//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		unordered_map<int, int> gone;
//		ll n; ll x; ll y; ll a; ll b;
//		int i = n % x; int j = n % y;
//		if(gone[i]==0)
//	}
//	return 0;
//}




//ll val[1000010];
//ll n; ll k;//货物数，最大运送次数
//ll sum;//货物总和
//
//ll can(ll s)
//{
//	ll su = 0;
//	ll ret = 1;
//	for (ll i = 1; i <= n; i++)
//	{
//		if (val[i] > s) return k + 1;
//		if (su + val[i] > s)  // 当前货物无法加入本次运输
//		{
//			ret++;
//			su = val[i];  // 开始新的运输
//		}
//		else
//		{
//			su += val[i];  // 加入当前运输
//		}
//	}
//
//	return ret;
//}
//
//
//int main()
//{
//	ll T; cin >> T;
//	while (T--)
//	{
//		sum = 0;
//		cin >> n >> k;
//		for (ll i = 1; i <= n; i++)
//		{
//			cin >> val[i];
//			sum += val[i];
//		}
//		ll l = 1; ll r = sum;
//		while (l < r)
//		{
//			ll mid = l + (r - l) / 2;
//			if (can(mid) > k)l = mid + 1;
//			else r = mid;
//		}
//		cout << l << endl;
//	}
//	return 0;
//}





//char tu[60][60];
//int dx[4]{ 1, -1, 0, 0 };
//int dy[4]{ 0, 0, -1, 1 };
//
//int n; int m;//行列
//queue<pair<int, int>> qu;
//bool cango[60][60];//注意，反过来
//int xb; int yb; int xe; int ye;
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//			if (tu[i][j] == '*') cango[i][j] = true;
//		}
//	}
//	cin >> xb >> yb >> xe >> ye;
//	cango[xe][ye] = false;
//	qu.push({ xb,yb });
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x<1 || x>n || y<0 || y>m || cango[x][y])continue;
//			cango[x][y] = true;
//			qu.push({ x,y });
//			if (x == xe && y == ye)
//			{
//				cout << "yEs" << endl;
//				return 0;
//			}
//
//		}
//	}
//	cout << "nO" << endl;
//	return 0;
//}







//int val[1010];
//ll all;
//
//bool cmp(int x, int y)
//{
//	return x > y;
//}
//bool cmp2(int x, int y)
//{
//	return x < y;
//}
//
//
//int main()
//{
//	int n;
//	cin >> n >> all;//机器数，程序数
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> val[i];
//	}
//	sort(val + 1, val + n + 1, cmp);
//	int pos = 0;
//	ll ap = all;
//	while (all > 0)
//	{
//		all -= val[++pos];
//	}
//	cout << pos << " ";
//	pos = 0;
//	if (ap <= n)cout << ap<<" ";
//	else
//	{
//		//ap -= n;
//		//int i = 1;
//		//for (i = 1; i <= n && ap > 0; i++)
//		//{
//		//	ap = ap-val[i] + 1;
//		//}
//		////while (val[i+1] == 1)i++;
//		cout << n << " ";
//
//	}
//	
//
//	return 0;
//}




//int main()
//{
//	int n; cin >> n;
//	while (n--)
//	{
//		string a;
//		cin >> a;
//		cout << "Welcome to GDUT " << a << endl;
//	}
//	return 0;
//}