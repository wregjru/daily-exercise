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


ll n; ll k;

int main()
{
	cin >> n >> k;
	ll s = n % k;
	cout << k - s << endl;
	return 0;
}



//int n;
//int num[200010];
//int in[200010];
//bool gone[200010];
//int bfs(int s)
//{
//	int ret = 0;
//	queue<int> qu;
//	qu.push(s);
//	gone[s] = true;
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		ret++;
//		if (num[a] == s)return ret;
//		gone[a] = true;
//		if (!gone[num[a]])qu.push(num[a]);
//	}
//}
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		in[num[i]]++;
//	}
//	queue<int> qu;
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int s = qu.front(); qu.pop();
//		in[num[s]]--;
//		if (in[num[s]] == 0)qu.push(num[s]);
//		gone[s] = true;
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!gone[i])ret = min(bfs(i), ret);
//	}
//	cout << ret << endl;
//	return 0;
//}






//int a; int b;
//bool gone[10][10];
//ll ret;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//void dfs(int x, int y)
//{
//	if (x < 1 || x >= a || y < 1 || y >= b)
//	{
//		ret++; return;
//	}
//	gone[x][y] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int x1 = x + dx[i]; int y1 = y + dy[i];
//		if (gone[x1][y1])continue;
//		dfs(x1, y1);
//		
//	}
//	gone[x][y] = false;
//}
//
//
//int main()
//{
//	cin >> a >> b;
//	for (int i = 1; i < b; i++)
//	{
//		gone[0][i] = true;
//		dfs(1, i);
//		gone[0][i] = false;
//	}
//	for (int i = 1; i <a; i++)
//	{
//		gone[i][0] = true;
//		dfs(i, 1);
//		gone[i][0] = false;
//	}
//	cout << ret << endl;
//	return 0;
//}





//int a; int b;
//ll ret;
//bool gone[10][10];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { -1,1,0,0 }; 
//
//void dfs(int x,int y)
//{
//	if (x < 1 || x >= a || y < 1 || y >= b)
//	{
//		ret++;
//		return;
//	}
//	gone[x][y] = true;
//	for (int i = 0; i < 4; i++)
//	{
//		int x1 = x + dx[i];
//		int y1 = y + dy[i];
//		if (!gone[x1][y1])
//		{
//			dfs(x1, y1);
//		}
//	}
//	gone[x][y] = false;
//	
//	
//}
//
//int main()
//{
//	cin >> a >> b;
//	for (int i = 1; i < b; i++)
//	{
//		gone[0][i] = true;
//		dfs(1,i);
//		gone[0][i] = false;
//	}
//	for (int i = 1; i < a; i++)
//	{
//		gone[i][0] = true;
//		dfs(i,1);
//		gone[i][0] = false;
//	}
//	cout << ret << endl;
//	return 0;
//}







//int n;
//int dp[1000];
//int main()
//{
//	cin >> n;
//	if (((1 + n) * n % 4) != 0)
//	{
//		cout << 0 << endl;
//		return 0;
//	}
//	int hal = (1 + n) * n / 4;
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = hal; j >= i; j--)
//		{
//			dp[j] += dp[j - i];
//		}
//	}
//	cout << dp[hal]/2 << endl;
//	return 0;
//}




//priority_queue<int> heap;
//int n; int a; int b;
//int main()
//{
//	cin >> n >> a >> b;
//	for (int i = 1; i <= n; i++)
//	{
//		int s; cin >> s;
//		heap.push(s);
//	}
//	int ma = heap.top();
//	int minu = 0;
//	for (int i = 0; i <= ma; i+=a)
//	{
//		int s = heap.top();
//		heap.pop();
//		if (i >= s)break;
//		minu++;
//		s -= b;
//		heap.push(s);
//	}
//	cout << minu << endl;
//	return 0;
//}


//int dry[500010];
//int cha[500010];
//int n;
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> dry[i];
//	}
//	sort()
//	for (int i = 1; i <= n; i++)
//	{
//		cha[i]=dry
//	}
//	return 0;
//}




//int num[10];
//bool dp[20010];
//int ma[6] = { 1,2,3,5,10,20 };
//int main()
//{
//	dp[0] = true;
//	int sum = 0;
//	for (int i = 1; i <= 6; i++)
//	{
//		cin >> num[i];
//		sum += num[i] * ma[i - 1];
//	}
//	for (int i = 1; i <= 6; i++)
//	{
//		for (int j = sum; j >= 1; j--)
//		{
//			for (int k = 0; k <= num[i] && k * ma[i - 1] <= j; k++)
//			{
//				if (dp[j - ma[i - 1] * k] == true)
//					dp[j] = true;
//			}
//		}
//	}
//	int ret = 0;
//	for (int i = 1; i <= sum; i++)
//	{
//		if (dp[i] == true)ret++;
//	}
//	cout << "Total=" << ret << endl;
//	return 0;
//}





//int n; int m; int k;
//ll tu[1010][1010];
//ll dp[1010][1010];
//int main()
//{
//	cin >> n >> m >> k;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			dp[i][j] = tu[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
//		}
//	}
//	int bx = 0; int by = 0;
//	ll ma = -0x3f3f3f3f3f3f3f3f;
//	for (int i = 1; i <= n-k+1; i++)
//	{
//		for (int j = 1; j <= m-k+1; j++)
//		{
//			int su = dp[i - 1][j - 1] + dp[i + k-1][j + k-1] - dp[i - 1][j + k-1] - dp[i + k-1][j - 1];
//			if (su > ma)
//			{
//				ma = su;
//				bx = i; by = j;
//			}
//		}
//	}
//	cout << bx <<" " << by << endl;
//	return 0;
//}





//ll n; ll m;
//int flag = 1;
//ll qow(ll a, ll b)
//{
//	ll ret = 1;
//	while (b)
//	{
//		if (a > 1e9)
//		{
//			flag = 0; return ret;
//		}
//		if (b & 1)ret *= a;
//		if (ret > 1000000000)
//		{
//			flag = 0; return ret;
//		}
//		a = a * a;
//		b = b >> 1;
//		
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> n >> m;
//	ll ret=qow(n, m);
//	if (flag == 0)cout << -1 << endl;
//	else cout << ret << endl;
//	return 0;
//}




//string b; string e;
//struct node
//{
//	string a; string b;
//}rul[20];
//int pos = 1;
//unordered_map<string, int>dist;
//queue<string> qu;
//
//int main()
//{
//	cin >> b >> e;
//	if (b == e)
//	{
//		cout << 0 << endl; return 0;
//	}
//	while (pos<20&&cin >> rul[pos].a >> rul[pos].b)
//	{
//		pos++;
//	}
//	pos--;
//	qu.push(b);
//	dist[b] = 0;
//	while (!qu.empty())
//	{
//		string t = qu.front(); qu.pop();
//		if (dist[t] >= 10)continue;
//		for (int i = 1; i <= pos; i++)
//		{
//			size_t f =0;
//			while (t.find(rul[i].a,f) != string::npos)
//			{
//				f = t.find(rul[i].a, f);
//				string ne = t.substr(0, f) + rul[i].b + t.substr(rul[i].a.size() + f);
//				f++;
//				if (dist.count(ne))continue;
//				dist[ne] = dist[t] + 1;
//				qu.push(ne);
//				if (ne==e)
//				{
//					cout << dist[ne] << endl; return 0;
//				}
//			}
//			
//		}
//	}
//	cout << "NO ANSWER!";
//	return 0;
//}







//int t[50010];
//int n; int s;
//int main()
//{
//	cin >> n >> s;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> t[i];
//		t[i] += t[i - 1];
//	}
//	while (s--)
//	{
//		int a;
//		cin >> a;
//		int l = 1; int r = n;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (t[mid] > a)r = mid;
//			else l = mid + 1;
//		}
//		cout << l << endl;
//	}
//
//	return 0;
//}





//int num[110];
//int n;
//int main()
//{
//	int ret = 0;
//	int sum = 0;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		sum += num[i];
//	}
//	sum = sum / n;
//	for (int i = 1; i < n; i++)
//	{
//		if (num[i] == sum)continue;
//		num[i + 1] -= (sum-num[i]);
//		ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}





//struct node
//{
//	ll x; ll y; ll z;
//}zuo[1010];
//ll n; ll h; ll r;
//bool gone[1010];
//ll dis(int a, int b)
//{
//	ll d = (zuo[a].x - zuo[b].x) * (zuo[a].x - zuo[b].x) + (zuo[a].y - zuo[b].y) * (zuo[a].y - zuo[b].y) + (zuo[a].z - zuo[b].z) * (zuo[a].z - zuo[b].z);
//	return d;
//}
//
//int main()
//{
//	int T; cin >> T;
//	while (T--)
//	{
//
//		int flag = 0;
//		memset(gone, false, sizeof(gone));
//		queue<int> qu;
//		cin >> n >> h >> r;
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> zuo[i].x >> zuo[i].y >> zuo[i].z;
//		}
//		for(int i=1;i<=n;i++)
//		{
//			if (r >= zuo[i].z)
//			{
//				qu.push(i);
//				gone[i] = true;
//				if (zuo[i].z + r >= h)
//				{
//					flag = 1;
//				}
//			}
//			
//		}
//		while (!qu.empty())
//		{
//			int a = qu.front(); qu.pop();
//			for (int i = 1; i <= n; i++)
//			{
//				if (!gone[i] && dis(a, i) <= 4 * r * r)
//				{
//					qu.push(i);
//					gone[i] = true;
//					if (h - zuo[i].z <= r)
//					{
//						flag = 1;
//						break;
//					}
//				}
//			}
//		}
//		if (flag == 0)cout << "No" << endl;
//		if (flag == 1)cout << "Yes" << endl;
//	}
//	return 0;
//}







//string a;
//
//
//int main()
//{
//	cin >> a;
//	int ret = 0;
//	ret += (a[0] - '0') * 1 % 11;
//	ret += (a[2] - '0') * 2 % 11;
//	ret += (a[3] - '0') * 3 % 11;
//	ret += (a[4] - '0') * 4 % 11;
//	ret += (a[6] - '0') * 5 % 11;
//	ret += (a[7] - '0') * 6 % 11;
//	ret += (a[8] - '0') * 7 % 11;
//	ret += (a[9] - '0') * 8 % 11;
//	ret += (a[10] - '0') *9 % 11;
//	ret %= 11;
//	if (ret == 10 && a[12] == 'X')
//	{
//		cout << "Right" << endl;
//		return 0;
//	}
//	if (ret == (a[12] - '0'))cout << "Right" << endl;
//	else
//	{
//		if (ret == 10)a[a.size() - 1] = 'X';
//		else a[a.size() - 1] = '0'+ret;
//		cout << a << endl;
//	}
//	
//	return 0;
//}





//int n; int m;
//char a[110][110];
//int main()
//{
//	cin >> n >> m;
//	for(int i=1;i<=n;i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == '*')continue;
//			int s = 0;
//			if (a[i - 1][j - 1] == '*')s++;
//			if (a[i][j - 1] == '*')s++;
//			if (a[i + 1][j - 1] == '*')s++;
//			if (a[i - 1][j] == '*')s++;
//			if (a[i + 1][j] == '*')s++;
//			if (a[i - 1][j + 1] == '*')s++;
//			if (a[i][j + 1] == '*')s++;
//			if (a[i + 1][j + 1] == '*')s++;
//			a[i][j] = '0' + s;
//		}
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << a[i][j];
//		}
//		cout << endl;
//	}
//	return 0;
//}