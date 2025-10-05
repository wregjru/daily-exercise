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

int main()
{
	long long _size = 0; cin >> _size;
	long long ret = 0;
	for (long long i = 1; i <=  _size / 2; i++)
	{
		ret += _size / i;
	}
	ret =ret+ _size - _size / 2;
	cout << ret << endl;
	return 0;
}

//struct co
//{
//	int l; int r;
//}cow[2600];
//struct fa
//{
//	int q; int n;//强度，数量
//}fang[2600];
//bool com1(co a1, co a2)
//{
//	return a1.l > a2.l;
//}
//bool com2(fa a1, fa a2)
//{
//	return a1.q > a2.q;
//}
//
//int main()
//{
//	int cown; int fn;
//	cin >> cown >> fn;
//	for (int i = 0; i < cown; i++)
//	{
//		cin >> cow[i].l >> cow[i].r;
//	}
//	for (int i = 0; i < fn; i++)
//	{
//		cin >> fang[i].q >> fang[i].n;
//	}
//	sort(cow, cow + cown, com1);
//	sort(fang, fang + fn, com2);
//	int ret = 0;
//	for (int i = 0; i < cown; i++)
//	{
//		int left = cow[i].l;
//		int right = cow[i].r;
//		for (int j = 0; j < fn; j++)
//		{
//			if (fang[j].n != 0 && fang[j].q >= left && fang[j].q <= right)
//			{
//				fang[j].n--; ret++;
//				break;
//			}
//			if (fang[j].q < left)break;
//		}
//	}
//	cout << ret << endl;
//
//}










//long long mod(long long a, long long b, long long p)
//{
//	long long ret = 1;
//	while (b)
//	{
//		if(b&1)ret = ret * a % p;
//		a = (a%p) * (a % p);
//		b=b >> 1;
//	}
//	return ret;
//}
//int main()
//{
//	long long a = 0; long long b = 0; long long p = 0;
//	cin >> a >> b >> p;
//	printf("%lld^%lld mod %lld=%lld", a, b, p, mod(a, b, p));
//	return 0;
//}








//struct node
//{
//	double l; int r;
//}id[2000];
//
//
//bool com(node a1, node a2)
//{
//	return a1.l < a2.l;
//}
//
//int main()
//{
//	int ds = 0;
//	int _size = 0; int d = 0;
//	while (cin >> _size >> d, _size && d)
//	{
//		int flag = 1;
//		ds++;//case:ds
//		int ret = 1;//几个雷达
//		for (int i = 0; i < _size; i++)
//		{
//			double x = 0; double y = 0;
//			cin >> x >> y;
//			if (y > d)
//			{
//				flag = -1;
//				break;
//			}
//			double s = sqrt(d * d - y * y);
//			id[i].l = x - s; id[i].r = x + s;
//		}
//		sort(id, id + _size, com);
//		if (flag == -1)
//		{
//			cout << "Case " << ds << ": " << -1 << endl; continue;
//		}
//		int right = id[0].r;
//		for (int k = 1; k < _size; k++)
//		{
//			if (id[k].l <= right) right = min(right, id[k].r);
//			else
//			{
//				ret++;
//				right = id[k].r;
//			}
//		}
//		cout << "Case " << ds << ": " << ret << endl; 
//		
//	}
//	return 0;
//}





//int _size;
//bool p[1000010];
//int pre[1000010]; int mo = 1;
//int ret[1000010];
//void getp()
//{
//	for (int i = 2; i <= _size; i++)
//	{
//		if (!p[i])
//		{
//			pre[mo] = i; mo++;
//		}
//		for (long long j = 1; pre[j] * i <= _size; j++)
//		{
//			p[pre[j] * i] = true;
//			if (i % pre[j] == 0)break;
//		}
//	}
//}
//int main()
//{
//	cin >> _size;
//	getp();
//	
//	for (int i = 1; i < mo; i++)
//	{
//		int all = 0;
//		for (long long j = pre[i]; j <= _size; j *= pre[i])
//		{
//			all += _size / j;
//		}
//		cout << pre[i] << " " << all << endl;
//
//		
//	}
//	return 0;
//}



//int shuh[100000];
//
//void get(int i)
//{
//	for (int j = 2; j <= i / j; j++)
//	{
//		if (i % j == 0)
//		{
//			shuh[j]++;
//			i = i / j;
//		}
//	}
//	if (i > 1)shuh[i]++;
//}
//int main()
//{
//	int num = 0; cin >> num;
//	for (int i = 2; i <= num; i++)
//	{
//		get(i);
//	}
//	return 0;
//}



//bool pre[1000010];
//int _size = 1000003;
//int p[1000010];
//int mo = 1;//最后一个质数，mo不算
//void getp()
//{
//	for (int i = 2; i <= _size; i++)
//	{
//		if (!pre[i])
//		{
//			p[mo] = i;
//			mo++;
//		}
//		for (int j = 1; p[j] * i <= _size; j++)
//		{
//			pre[p[j] * i] = true;
//			if (i % p[j] == 0)break;
//		}
//	}
//}
//
//int main()
//{
//	getp();
//	for (int i = 0; i < _size; i++)
//	{
//		int num = 0; cin >> num;
//		if (num == 0)
//		{
//			break;
//		}
//		for (int j = 2; j < mo; j++)
//		{
//			if (!pre[num - p[j]])
//			{
//				cout << num << "=" << p[j] << "+" << num - p[j] << endl; break;;
//			}
//		}
//	}
//	return 0;
//}
//struct node
//{
//	int l; int r;
//}d[1000010];
//bool cmp(node a1, node a2)
//{
//	return a1.l < a2.l;
//}
//
//int main()
//{
//	int _size = 0; cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> d[i].l >> d[i].r;
//	}
//	sort(d, d + _size, cmp);
//	int right = d[0].r;
//	int ret = 1;
//	for (int i = 1; i < _size; i++)
//	{
//		if (d[i].l < right)
//		{
//			right = min(right, d[i].r);
//		}
//		else
//		{
//			right = d[i].r; ret++;
//		}
//	}
//	cout << ret;
//	return 0;
//}


//priority_queue<long long, vector<long long>, greater<long long>> heap;
//int main()
//{
//	long long _size; cin >> _size;
//	for (long long i = 0; i < _size; i++)
//	{
//		long long num = 0; cin >> num;
//		heap.push(num);
//	}
//	long long len = 0;
//	while (heap.size() > 1)
//	{
//		long long a = heap.top(); heap.pop();
//		long long b = heap.top(); heap.pop();
//		long long all = a + b; heap.push(all);
//		len = len + a + b;
//	}
//
//	cout << len << endl;
//	return 0;
//}


//int _size;
//struct node
//{
//	int we;
//	long long s;
//}cow[100000];
//bool com(node a1, node a2)
//{
//	return a1.s - a2.we > a2.s - a1.we;
//}
//
//int main()
//{
//	cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> cow[i].we >> cow[i].s;
//	}
//	sort(cow, cow + _size, com);
//	long long wb = 0;//上面总重
//	long long yabian = -10000000;
//	for (int i = _size - 1; i >= 0; i--)
//	{
//		yabian = max(yabian, wb - cow[i].s);
//		wb += cow[i].we;
//	}
//	cout << yabian;
//	return 0;
//}






//struct node
//{
//	int dist;
//	int sp; 
//}cow[100020];
//int _size;
//bool com(node a1, node a2)
//{
//	return a2.dist * a1.sp > a1.dist * a2.sp;
//}
//int main()
//{
//	cin >> _size;
//	long long alls = 0;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> cow[i].dist >> cow[i].sp;
//		alls += cow[i].sp;
//	}
//	sort(cow, cow + _size, com);
//	long long ret = 0;
//	for (int i = 0; i < _size; i++)
//	{
//		alls -= cow[i].sp;
//		ret = ret + /*cow[i].sp * cow[i].dist +*/ alls * cow[i].dist * 2;
//	}
//	cout << ret << endl;
//	return 0;
//}




//string shu[20];
//bool com(string a1, string a2)
//{
//	string x1 = a1 + a2;
//	string x2 = a2 + a1;
//	return x1 > x2;
//}
//int main()
//{
//	int _size = 0; cin >> _size;
//	for (int i = 0; i < _size; i++)
//	{
//		cin >> shu[i];
//	}
//	sort(shu, shu+_size, com);
//	for (int i = 0; i < _size; i++)cout << shu[i];
//	return 0;
//}
