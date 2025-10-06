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

int wall[4010];
int disc[4010];
int a[1010]; int b[1010];
int pos;
unordered_map <int, int> id;
unordered_map <int, bool> has;
int main()
{ 
	int wallsize = 0; int _size = 0;
	cin >> wallsize >> _size;
	for (int i = 0; i < _size; i++)
	{
		cin >> a[i] >> b[i];
	}
	for (int i = 0; i < _size; i++)
	{
		disc[++pos] = a[i]; disc[++pos] = a[i] + 1;
		disc[++pos] = b[i]; disc[++pos] = b[i] + 1;
	}
	sort(disc, disc + pos);
	int cnt = 0;//数的个数
	for (int i = 0; i < pos; i++)
	{
		if (id.count(disc[i]))continue;
		else
		{
			id[disc[i]] = i;
			cnt++;
		}
	}
	for (int i = 0; i < _size; i++)
	{
		int l = id[a[i]]; int r = id[b[i]];
		for (int j = l; j <= r; j++)
		{
			wall[j] = i + 1;
		}
	}
	int ret = 0;
	for (int i = 0; i < 4010; i++)
	{
		if (!has[wall[i]]&& wall[i]!=0)
		{
			ret++;
			has[wall[i]] = true;
		}
	}
	cout << ret << endl;
	return 0;
}

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
