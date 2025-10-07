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
using namespace std;


int beg = 0; int _end = 0;
int used[100010];

void bfs(int num)
{
	queue<int> qu;
	qu.push(num);
	used[num] = 0;
	while (!qu.empty())
	{
		int s = qu.front();
		qu.pop();
		int a = s - 1; int b = s + 1; int c = 2 * s;
		if (a >=0 && used[a] == -1)
		{
			qu.push(a); used[a] = used[s] + 1;
		}
		if (b <= 100000 && used[b] == -1)
		{
			qu.push(b); used[b] = used[s] + 1;
		}
		if (c <= 100000 && used[c] == -1)
		{
			qu.push(c); used[c] = used[s] + 1;
		}
		if (a == _end || b == _end || c == _end)
		{
			return ;
		}
	}
	return ;
}

int main()
{
	int _size; cin >> _size;
	while (_size--)
	{
		memset(used, -1, sizeof(used));
		cin >> beg >> _end;
		bfs(beg);
		cout << used[_end] << endl;
		
	}
	return 0;
}







//long long _size;
//long long ola[10000010];
//bool pre[10000010];
//long long p[10000010];
//long long cnt;
//void getola()
//{
//	ola[1] = 1;
//	for (long long i = 2; i <= 10000005; i++)
//	{
//		if (!pre[i])
//		{
//			p[++cnt] = i;
//			ola[i] = i - 1;
//		}
//		for (long long j = 1; p[j] * i <= 10000005; j++)
//		{
//			pre[p[j] * i] = true;
//			if (i % p[j] == 0)
//			{
//				ola[p[j] * i] = ola[i] * p[j];
//				break;
//			}
//			else
//			{
//				ola[p[j] * i] = ola[i] * ola[p[j]];
//			}
//		}
//	}
//}
//
//long long mi(long long a, long long b, long long c)
//{
//	long long ret = 1;
//	while (b)
//	{
//		if (b & 1)ret = ret * a % c;
//		b = b >> 1;
//		a = a * a % c;
//	}
//	return ret;
//}
//
//
//long long dfs(long long num)
//{
//	if (num == 1)return 0;
//	return mi(2, dfs(ola[num]) + ola[num], num);
//}
//
//
//int main()
//{
//	getola();
//	cin >> _size;
//	while (_size--)
//	{
//		long long a = 0; cin >> a;
//		cout << dfs(a) << endl;
//	}
//	return 0;
//}





//long long a; string b; long long m;
//long long get_olab(long long num)
//{
//	long long ret = num;
//	for (long long i = 2; i <= num / i; i++)
//	{
//		if (num % i == 0)
//		{
//			ret = ret / i * (i - 1);
//			while (num % i == 0)num = num / i;
//		}
//	}
//	if (num > 1)ret = ret / num * (num - 1);
//	return ret;
//}
//long long get_mi(string s, long long n)
//{
//	long long flag = 1;
//	long long ret = 0;
//	for (long long i = 0; i < s.size(); i++)
//	{
//		ret = ret * 10 + s[i] - '0';
//		if (ret > n)
//		{
//			flag = -1;
//			ret = ret % n;
//		}
//	}
//	if (flag == -1)ret += n;
//	return ret;
//}
//long long fmi(long long n, long long f)
//{
//	long long ret = 1;
//	while (f)
//	{
//		if (f & 1)ret = ret * n % m;
//		f = f >> 1;
//		n = n * n % m;
//	}
//	return ret;
//}
//int main()
//{
//	cin >> a >> m >> b;
//	long long p = get_olab(m);//求m的欧拉函数
//	long long ch = get_mi(b, p);//求b%p+p
//	long long r = fmi(a, ch);
//	cout << r << endl;
//	return 0;
//}




//int n; int m;
//int x; int y;
//char a[35][35];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//queue<pair<int, int>> qu;
//priority_queue<int> heap;
//void bfs(int a, int b)
//{
//	qu.push({ a,b });
//	while (!qu.empty())
//	{
//		int a1 = qu.front().first;
//		int b1 = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 4; i++)
//		{
//			int x1 = a1 + dx[i];
//			int y1 = b1 + dy[i];
//			if (x1<1 || x1>n || y1<1 || y1>m)continue;
//			if (a[x1][y1] == '*')continue;
//			if (a[x1][y1] == 'e')heap.push(a[a1][b1] - '0');
//			a[x1][y1] = a[a1][b1] + 1;
//			qu.push({ x1,y1 });
//			
//
//		}
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//			if (a[i][j] == 'k') { x = i; y = j; }
//			if (a[i][j] == '.') { a[i][j] = '0'; }
//		}
//	}
//	bfs(x, y);
//	if (heap.empty())
//	{
//		cout << -1 << endl; return 0;
//	}
//	int r = heap.top();
//	int ret = 0;
//	while (!heap.empty())
//	{
//		heap.pop();
//		ret++;
//	}
//	cout << ret << " " << r << endl;
//	return 0;
//}


//int n; int m;
//int board[410][410];
//int x; int y;
//int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
//int dy[8] = { 2,1,-1,-2,-2,-1,1,2 };
//queue<pair<int, int>> qu;
//
//void bfs(int a, int b)
//{
//	qu.push({ a,b });
//	while (!qu.empty())
//	{
//		int a1 = qu.front().first;
//		int b1 = qu.front().second;
//		qu.pop();
//		for (int i = 0; i < 8; i++ )
//		{
//			int x = a1 + dx[i]; int y = b1 + dy[i];
//			
//			if (x<1 || x>n || y<1 || y>m)continue;
//			if (board[x][y] != -1)continue;
//			board[x][y] = board[a1][b1] + 1;
//			qu.push({ x,y });
//		}
//	}
//}
//
//int main()
//{
//	memset(board, -1, sizeof(board));
//	cin >> n >> m >> x >> y;
//	board[x][y] = 0;
//	bfs(x, y);
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cout << board[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}






//int tu[110][110];
//int n; int m;
//int used[110][110];
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//int sum = 1;
//int dfs(int a, int b)
//{
//	if (used[a][b])return used[a][b];
//	int len = 1;
//	for (int i = 0; i < 4; i++)
//	{
//		int x = a + dx[i]; int y = b + dy[i];
//		if (x<1 || x>n || y<1 || y>m)continue;
//		if (tu[x][y] >= tu[a][b])continue;
//		len=max(len,dfs(x, y)+1);
//	}
//	return used[a][b]=len;
//
//}
//
//int main()
//{
//	int maxlen = 0;
//	cin >> n>>m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> tu[i][j];
//		}
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <=m; j++)
//		{
//			maxlen=max(dfs(i,j),maxlen);
//		}
//	}
//	cout << maxlen;
//	return 0;
//}






//char cun[10005][10005];
//int _size; int p;
//char play(int x, int y)
//{
//	if (cun[x][y])return cun[x][y];
//	cun[x][y] = '3';
//	if (x == 0)return cun[x][y] = '1';
//	if (y == 0)return cun[x][y] = '2';
//	return cun[x][y] = play((x + y) % p, (x + 2 * y) % p);
//}
//
//
//int main()
//{
//	cin >> _size >> p;
//	while (_size--)
//	{
//		int x = 0; int y = 0;
//		cin >> x >> y;
//		char ch=play(x, y);
//		if (ch == '1')cout << 1<<endl;
//		else if (ch == '2')cout << 2<<endl;
//		else cout << "error"<<endl;
//	}
//	return 0;
//}





//long long f[30][30][30];
//long long a; long long b; long long c;
//
//long long di(int a,int b,int c)
//{
//	
//	if (a <= 0 || b <= 0 || c <= 0)return 1;
//	if (a > 20 || b > 20 || c > 20)return di(20, 20, 20);
//	if (f[a][b][c])return f[a][b][c];
//	if (a < b && b < c)return f[a][b][c]=di(a, b, c - 1) + di(a, b - 1, c - 1) - di(a, b - 1, c);
//	else  return f[a][b][c] = di(a - 1, b, c) + di(a - 1, b - 1, c) + di(a - 1, b, c - 1) - di(a - 1, b - 1, c - 1);
//}
//
//int main()
//{
//	while (cin >> a >> b >> c)
//	{
//		if (a == -1 && b == -1 && c == -1)
//		{
//			break;
//		}
//		printf("w(%lld, %lld, %lld) = %lld\n", a, b, c, di(a, b, c));
//	}
//	
//	return 0;
//}










//int cat[30];//猫体重
//int car[30];//车载重
//int cnt=0;//当前车数
//int _size; int mw;//猫数，最大载重
//int ret = 30;//结果
//bool cmp(int a1, int a2)
//{
//	return a1 > a2;
//}
//void dfs(int pos)//要上车的猫
//{
//	if (cnt >= ret)return;
//	if (pos > _size)
//	{
//		ret = cnt;
//		return;
//	}
//	for (int i = 1; i <= cnt; i++)
//	{
//		if (car[i] + cat[pos] > mw)
//		{
//			continue;
//		}
//		car[i] += cat[pos];
//		dfs(pos + 1);
//		car[i] -= cat[pos];
//
//		
//	}
//	cnt++;
//	car[cnt] = cat[pos];
//	dfs(pos + 1);
//	car[cnt] = 0;
//	cnt--;
//
//
//}
//int main()
//{
//	cin >> _size >> mw;
//	for (int i = 1; i <= _size; i++)cin >> cat[i];
//	sort(cat + 1, cat + 1 + _size, cmp);
//	dfs(1);
//	cout << ret << endl;
//	return 0;
//}


//int _size; int n;
//int sum;
//int ret;
//
//void dfs(int pos, int begin)//开始数位，上一位数
//{
//	if (pos == n)
//	{
//		if (sum == _size)
//		{
//			ret++;
//			return; 
//		}
//		return;
//	}
//	for (int i =begin; i <= _size; i++)
//	{
//		if (sum+i * (n - pos) > _size)return;
//		sum += i;
//		dfs(pos + 1, i);
//		sum -= i;
//	}
//}
//
//int main()
//{
//	cin >> _size >> n;
//	dfs(0, 1);
//	cout << ret << endl;
//	return 0;
//}



//long long n; long long k;
//long long p = 1000000007;
//long long qow(long long num, long long cifang)
//{
//	long long r = 1;
//	while (cifang)
//	{
//		if (cifang & 1)
//		{
//			r =r* num%p;
//			
//		}
//		cifang = cifang >> 1;
//		num = num * num % p;
//	}
//	return r;
//}
//
//int main()
//{
//	int t = 0; cin >> t;
//	while (t--)
//	{
//		cin >> n >> k;
//		//long long ret = qow(p,p-2)*qow(1+k,1)*(qow(k+1,n)-1);
//		long long ret = (qow(k + 1, n + 1) - k - 1) * qow(k, p - 2);
//		cout << (ret % p + p) % p << endl;
//	}
//	return 0;
//}
//
//
//
//
//int _size;
//int a[10][10];//数独
//bool row[10][10];//行
//bool col[10][10];//列
//bool ge[10][10][10];//小方格
//int r;
//
//
//bool dfs(int i, int j)
//{
//	if (i == 9)
//	{
//		j++; i = 0;
//	}
//	if (j == 9)return true;
//	if (a[i][j])return dfs(i + 1, j);
//	for (int k = 1; k <= 9; k++)
//	{
//		if (row[i][k] || col[j][k] || ge[i / 3][j / 3][k])continue;
//		row[i][k] = col[j][k] = ge[i / 3][j / 3][k] = true;
//		a[i][j] = k;
//		if (dfs(i + 1, j))
//		{
//			return true;
//		}
//		row[i][k] = col[j][k] = ge[i / 3][j / 3][k] = false;
//		a[i][j] = 0;
//	}
//	return false;
//}
//
//
//int main()
//{
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cin >> a[i][j];
//			int x = a[i][j];
//			if (x) 
//			{
//				row[i][x] = true;
//				col[j][x] = true;
//				ge[i / 3][j / 3][x] = true;
//			}
//		}
//	}
//	dfs(0, 0);
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}










//bool hang[30];
//bool zhu[30];
//bool fu[30];
//vector <int> lier;
//int _size;
//int ret;
//
//void dfs(int wei)
//{
//	if (wei == _size)
//	{
//		ret++;
//		if (ret <= 3)
//		{
//			for (int i = 0; i < lier.size(); i++)cout << lier[i] << " ";
//			cout << endl;
//		}
//		
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		if (hang[i] || zhu[i-wei + _size] || fu[i + wei])continue;
//		hang[i] = zhu[i - wei + _size] = fu[i + wei] = true;
//		lier.push_back(i);
//		dfs(wei + 1);
//		hang[i] = zhu[i - wei + _size] = fu[i + wei] = false;
//		lier.pop_back();
//	}
//}
//
//int main()
//{
//	cin >> _size;
//	dfs(0);//第0位已确认
//	cout << ret << endl;
//	return 0;
//}






//bool used[50];
//int T[50];//到达时间
//int D[50];//可盘旋时间
//int L[50];//滑行时间
//int _size;
//
//bool dfs(int wei, int end)
//{
//	if (wei == _size)
//	{
//		return true;
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		if (!used[i])
//		{
//			used[i] = true;
//			int newend = max(end, T[i]) + L[i];
//			if (end > T[i] + D[i])
//			{
//				used[i] = false;
//				continue;
//			}
//			if (dfs(wei + 1, newend))return true;
//			used[i] = false;
//		}
//	}
//	return false;
//}
//
//
//int main()
//{
//	int allnumber = 0; cin>>allnumber;
//	while (allnumber--)
//	{
//		memset(T, 0, sizeof(T));
//		memset(D, 0, sizeof(D));
//		memset(L, 0, sizeof(L));
//		memset(used, false, sizeof(used));
//		_size = 0;
//		cin >> _size;
//		for (int i = 1; i <= _size; i++)
//		{
//			cin >> T[i] >> D[i] >> L[i];
//		}
//		if (dfs(0, 0)) cout << "YES" << endl;
//		else cout << "NO" << endl;
//	}
//}









//int _size;
//int pos;
//int nums[100000100];
//int ret;
//
//bool pre[100000100];
//int p[100000100];
//int cnt;
//int zui;
//
//void getp()
//{
//	for (int i = 2; i <= 100000000; i++)
//	{
//		if (!pre[i])
//		{
//			p[++cnt] = i;
//		}
//		for (int j = 1; p[j] * i <= 100000000; j++)
//		{
//			pre[p[j] * i] = true;
//			if (i % p[j] == 0)break;
//		}
//	}
//}
//
//
//void bfs(int begin, int wei)
//{
//	if (wei == pos&&!pre[ret])
//	{
//		zui++;
//	}
//	for (int i = begin + 1; i <= _size; i++)
//	{
//		ret += nums[i];
//		bfs(i, wei + 1);
//		ret -= nums[i];
//	}
//}
//
//int main()
//{
//	cin >> _size >> pos;
//
//	getp();
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> nums[i];
//	}
//	bfs(0, 0);//已有最小数nums[0]，0位数
//	cout << zui << endl;
//	return 0;
//}