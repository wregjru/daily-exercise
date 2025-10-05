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
using namespace std;
bool st[1000000];
int l; int r;
int pre[1000000];
int mo = 1;
bool ret[1000000];
void getp()
{
	int n = sqrt(r);
	for (int i = 2; i <= n; i++)
	{
		if (!st[i])
		{
			pre[mo] = i; mo++;
		}
		for (int j = 1; pre[j] * i <= n; j++)
		{
			st[pre[j] * i] = true;
			if (i % pre[j] == 0)break;
		}
	}
}
int main()
{
	cin >> l >> r;
	getp();
	l = l == 1 ? 2 : l;
	for (int i = 1; i < mo; i++)//不要等于
	{
		long long x = pre[i];
		for (long long j = max((x + l - 1) / x * x, 2 * x); j <= r; j += x)
		{
			ret[j - l] = true;
		}
	}
	int sum = 0;
	for (int i = l; i <= r; i++)
	{
		if (!ret[i - l])
			sum++;
	}
	cout << sum << endl;
	return 0;
}


//int num[20][20];
//int col[20];
//bool com1(int a, int b)
//{
//	return a > b;
//}
//int calc(int a)
//{
//	int ret = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		ret++;
//	}
//	return ret;
//}
//int main()
//{
//	int m = 0; int n = 0;//m行n列
//	int pre = 0;//次数
//	cin >> n >> m >> pre;
//	for (int i=0;i<n;i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			cin >> num[i][j];
//		}
//	}
//	int ret = 0;
//	for (int i = 0; i < (1 << n); i++)
//	{
//		memset(col, 0, sizeof(col));
//		if (calc(i) > pre)continue;
//		int sum = 0;
//		for (int j = 0; j < n; j++)//行
//		{
//			for (int k = 0; k < m; k++)//列
//			{
//				if (((i >> j) & 1) == 1)sum += num[j][k];
//				else col[k] += num[j][k];
//			}
//		}
//		sort(col, col + m, com1);
//		for (int s = 0; s < pre - calc(i); s++)sum += col[s];
//		ret = max(ret, sum);
//	}
//	cout << ret;
//	return 0;
//}








//struct node
//{
//	int index;
//	int count;
//}row[1020],col[1020];//row行col列
//bool com1(node n1, node n2)
//{
//	return n1.count > n2.count;
//}
//bool com2(node n1, node n2)
//{
//	return n1.index < n2.index;
//}
//int main()
//{
//	int a = 0; int b = 0; int m = 0; int n = 0; int _size;//a行b列m横过道n列过道_size输入
//	cin >> a >> b >> m >> n >> _size;
//	for (int i = 0; i <=a; i++)row[i].index = i;
//	for (int i = 0; i <=b; i++)col[i].index = i;
//	while (_size--)
//	{
//		int x1 = 0; int y1 = 0; int x2 = 0; int y2 = 0;
//		cin >> x1 >> y1 >> x2 >> y2;
//		if (x1 == x2)col[min(y1, y2)].count++;
//		else row[min(x1, x2)].count++;
//	}
//	sort(row + 1, row + a+1, com1);
//	sort(col + 1, col + b+1, com1);
//	sort(row + 1, row + m+1, com2);
//	sort(col + 1, col + n+1, com2);
//	for (int i = 1; i <= m; i++)cout << row[i].index << " ";
//	cout << endl;
//	for (int i = 1; i <= n; i++)cout << col[i].index << " ";
//	return 0;
//}







//long long d[50010];
//long long dest = 0; int num = 0; int _move = 0;
//long long calc(long long mid)
//{
//	int ret = 0;
//	//int i = 0; int j = 0;
//	for (int i = 0; i <= num; i++)//小于等于
//	{
//		int j = i + 1;
//		while (j<=num&&d[j] - d[i] < mid)
//		{
//			j++;
//		}
//		ret += j - i - 1;
//		i = j - 1;
//	}
//	return ret;
//}
//int main()
//{
//	cin >> dest >> num >> _move; 
//	for (int i = 1; i <= num; i++)cin >> d[i];
//	d[num + 1] = dest; num++;
//	long long left = 1; long long right = dest;
//	while (left < right)
//	{
//		long long mid = left + (right - left + 1) / 2;
//		if (calc(mid) <= _move)left = mid;
//		else right = mid - 1;
//	}
//	cout << left;
//	return 0;
//}








//long long mutou[100000005];
//int sz = 0;//原木数
//long long k = 0;//小段数
//long long jishu(long long a)
//{
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret += mutou[i] / a;
//	}
//	return ret;
//}
//int main()
//{
//	cin >> sz >> k;
//	for (int i = 0; i < sz; i++)cin >> mutou[i];
//	long long left = 0; long long right = 200000000;
//	while (left < right)
//	{
//		long long mid = left + (right - left + 1) / 2;
//		if (jishu(mid) >= k)left = mid;
//		else right = mid - 1;
//	}
//	if (left == 0)
//	{
//		cout << 0; return 0;
//	}
//	cout << left;
//	return 0;
//}






//bool st[100000005];
//int pre[100000005]; int cnt=1;//质数数量
//int _size = 0; int s = 0;//范围，查询量
//void getp(int _size)
//{
//	for (long long i = 2; i <= _size; i++)
//	{
//		if (!st[i]) 
//		{
//			pre[cnt] = i; cnt++;
//		}
//		for (long long j = 1; pre[j] * i <= _size; j++)
//		{
//			st[pre[j] * i] = true;
//			if (i % pre[j] == 0)break;
//		}
//	}
//}
//int main()
//{
//	
//	scanf("%d%d", &_size, &s);
//	getp(_size);
//	while (s--)
//	{
//		int _num = 0;
//		scanf("%d", &_num);
//		printf("%d\n", pre[_num]);
//	}
//
//	return 0;
//}


//int arr[110];
//bool iszhi(int a)
//{
//	if (a == 1)return false;
//	for (int i = 2; i <= a / i; i++)
//	{
//		if (a % i == 0)return false;
//	}
//	return true;
//}
//int main()
//{
//	int _size = 0;
//	cin >> _size;
//	for (int i = 0; i < _size; i++)cin >> arr[i];
//	for (int i = 0; i < _size; i++)
//	{
//		if (iszhi(arr[i]))
//			cout << arr[i] << " ";
//	}
//	return 0;
//}






//int _max;
//long long num[100000];
//int _size;//个数
//int main()
//{
//	int ret = 0;
//	cin >> _max >> _size;
//	int left = 0; int right = _size - 1;
//	for (int i = 0; i < _size; i++)cin >> num[i];
//	sort(num, num + _size);
//	while (left <= right)
//	{
//		if (num[left] + num[right] <= _max)
//		{
//			left++; right--; ret++;
//		}
//		else
//		{
//			right--; ret++;
//		}
//	}
//	cout << ret;
//	return 0;
//}






//int fenshuxian[100002];
//int fenshu[100002];
//int _size = 0; int peo = 0;
//long long ret = 0;
//int _find(int fenshu)
//{
//	int left = 1; int right = _size;
//	while (left < right)
//	{
//		int mid = left + (right - left + 1) / 2;
//		if (fenshuxian[mid] <= fenshu)left = mid;
//		else right = mid - 1;
//	}
//	return left;
//}
//int main()
//{
//	cin >> _size >> peo;
//	for (int i = 1; i <= _size; i++)cin >> fenshuxian[i];
//	sort(fenshuxian + 1, fenshuxian + _size + 1);
//	fenshuxian[_size + 1] = 2147483647;
//	for (int i = 1; i <= peo; i++)cin >> fenshu[i];
//	for (int i = 1; i <= peo; i++)
//	{
//		int pos=_find(fenshu[i]);//找低于的数，返回下标
//		ret += min(abs(fenshuxian[pos] - fenshu[i]), abs(fenshuxian[pos + 1] - fenshu[i]));
//
//	}
//	cout << ret << endl;
//	return 0;
//}







//long long arr[100001];
//int main()
//{
//	int size = 0;
//	cin >> size;
//	for (int i = 1; i <= size; i++)
//	{
//		cin >> arr[i];
//	}
//	int pre = 0; cin >> pre;
//	while (pre--)
//	{
//		int _min = 0; int _max = 0; cin >> _min >> _max;
//		int left = 1; int right = size;
//		int minr = 0; int maxr = 0;
//		while (left < right)
//		{
//			int mid = left + (right - left) / 2;
//			if (arr[mid] >= _min)right = mid;
//			else left = mid + 1;
//		}
//		if (arr[left] < _min)
//		{
//			cout << 0 << endl; continue;
//		}
//		minr = left; left = 1; right = size;
//		while (left < right)
//		{
//			int mid = left + (right - left+1) / 2;
//			if (arr[mid] > _max)right = mid-1;
//			else left = mid ;
//		}
//		if (arr[left] > _max)
//		{
//			cout << 0 << endl; continue;
//		}
//		maxr = left;
//		cout << maxr - minr + 1<<endl;
//	}
//	return 0;
//}




//string a; long long b;
//int gcb(int x,long long y)
//{
//	return x == 0 ? y : gcb(y, x % y);
//}
//int calc()
//{
//	long long t = 0;
//	for (int i = 0; i < a.size(); i++)
//	{
//		t = (t * 10 + a[i]-'0') % b;
//	}
//	return t;
//}
//int main()
//{
//	cin >> a >> b;
//	cout << gcb(b, calc());
//	return 0;
//}






//long long num[100000];
//int main()
//{
//	int size = 0;//数据个数
//	long long all = 0;//总和
//	cin >> size;
//	for (int i = 1; i <= size; i++)
//	{
//		cin >> num[i];
//		all += num[i];
//	}
//	int left = 1; int right = 1; long long ret = 0; long long k = 0;//当前值
//	while(right<=size)
//	{
//		k += num[right];
//		while (k * 2 > all)
//		{
//			ret = max(ret, all - k);
//			k -= num[left];
//			left++;
//		}
//		ret = max(ret, k);
//		right++;
//	}
//	cout << ret << endl;
//}









//long long arr[1000001];
//int kind = 0;
//int _hash[100001] ;
//
//int main()
//{
//	int size = 0;//多少画
//	int num = 0;//多少画家
//	cin >> size >> num;
//	for (int i = 1; i <= size; i++)
//	{
//		cin >> arr[i];
//	}
//	int left = 1; int right = 1; int ret = 1000000; int rl = 0; int rr = 0;
//	while (right <= size)
//	{
//		if (_hash[arr[right]] == 0)kind++;
//		_hash[arr[right]]++;
//		while (kind==num)
//		{
//			if (ret > right - left + 1)
//			{
//				rl = left; rr = right;
//				ret = right - left + 1;
//			}
//			if (_hash[arr[left]] == 1)kind--;
//			_hash[arr[left]]--;
//			left++;
//		}
//		right++;
//	}
//	cout << rl <<" " << rr;
//	return 0;
//}







//int main()
//{
//	int size = 0;
//	cin >> size;
//	for (int s = 0; s < size; s++)
//	{
//		unordered_map<int, int> hash;
//		int left = 1; int right = 1; int num = 0; int _max = 0;
//		cin >> num;
//		for (int i = 1; i <= num; i++)
//		{
//			cin >> arr[i];
//		}
//		while(right<=num)
//		{
//			hash[arr[right]]++;
//			while (hash[arr[right]] > 1)
//			{
//				hash[arr[left]]--;
//				left++;
//			}
//			_max = max(_max, right - left + 1);
//			right++;
//		}
//		cout << _max << endl;
//	}
//	return 0;
//}  