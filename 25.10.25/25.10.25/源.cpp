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








//int n;
//int num[200010];
//int in[200010];
//
//bool gone[200010];
//
//int dfs(int s)
//{
//	int ret = 0;
//	queue<int> q;
//	q.push(s);
//	gone[s] = true;
//	while (!q.empty())
//	{
//		int a = q.front(); q.pop();
//		ret++;
//		if (num[a] == s)
//		{
//			return ret;
//		}
//		q.push(num[a]);
//		gone[num[a]] = true;
//	}
//}
//
//
//
//
//int main()
//{
//	queue<int> qu;
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		in[num[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front();
//		qu.pop();
//		in[num[a]]--;
//		gone[a] = true;
//		if (in[num[a]] == 0)
//		{
//			qu.push(num[a]);
//		}
//	}
//	int ret = 0x3f3f3f3f;
//	for (int i = 1; i <= n; i++)
//	{
//		if (!gone[i])
//		{
//			ret = min(ret, dfs(i));
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}






//int tu[6010][6010];
//int dp[6010][6010];//差分
//ll ret;
//int main()
//{
//	int n; int m; int k; cin >> n >> m >> k;
//	for (int i = 1; i <= m; i++)
//	{
//		int x; int y; int z; cin >> x >> y >> z;
//		tu[x][y] = z;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			dp[i][j] += tu[i][j];
//			dp[i + 1][j] -= tu[i][j];
//			dp[i][j + 1] -= tu[i][j];
//			dp[i + 1][j + 1] += tu[i][j];
//		}
//	}
//	for (int i = 1; i <= n - k + 1; i++)
//	{
//		for (int j = 1; j <= n - k + 1; j++)
//		{
//			int c = dp[i][j];
//			ret += abs(c);
//			dp[i][j] -= c;
//			dp[i + k][j] += c;
//			dp[i][j + k] += c;
//			dp[i + k][j + k] -= c;
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= n; j++)
//		{
//			int s = dp[i][j] - dp[i - 1][j] - dp[i][j - 1] + dp[i - 1][j - 1];
//			if (s != 0)
//			{
//				cout << -1 << endl; return 0;
//			}
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}





//int n; int num[200010];
//int in[200010];
//bool gone[200010];
//queue<int> qu;
//int ret = 0x3f3f3f3f;
//
//int bfs(int s)
//{
//	int r = 0;
//	queue<int> b;
//	b.push(s);
//	gone[s] = true;
//	while (!b.empty())
//	{
//		int a = b.front(); b.pop();
//		r++;
//		if (num[a] == s)return r;
//		b.push(num[a]);
//		gone[num[a]] = true;
//	}
//}
//
//
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//		in[num[i]]++;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (in[i] == 0)qu.push(i);
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front(); qu.pop();
//		in[num[a]]--;
//		if (in[num[a]] == 0)qu.push(num[a]);
//		gone[a] = true;
//
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!gone[i])
//		{
//			ret = min(bfs(i), ret);
//		}
//	}
//	cout << ret << endl;
//
//	return 0;
//}







//int a; int b;
//ll ret;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//bool gone[10][10];
//queue<pair<int, int>> qu;
//void bfs()
//{
//	while (!qu.empty())
//	{
//		int x = qu.front().first;
//		int y = qu.front().second;
//		qu.pop();
//		if (x < 1 || x >= a || y < 1 || y >= b)
//		{
//			ret++; continue;
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int x1 = x + dx[i]; int y1 = y + dy[i];
//			if (gone[x1][y1])continue;
//			gone[x1][y1] = true;
//			qu.push({ x1,y1 });
//		}
//	}
//}
//
//
//
//int main()
//{
//	cin >> a >> b;
//	for (int i = 1; i < b; i++)
//	{
//		memset(gone, false, sizeof(gone));
//		gone[0][i] = true;
//		qu.push({ 1,i });
//		bfs();
//		gone[0][i] = false;
//	}
//	for (int i = 1; i < a; i++)
//	{
//		memset(gone, false, sizeof(gone));
//		gone[i][0] = true;
//		qu.push({ i,1 });
//		bfs();
//		gone[i][0] = false;
//	}
//	cout << ret << endl;
//	return 0;
//}









//int a; int b;
//ll ret;
//int dx[4] = { 1,-1,0,0 };
//int dy[4] = { 0,0,1,-1 };
//bool gone[10][10];
//
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
//	}
//	gone[x][y]=false;
//}
//
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
//	for (int i = 1; i < a; i++)
//	{
//		gone[i][0] = true;
//		dfs(i, 1);
//		gone[i][0] = false;
//	}
//	cout << ret << endl;
//	return 0;
//}




//ll dp[50][1000];
//int n;
//int main()
//{
//	cin >> n;
//	int half = n * (n + 1) / 4;
//	if ((n * (n + 1) % 4) != 0)
//	{
//		cout << 0 << endl; return 0;
//	}
//	dp[0][0] = 1;
//	
//	for (int i = 1; i <= n; i++)//数字个数
//	{
//		for (int j = half; j >=0; j--)
//		{
//			dp[i][j] = dp[i - 1][j];
//			if(j>=i)dp[i][j]  += dp[i - 1][j - i];
//		}
//	}
//	cout << dp[n][half]/2 << endl;
//	return 0;
//}








//int n;
//ll ret;
//int sum;
//int all;
//
//void dfs(int s)
//{
//	if (s > n)return;
//	if (sum == all)
//	{
//		ret++;
//		return;
//	}
//	sum += s;
//	dfs(s + 1);
//	sum -= s;
//	dfs(s + 1);
//}
//
//int main()
//{
//	cin >> n;
//	if ((n * (n + 1) % 4) != 0) 
//	{
//		cout << 0 << endl; return 0;
//	}
//	all = n * (n + 1) / 4;
//	dfs(1);
//	cout << ret << endl;
//	return 0;
//}



//int main()
//{
//	int k;string s; cin >> s >> k;
//	for (int j = 1; j <= k; j++)
//	{
//		bool flag = false;
//		for (int i = 0; i < s.size()-1; i++)
//		{
//			if (s[i] > s[i + 1])
//			{
//				s.erase(i, 1);
//				flag = true;
//				break;
//			}
//		}
//		if (flag == false)s.pop_back();
//	}
//	while (s.size()>1 && s[0] == '0')s.erase(0, 1);
//	cout << s << endl;
//	
//	return 0;
//}



//int num[100];
//int pos;
//int main()
//{
//	int n; cin >> n;
//	if (n & 1)
//	{
//		cout << -1 << endl; return 0;
//	}
//	int s = 2;
//	n=n >> 1;
//	while (n)
//	{
//		if (n & 1)
//		{
//			num[++pos] = s;
//		}
//		s *= 2;
//		n = n >> 1;
//	}
//	for (int i = pos; i >= 1; i--)
//	{
//		cout << num[i] << " ";
//	}
//	return 0;
//}





//string pre;
//string dst;
//struct node
//{
//	string a;
//	string b;
// 
//}rul[20];
//int pos = 1;//有多少规则
//queue<string> qu;
//unordered_map<string, int> dist;//经过多少步
//
//
//int main()
//{
//	ios::sync_with_stdio(false);
//	cin.tie(nullptr);
//	dist.reserve(100000);
//	cin >> pre >> dst;
//	if (pre == dst)
//	{
//		cout << 0 ; return 0;
//	}
//	while(pos<20&&cin>> rul[pos].a >> rul[pos].b )
//	{
//		pos++;
//	}
//	pos--;
//	qu.push(pre);
//	dist[pre] = 0;
//	while (!qu.empty())
//	{
//		string s = qu.front(); qu.pop();
//		if (dist[s] >= 10)
//		{
//			continue;
//		}
//		
//		for (int i = 1; i <= pos; i++)
//		{
//			const string& A = rul[i].a, & B = rul[i].b;
//			size_t p = 0;
//			while ((p = s.find(A, p)) != string::npos)
//			{
//				string tmp = s.substr(0, p) + B + s.substr(p + A.size());
//				p++;
//				if (dist.count(tmp)) continue;
//
//				dist[tmp] = dist[s] + 1;
//				qu.push(tmp);
//				if (tmp == dst)
//				{
//					cout << dist[tmp] ;
//					return 0;
//				}
//				
//			}
//		}
//	}
//	cout << "NO ANSWER!" ;
//	return 0;
//}





//int t[50010];
//int n; int q;//n音符q问题
//
//void _find(int s)
//{
//	int l = 1; int r = n;
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (t[mid] > s)r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	
//
//}
//
//
//int main()
//{
//	cin >> n >> q;
//	for (int i = 1; i <= n; i++)
//	{
//		int x; cin >> x;
//		t[i] = t[i - 1] + x;
//	}
//	for (int i = 1; i <= q; i++)
//	{
//		int s;
//		cin >> s;
//		_find(s);
//	}
//	return 0;
//}





//int n; int s; int a; int b;
//int h;//总高度
//int eff[5010];//可以摘到的苹果
//int pos;//计数
//int dp[5010];
//int ret;
//int main()
//{
//	cin >> n >> s >> a >> b;
//	h = a + b;
//	for (int i = 1; i <= n; i++)
//	{
//		int x; int y; cin >> x >> y;
//		if (x <= h)
//		{
//			eff[++pos] = y;
//		}
//	}
//	sort(eff + 1, eff + 1 + pos);
//	int sum = 0;
//	for(int i=1;i<=pos;i++)
//	{
//		sum += eff[i];
//		if (sum <= s)ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}








//int a[10];
//int ret = 0;
//int main()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		cin >> a[i];
//	}
//	int h; cin >> h; h += 30;
//	for (int i = 0; i < 10; i++)
//	{
//		if (h >= a[i])ret++;
//	}
//	cout << ret;
//	return 0;
//}
