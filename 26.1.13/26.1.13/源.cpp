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
#include <chrono>
using namespace std;
//typedef __int128 ll;
typedef long long ll;
typedef unsigned long long ull;
#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);


bool check(vector<int>&num, vector<vector<int>>&que, int cur)
{
	vector<int> cmp(num.size(), 0);
	for (int i = 0; i < cur; i++)
	{
		cmp[que[i][0]] += que[i][2];
		if (que[i][1] == num.size() - 1)continue;
		cmp[que[i][1]+1] += que[i][2];
	}
	if (cmp[0] < num[0])return 0;
	for (int i = 1; i < num.size(); i++)
	{
		cmp[i] += cmp[i - 1];
		if (cmp[i] < num[i])return 0;
	}
	return 1;
}

int minZeroArray(vector<int>& num, vector<vector<int>>& que) 
{
	int l = 0; int r = que.size();
	while (l < r)
	{
		int m = (l + r + 1) / 2;
		if (check(num, que, m)) l = m;
		else r = m - 1;
	}
	if (l == que.size())return -1;
	return l-1;
}


signed main()
{
	vector<int> v = { 2,0,2 };
	vector<vector<int>> vv = { {0,2,1},{0,2,1},{1,1,3} };
	cout << minZeroArray(v, vv);
	return 0;
}


//bool check(string& s, string& p, vector<int> num, int cur)
//{
//	vector<int> tmp;
//	for (int i = 0; i < cur; i++)
//	{
//		tmp.push_back(num[i]);
//	}
//	sort(tmp.begin(), tmp.end());
//	int pos = 0;
//	string ss;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (pos<tmp.size()&&i == tmp[pos])
//		{
//			pos++;
//			continue;
//		}
//		ss.push_back(s[i]);
//	}
//	int p1 = 0;
//	for (int i = 0; i < ss.size(); i++)
//	{
//		if (p1 == p.size())return 1;
//		if (ss[i] == p[p1])p1++;
//	}
//	return p1 == p.size();
//	
//}
//
//int maximumRemovals(string s, string p, vector<int>& rem) 
//{
//	int n = rem.size();
//	int l = 0; int r = n - 1;
//	while (l < r)
//	{
//		int m = (l + r + 1) / 2;
//		if (check(s, p, rem, m))l = m;
//		else r = m - 1;
//	}
//	return l;
//}
//
//
//signed main()
//{
//	vector<int> v = { 3,1,0 };
//	cout<<maximumRemovals("abcacb", "ab", v);
//	return 0;
//}
