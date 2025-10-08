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
using namespace std;
typedef long long ll;


ll exgcd(ll a, ll b, ll &x, ll& y)
{
	if (b == 0)
	{
		x = 1, y = 0;
		return a;
	}

	ll x1, y1, d;
	d = exgcd(b, a % b, x1, y1);
	x = y1, y = x1 - a / b * y1;
	return d;
}
int main()
{
	ll x; ll y; ll m; ll n; ll l;
	cin >> x >> y >> m >> n >> l;
	ll v = m - n; ll r = y - x;
	if (v < 0)
	{
		v = -v; r = -r;
	}
	ll z; ll t;
	ll d=exgcd(v, l, t, z);
	
	if (r % d!=0)cout << "Impossible" << endl;
	else
	{
		ll k = l / d;
		t = (r / d) * t;
		t = (t % k + k) % k;
		cout << t << endl;
	}
	return 0;
}









//int _size;
//
//ll ex(ll a, ll b, ll&x, ll&y)
//{
//	if (b == 0)
//	{
//		x = 1; y = 0;
//		return a;
//	}
//	ll x1; ll y1;
//	ll d = ex(b, a % b, x1, y1);
//	x = y1; y = x1 - a / b * y1;
//	return d;
//}
//
//int main()
//{
//	cin >> _size;
//	while (_size--)
//	{
//		ll a; ll b; ll x; ll y;
//		cin >> a >> b;
//		ll d=ex(a, b, x, y);
//		if (1 % d)cout << -1 << endl;
//		else
//		{
//			ll k1 = b / d; ll k2 = a / d;
//			x = (x % k1 + k1)%k1;
//			y = (y % k2 + k2)%k1;
//			cout << x << endl;
//		}
//	}
//	return 0;
//}





//int _size;
//
//ll ex(ll a, ll b, ll& x, ll& y)
//{
//    if (b == 0)
//    {
//        x = 1; y = 0;
//        return a;
//    }
//    ll x1; ll y1;
//    ll d = ex(b, a % b, x1, y1);
//    x = y1; y = x - a / b * y;
//    return d;
//}
//
//int main()
//{
//	cin >> _size;
//	while (_size--)
//	{
//		ll a; ll b; ll c;
//		scanf("%lld%lld%lld", &a, &b, &c);
//		ll x; ll y; ll d;
//		d=ex(a, b, x, y);
//		if (c % d != 0)
//		{
//			printf("-1\n");
//		}
//        else
//        {
//            // 先求出原方程的一组特解
//            x = c / d * x, y = c / d * y;
//            ll k1 = b / d, k2 = a / d;
//
//            // 先把 x 补成最小正整数
//            x = (x % k1 + k1) % k1;
//            x = x == 0 ? k1 : x;
//            y = (c - a * x) / b;
//
//            ll minx, miny, maxx, maxy;
//            if (y > 0) // 输出 5 个值
//            {
//                minx = x, maxy = y;
//                y = (y % k2 + k2) % k2;
//                y = y == 0 ? k2 : y;
//                miny = y;
//                maxx = (c - b * y) / a;
//                ll cnt = (maxx - minx) / k1 + 1;
//                printf("%lld %lld %lld %lld %lld\n", cnt, minx, miny, maxx, maxy);
//            }
//            else // 输出两个值
//            {
//                minx = x;
//                y = (y % k2 + k2) % k2;
//                y = y == 0 ? k2 : y;
//                miny = y;
//                printf("%lld %lld\n", minx, miny);
//            }
//        }
//	}
//	
//	return 0;
//}







//long long h[100010];
//long long left_arr[100010];
//long long right_arr[100010];
//int main()
//{
//    int _size = 1;
//    while (cin >> _size, _size)
//    {
//        stack<int> l, r;
//
//        for (int i = 1; i <= _size; i++)
//        {
//            cin >> h[i];
//        }
//
//        // 计算左边界
//        for (int i = 1; i <= _size; i++)
//        {
//            while (!l.empty() && h[l.top()] >= h[i]) l.pop();
//            if (!l.empty()) left_arr[i] = l.top();
//            else left_arr[i] = 0;
//            l.push(i);
//        }
//
//        // 计算右边界
//        for (int i = _size; i >= 1; i--)
//        {
//            while (!r.empty() && h[r.top()] >= h[i]) r.pop();
//            if (!r.empty()) right_arr[i] = r.top();
//            else right_arr[i] = _size + 1;
//            r.push(i);
//        }
//
//        long long ret = 0;
//        for (int i = 1; i <= _size; i++)
//        {
//            ret = max(ret, h[i] * (right_arr[i] - left_arr[i] - 1));
//        }
//        cout << ret << endl;
//    }
//    return 0;
//}





//long long h[1000010];
//int v[1000010];
//int ret[1000010];
//int _size;
//int main()
//{
//	stack<int> l;
//	stack<int> r;
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> h[i] >> v[i];
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		while (!l.empty() && h[l.top()] <= h[i])l.pop();
//		if (!l.empty())ret[l.top()] += v[i];
//		l.push(i);
//	}
//	for (int i = _size; i >=1; i--)
//	{
//		while (!r.empty() && h[r.top()] <= h[i])r.pop();
//		if (!r.empty())ret[r.top()] += v[i];
//		r.push(i);
//	}
//	int m = 0;
//	for (int i = 1; i <= _size; i++)
//	{
//		m = max(m, ret[i]);
//	}
//	cout << m << endl;
//	return 0;
//}








//long long a[3000010];
//int ret[3000010];
//int main()
//{
//	stack<int> st;
//	int _size = 0;
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = _size; i > 0; i--)
//	{
//		while (!st.empty() && a[st.top()] <= a[i])st.pop();
//		if (!st.empty())ret[i] = st.top();
//		else ret[i] = 0;
//		st.push(i);
//	}
//	for (int i = 1; i <= _size; i++)cout << ret[i] << " ";
//	return 0;
//}






//int _size;
//int a[40][40]; 
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//bool used[40][40];
//void bfs(int a1,int b1)
//{
//	queue<pair<int,int>> qu;
//	qu.push({ a1,b1 });
//	used[a1][b1] = true;
//	while (!qu.empty())
//	{
//		int a2 = qu.front().first;
//		int b2 = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a2 + dx[i]; int y = b2 + dy[i];
//			if (x<0 || x>_size + 1 || y<0 || y>_size + 1)continue;
//			if (used[x][y]||a[x][y]==1)continue;
//			qu.push({x,y });
//			used[x][y] = true;
//		}
//	}
//}
//
//int main()
//{
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= _size; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	bfs(0, 0);
//	for (int i = 1; i <= _size; i++)
//	{
//		for (int j = 1; j <= _size; j++)
//		{
//			if (used[i][j] == false && a[i][j] == 0)
//			{
//				cout << 2 << " ";
//			}
//			else cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}




//char tu[1010][1010];
//int _n = 0; int m = 0;
//int used[4][1010][1010];
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { -1,1,0,0 };
//
//void bfs(int n)
//{
//	deque<pair<int, int>> qu;
//
//	memset(used[n], -1, sizeof(used[n]));
//	for (int i = 1; i <= _n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (tu[i][j] == '0' + n)
//			{
//				qu.push_front({ i,j });
//				used[n][i][j] = 0;
//			}
//		}
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop_front();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x < 1 || x > _n || y < 1 || y > m )continue;
//			if (tu[x][y] == '#')continue;
//			int w = (tu[x][y] == '.' ? 1 : 0);
//			int new_dist = used[n][a][b] + w;
//			if (used[n][x][y] == -1 || new_dist < used[n][x][y])
//			{
//				used[n][x][y] = new_dist;
//				if (w == 0)
//				{
//					qu.push_front({ x, y });
//				}
//				else
//				{
//					qu.push_back({ x, y });
//				}
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> _n >> m;
//	for (int i = 1; i <= _n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	bfs(1); 
//	bfs(2); 
//	bfs(3);
//	int ret = 999999;
//	for (int i = 1; i <= _n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (used[1][i][j] == -1 || used[2][i][j] == -1 || used[3][i][j] == -1)continue;
//			if (tu[i][j] == '#')continue;
//			if (tu[i][j] == '.')
//			{
//				ret = min(ret, used[1][i][j] + used[2][i][j] + used[3][i][j] - 2);
//			}
//			else
//			{
//				ret = min(ret, used[1][i][j] + used[2][i][j] + used[3][i][j]);
//			}
//		}
//	}
//	if (ret != 999999)
//		cout << ret << endl;
//	else
//		cout << -1 << endl;
//	return 0;
//}



//int n; int m;
//int x1;
//int _ya1 = 0;
//int x2;
//int y2;
//char tu[510][510];
//int used[510][510];
//int dx[4] = { 0,0,1,-1 }; int dy[4] = { 1,-1,0,0 };
//int bfs()
//{
//	memset(used, -1, sizeof(used));
//	deque<pair<int, int>> dq;
//	dq.push_back({ x1,_ya1 });
//	used[x1][_ya1] = 0;
//	while (!dq.empty())
//	{
//		int a = dq.front().first;
//		int b = dq.front().second;
//		dq.pop_front();
//		if (a == x2 && b == y2)
//		{
//			return used[a][b];
//		}
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			int w = (tu[x][y] == tu[a][b] ? 0 : 1);
//			if (x < 0 || x >= n || y < 0 || y >= m)continue;
//			if (used[x][y] == -1)
//			{
//				dq.push_back({ x,y });
//				used[x][y] = used[a][b] + w;
//			}
//			else if (used[a][b] + w < used[x][y])
//			{
//				used[x][y] = used[a][b] + w;
//				dq.push_front({ x,y });
//			}
//		}
//	}
//	return -1;
//
//
//}
//int main()
//{
//	while (cin >> n >> m,n && m)
//	{
//		for (int i = 0; i < n; i++)
//			for (int j = 0; j < m; j++)
//				cin >> tu[i][j];
//		cin >> x1 >> _ya1 >> x2 >> y2;
//		cout << bfs() << endl;
//	}
//	return 0;
//}






//int n; int m;
//int tu[1010][1010];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//bool used[1010][1010];
//
//
//bool dfs(int s)
//{
//	memset(used, 0, sizeof(used));
//	queue<pair<int, int>> qu;
//	for (int i = 1; i <= m; i++)
//	{
//		qu.push({ 1,i });
//		used[1][i] = 1;
//	}
//	while (!qu.empty())
//	{
//		int a = qu.front().first;
//		int b = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x = a + dx[i]; int y = b + dy[i];
//			if (x<1 || x>n || y<1 || y>m || used[x][y] || tu[x][y] > s)continue;
//			used[x][y] = 1;
//			if (x == n)return true;
//			qu.push({ x,y });
//
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int l = 0; int r = 0;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//			r = max(r, tu[i][j]);
//		}
//	}
//	while (l < r)
//	{
//		int mid = (l + r) / 2;
//		if (dfs(mid))r = mid;
//		else l = mid + 1;
//	}
//	cout << l << endl;
//	return 0;
//}



//string beg;
//string _end="123804765";
//unordered_map<string, int> used;//记录是否走过
//queue<string> qu;
//int d[4] = { 1,-1,3,-3 };
//int bfs()
//{
//	qu.push(beg);
//	int ret = 0;
//	used[beg] = 1;
//	while (!qu.empty())
//	{
//		ret++;
//		string a = qu.front(); 
//		qu.pop();
//		int pos = 0;//记录0的下标
//		while (a[pos] != '0')pos++;
//		for (int i = 0; i < 4; i++)
//		{
//			string lin = a;
//			int x = pos + d[i];
//			if ((d[i] == 1 || d[i] == -1) && (pos / 3) != (x / 3))
//				continue;
//			if (x < 0 || x>8)continue;
//			char tmp = lin[pos]; lin[pos] = lin [x] ; lin[x] = tmp;
//			if (used[lin] != 0)continue;
//			used[lin] = used[a] + 1;
//			qu.push(lin);
//			if (lin == _end)
//			{
//				
//				return used[lin] - 1;
//			}
//		}
//	}
//	return -1;
//}
//
//
//
//int main()
//{
//	cin >> beg;
//	if (beg == _end)
//	{
//		cout << 0; return 0;
//	}
//	cout<<bfs();
//	return 0;
//}











//int gcd(int a, int b)
//{
//	return b == 0 ? a : gcd(b, a % b);
//}
//
//
//int main()
//{
//	int _size = 0; cin >> _size;
//	int a = 0; int b = 0; cin >> a >> b;
//	a = gcd(abs(a), abs(b));
//	for (int i = 0; i < _size - 2; i++)
//	{
//		cin >> b;
//		a = gcd(a, abs(b));
//	}
//	cout << a << endl;
//	return 0;
//}
