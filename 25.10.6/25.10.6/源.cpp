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

long long _size;
bool pre[10000010];
long long p[10000010];
long long ola[10000010];
long long cnt = 0;
long long dp[10000010];


void getola()
{
	ola[1] = 1;
	for (long long i = 2; i <= _size; i++)
	{
		if (!pre[i])
		{
			p[++cnt] = i;
			ola[i] = i - 1;
		}
		for (long long j = 1; i * p[j] <= _size; j++)
		{
			pre[i * p[j]] = true;
			if (i % p[j] == 0)
			{
				ola[i * p[j]] = ola[i] * p[j];
				break;
			}
			else
			{
				ola[i * p[j]] = ola[i] * ola[p[j]];
			}
		}
	}
}

int main()
{
	cin >> _size;
	getola();
	for (long long i = 1; i <= _size; i++)
	{
		dp[i] = dp[i - 1] + ola[i];
	}
	long long ret = 0;
	for (long long i = 1; i <= cnt; i++)
	{
		ret = ret + 2 * dp[_size / p[i]] - 1;
	}
	cout << ret;
	return 0;
}





//#include <iostream>
//
//using namespace std;
//
//const int N = 15;
//
//int n = 13, m = 4;
//
//int a[14][5];
//int cnt[N];
//
//void dfs(int x)
//{
//    if (x == 13) return;
//
//
//    cnt[x]--;
//    dfs(a[x][cnt[x]]);
//}
//
//int main()
//{
//    for (int i = 1; i <= n; i++)
//    {
//        cnt[i] = 4;
//        for (int j = 1; j <= m; j++)
//        {
//            char ch; cin >> ch;
//            if (ch >= '2' && ch <= '9') a[i][j] = ch - '0';
//            else if (ch == 'A') a[i][j] = 1;
//            else if (ch == 'J') a[i][j] = 11;
//            else if (ch == 'Q') a[i][j] = 12;
//            else if (ch == 'K') a[i][j] = 13;
//            else a[i][j] = 10;
//        }
//    }
//
//    for (int i = 1; i <= m; i++)
//    {
//        dfs(a[n][i]);
//    }
//
//    int ret = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (cnt[i] == 0) ret++;
//    }
//
//    cout << ret << endl;
//
//    return 0;
//}


//int n; int k;
//vector<int> p;
//bool used[100];
//
//void dfs(int wei)
//{
//	if (wei > k)
//	{
//		for (int i = 0; i < p.size(); i++)
//		{
//			printf("%5d", p[i]);
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = 1; i <= n; i++)
//	{
//		if (!used[i])
//		{
//			p.push_back(i);
//			used[i] = true;
//			dfs(wei + 1);
//			p.pop_back();
//			used[i] = false;
//		}
//	}
//}
//
//int main()
//{
//	cin >> n ;
//	k = n;
//	dfs(1);
//	return 0;
//}





//int n; int m;
//vector <int>p;
//void dfs(int pre, int wei)
//{
//	if (wei > m)
//	{
//		for (int i = 0; i < p.size(); i++)
//		{
//			cout << p[i] << " ";
//		}
//		cout << endl;
//		return;
//	}
//	for (int i = pre+1; i <= n; i++)
//	{
//		p.push_back(i);
//		dfs(i, wei + 1);
//		p.pop_back();
//	}
//}
//
//int main()
//{
//	cin >> n >> m;
//	dfs(0, 1);//最小值，位数
//	return 0;
//}



//void dfs( int a, int b,int len ,int x, int y)
//{
//    if (len == 1)return;
//	len = len / 2;
//	
//    if (x < a + len && y < b + len) // 障碍物在左上角
//    {
//        // 摆上一号地毯
//        cout << a + len << " " << b + len << " " << 1 << endl;
//        dfs(a, b, len, x, y);
//        dfs(a, b + len, len, a + len - 1, b + len);
//        dfs(a + len, b, len, a + len, b + len - 1);
//        dfs(a + len, b + len, len, a + len, b + len);
//    }
//    else if (x >= a + len && y >= b + len) // 障碍物在右下角
//    {
//        cout << a + len - 1 << " " << b + len - 1 << " " << 4 << endl;
//        dfs(a, b, len, a + len - 1, b + len - 1);
//        dfs(a, b + len, len, a + len - 1, b + len);
//        dfs(a + len, b, len, a + len, b + len - 1);
//        dfs(a + len, b + len, len, x, y);
//    }
//    else if (x >= a + len) // 障碍物在左下角
//    {
//        cout << a + len - 1 << " " << b + len << " " << 3 << endl;
//        dfs(a, b, len, a + len - 1, b + len - 1);
//        dfs(a, b + len, len, a + len - 1, b + len);
//        dfs(a + len, b, len, x, y);
//        dfs(a + len, b + len, len, a + len, b + len);
//    }
//    else // 障碍物在右上角
//    {
//        cout << a + len << " " << b + len - 1 << " " << 2 << endl;
//        dfs(a, b, len, a + len - 1, b + len - 1);
//        dfs(a, b + len, len, x, y);
//        dfs(a + len, b, len, a + len, b + len - 1);
//        dfs(a + len, b + len, len, a + len, b + len);
//    }
//}
//
//
//int main()
//{
//    int k;
//    int x; int y;
//	cin >> k >> x >> y;
//	k = (1 << k);
//	dfs( 1, 1, k,x, y);
//	return 0;
//}


//int _size;
//int arr[200010];
//
//int getm(int left, int right)
//{
//	if (left >= right)return arr[left];
//	int mid = (left + right) / 2;
//	int ret = max(getm(left, mid), getm(mid + 1, right));
//	int sum = arr[mid]; int _max = arr[mid];
//	for (int i = mid - 1; i >= left; i--)
//	{
//		sum += arr[i];
//		_max = max(_max, sum);
//	}
//	sum = arr[mid + 1]; int __max = arr[mid + 1];
//	for (int i = mid + 2; i <= right; i++)
//	{
//		sum += arr[i];
//		__max = max(__max, sum);
//	}
//	ret = max(ret, _max + __max);
//	return ret;
//}
//
//int main()
//{
//	cin >> _size;
//	for (int i = 1; i <= _size; i++)
//	{
//		cin >> arr[i];
//	}
//	cout<<getm(1, _size);
//	return 0;
//}






//int _size;
//int arr[5000010];
//int k;
//int qcho(int left,int right,int k)
//{
//	if (left >= right)return arr[left];
//	int p = arr[left];
//	int l0 = left - 1; int l1 = left; int r = right;
//	while (l1 <= right)
//	{
//		if (arr[l1] < p) swap(arr[++l0], arr[l1++]);
//		else if (arr[l1] == p)l1++;
//		else swap(arr[--r], arr[l1]);
//	}
//	int a = l0 - left + 1; int b = r - 1 - l0; int c = right - r + 1;
//	if (a >= k)return qcho(left, l0, k);
//	else if (k<=a+b)return p;
//	else return qcho(r, right, k - a - b);
//	
//}
//
//int main()
//{
//	cin >> _size>>k;
//	k++;
//	for (int i = 1; i <= _size; i++)cin >> arr[i];
//	cout<<qcho(1, _size, k);
//
//	return 0;
//}





//string path;
//int _size;
//void dfs(int n)
//{
//	if (n > _size)
//	{
//		cout << path << endl;
//		return;
//	}
//	path += 'N';
//	dfs(n + 1);
//	path.pop_back();
//	path += 'Y';
//	dfs(n + 1);
//	path.pop_back();
//}
//int main()
//{
//	cin >> _size;
//	dfs(1);
//	return 0;
//}



//int _size;
//int a[500010];
//int tmp[500010];
//
//long long merge(int left, int right)
//{
//	if (left >= right)return 0;
//	long long ret = 0;
//	int mid = (left + right) / 2;
//	ret += merge(left, mid);
//	ret += merge(mid + 1, right);
//	int l1 = left; int r1 = mid;
//	int l2 = mid + 1; int r2 = right;
//	int p = left;
//	while (l1 <= mid && l2 <= right)
//	{
//		if (a[l1] <= a[l2])
//		{
//			tmp[p++] = a[l1++];
//		}
//		else
//		{
//			ret += mid - l1 + 1;
//			tmp[p++] = a[l2++];
//
//		}
//	}
//	while (l1 <= mid)tmp[p++] = a[l1++];
//	while (l2 <= right)tmp[p++] = a[l2++];
//	for (int i = left; i <= right; i++)
//	{
//		a[i] = tmp[i];
//	}
//	return ret;
//}
//
//
//int main()
//{
//	cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> a[i];
//	}
//	cout << merge(0, _size - 1) << endl;
//	return 0;
//}










//int _size;
//bool pre[40010];
//int p[40010];//质数存放
//int pos=0;
//int ola[40010];
//
//
//void getol()
//{
//	ola[1] = 1;
//	for (int i = 2; i <= _size; i++)
//	{
//		if (!pre[i])
//		{
//			p[++pos] = i;
//			ola[i] = i - 1;
//		}
//		for (int j = 1; p[j] * i <= _size; j++)
//		{
//			pre[p[j] * i] = true;
//			if (i % p[j] == 0)
//			{
//				ola[p[j] * i] = p[j] * ola[i];
//				break;
//			}
//			else
//			{
//				ola[p[j] * i] = ola[p[j]] * ola[i];
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	cin >> _size;
//	getol();
//	if (_size == 1)
//	{
//		cout << 0;
//		return 0;
//	}
//	int ret = 0;
//	for (int i = 1; i < _size; i++)
//	{
//		ret += ola[i];
//	}
//	cout << 2 * ret + 1;
//	return 0;
//}



//int shu[2000];
//void dfs(int left, int right)
//{
//	if (left > right)return;
//	char ret;
//	int s = shu[right] - shu[left - 1];
//	if (s == 0)ret = 'B';
//	else if (s == right - left + 1)ret = 'I';
//	else ret = 'F';
//	int mid = (left + right) / 2;
//	if (left == right)
//	{
//		cout << ret;
//		return;
//	}
//	dfs(left, mid);
//	dfs(mid + 1, right);
//	cout << ret;
//}
//int main()
//{
//	int _size = 0;
//	cin >> _size;
//	for (int i = 1; i <= (1 << _size); i++)
//	{
//		int x = 1;
//		char ch; cin >> ch;
//		if (ch == '1')x = 1;
//		else x = 0;
//		shu[i] = shu[i - 1] + x;
//	}
//	dfs(1, (1<<_size));
//	return 0;
//}



//int pai[14][5] = { 0 };
//int cnt[14] = {4,4,4,4,4,4,4,4,4,4,4,4,4,4};
//
//void play(int a)
//{
//	if (a == 13)
//	{
//		return;
//	}
//	int t = pai[a][cnt[a]];
//	cnt[a]--;
//	play(t);
//	return;
//
//}
//int main()
//{
//	
//	for (int i = 1; i <= 13; i++)
//	{
//		for (int j = 1; j <= 4; j++)
//		{
//			char a;
//			cin >> a;
//			if (a >= '2' && a <= '9')pai[i][j] = a - '0';
//			else if (a == '0')pai[i][j] = 10;
//			else if (a == 'J')pai[i][j] = 11;
//			else if (a == 'Q')pai[i][j] = 12;
//			else if (a == 'K')pai[i][j] = 13;
//			else if (a == 'A')pai[i][j] = 1;
//
//		}
//	}
//	play(pai[13][1]);
//	int y = 0;
//	play(pai[13][2]);
//	play(pai[13][3]);
//	play(pai[13][4]);
//	int ret = 0;
//	for (int i = 1; i <= 12; i++)
//	{
//		if (cnt[i] == 0)ret++;
//	}
//	cout << ret << endl;
//	return 0;
//}




//void move(int _size,char a,char b,char c)
//{
//	if (_size == 0)return;
//	move(_size - 1, a, c, b);
//	/*cout << a << "->" << _size << "->" << c << endl;*/
//	printf("%c->%d->%c\n", a, _size, c);
//	move(_size - 1, b, a, c);
//}
//
//
//int main()
//{
//	int _size = 0;
//	char a; char b; char c;
//	cin >> _size >> a >> b >> c;
//	move(_size,a,c,b);
//	return 0;
//}


//int wall[4010];
//int disc[4010];
//int a[1010]; int b[1010];
//int pos;
//unordered_map <int, int> id;
//unordered_map <int, bool> has;
//int main()
//{ 
//	int wallsize = 0; int _size = 0;
//	cin >> wallsize >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> a[i] >> b[i];
//	}
//	for (int i = 0; i < _size; i++)
//	{
//		disc[++pos] = a[i]; disc[++pos] = a[i] + 1;
//		disc[++pos] = b[i]; disc[++pos] = b[i] + 1;
//	}
//	sort(disc, disc + pos);
//	int cnt = 0;//数的个数
//	for (int i = 0; i < pos; i++)
//	{
//		if (id.count(disc[i]))continue;
//		else
//		{
//			id[disc[i]] = i;
//			cnt++;
//		}
//	}
//	for (int i = 0; i < _size; i++)
//	{
//		int l = id[a[i]]; int r = id[b[i]];
//		for (int j = l; j <= r; j++)
//		{
//			wall[j] = i + 1;
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i < 4010; i++)
//	{
//		if (!has[wall[i]]&& wall[i]!=0)
//		{
//			ret++;
//			has[wall[i]] = true;
//		}
//	}
//	cout << ret << endl;
//	return 0;
//}

//int _size;
//int a[20010]; 
//int b[20010];
//int disc[40010];
//unordered_map<int,int> id;
//int dp[40010];
//int main()
//{
//	int pos = 0;
//	cin >> _size;
//	for (int i = 1; i <=_size; i++)
//	{
//		cin >> a[i] >> b[i];
//		disc[++pos] = a[i];
//		disc[++pos] = b[i];
//	}
//	sort(disc + 1, disc + pos + 1);
//	pos = unique(disc + 1, disc + pos + 1) - disc - 1;
//	for (int i = 1; i <= pos; i++)
//	{
//		id[disc[i]] = i;
//	}
//	for (int i = 1; i <= _size; i++)
//	{
//		int l = a[i]; int r = b[i];
//		dp[id[l]]++; dp[id[r]]--;
//	}
//	long long ret = 0;
//	for (int i = 1; i <= pos; i++)
//	{
//		dp[i] += dp[i - 1];
//	}
//	for (int i = 1; i < pos; i++)
//	{
//		// 如果当前区间段有覆盖（dp[i] > 0），则计算长度
//		if (dp[i] > 0)
//		{
//			ret += disc[i + 1] - disc[i];
//		}
//	}
//	cout << ret << endl;
//
//
//	return 0;
//}

//long long a; long long b; long long p;
//long long mod(long long a, long long b, long long p)
//{
//	long long ret = 0;
//	while (b)
//	{
//		if (b & 1) ret = (ret + a) % p;
//		a = (a + a) % p;
//		b = b >> 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	cin >> a >> b >> p;
//	cout << mod(a, b, p) << endl;
//	return 0;
//}









//struct node
//{
//	int x; int y;
//	int z; int m;//编号，对应牛棚
//}cow[50010];
//int ret[50010];
//bool cmp1(node a, node b)
//{
//	return a.x < b.x;  
//}
//struct cmp2
//{
//	bool operator()(node a, node b)
//	{
//		return a.y > b.y;
//	}
//};
//
//
//int main()
//{
//	int _size = 0;
//	cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> cow[i].x >> cow[i].y;
//		cow[i].z = i; cow[i].m = 0;
//	}
//	int num = 1;
//	sort(cow, cow + _size, cmp1);
//	priority_queue<node, vector<node>, cmp2>cowp;
//	cow[0].m = 1;
//	cowp.push(cow[0]);
//	for (int i = 1; i < _size; i++)
//	{
//		if (cow[i].x > cowp.top().y)
//		{
//			cow[i].m = cowp.top().m;
//			cowp.pop();
//			cowp.push(cow[i]);
//		}
//		else
//		{
//			num++;
//			cow[i].m = num;
//			cowp.push(cow[i]);
//		}
//	}
//	for (int i = 0; i < _size; i++)
//	{
//		ret[cow[i].z] = cow[i].m;
//	}
//	cout << num << endl;
//	for (int i = 0; i < _size; i++)
//	{
//		cout << ret[i] << endl;
//	}
//	return 0;
//}
