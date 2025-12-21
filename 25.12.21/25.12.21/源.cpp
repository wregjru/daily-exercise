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
//#define int long long
#define y2 my_y2
#define y1 my_y1
typedef pair<int, int> PII;
//ios::sync_with_stdio(false);
//cin.tie(nullptr);



bool wordPattern(string pat, string s1)
{
    unordered_map<char, int>ma1;
    unordered_map<string, int>ma2;
    int pos = 0;
    int n = pat.size();
    vector<string>s;
    int l = 0; int r = s1.find(' ');
    while (r != string::npos)
    {
        s.push_back(s1.substr(l, r - l));
        l = r + 1;
        r = s1.find(' ', r + 1);
    }
    s.push_back(s1.substr(l, r));
    if (pat.size() != s.size())return 0;
    for (int i = 0; i < n; i++)
    {
        if (ma1[pat[i]] != ma2[s[i]])return 0;
        if (ma1[pat[i]] == 0)
        {
            ma1[pat[i]] = ma2[s[i]] = (++pos);
        }
    }
    return 1;
}

signed main()
{
    string a = "a";
    string b = "cat cat cat cat";
    cout<<wordPattern(a, b);
    return 0;
}






//bool isIsomorphic(string s, string t)
//{
//    int tmp1[130] = { 0 };
//    int cnt1[130] = { 0 };
//    vector<int> rs;
//    vector<int> rt;
//    int pos1 = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        if (tmp1[s[i]] == 0)
//        {
//            pos1++;
//            tmp1[s[i]] = 1;
//            rs.push_back(pos1);
//            cnt1[s[i]] = pos1;
//
//        }
//        else
//        {
//            rs.push_back(cnt1[s[i]]);
//        }
//    }
//    int tmp2[130] = { 0 };
//    int cnt2[130] = { 0 };
//    int pos2 = 0;
//    for (int i = 0; i < t.size(); i++)
//    {
//        if (tmp2[t[i]] == 0)
//        {
//            pos2++;
//            tmp2[t[i]] = 1;
//            rt.push_back(pos2);
//            cnt2[t[i]] = pos2;
//
//        }
//        else
//        {
//            rt.push_back(cnt2[t[i]]);
//        }
//    }
//    int flag = 1;
//    for (int i = 0; i < rs.size(); i++)
//    {
//        if (rs[i] != rt[i])flag = 0;
//    }
//    return flag;
//}
//signed main()
//{
//    string s = "bbbaaaba";
//    string t = "aaabbbba";
//    cout<<isIsomorphic(s, t);
//    return 0;
//}











//void setZeroes(vector<vector<int>>& ma)
//{
//    // int row=0;int col=0;
//    // int n=ma.size();
//    // int m=ma[0].size();
//    // for(int i=0;i<n;i++)
//    // {
//    //     if(ma[i][0]==0)row=1;
//    // }
//    // for(int j=0;j<m;j++)
//    // {
//    //     if(ma[0][j]==0)col=1;
//    // }
//    // for(int i=0;i<n;i++)
//    // {
//    //     for(int j)
//    // }
//    int x = 0x3f3f3f3f; int y = 0x3f3f3f3f;
//    int n = ma.size();
//    int m = ma[0].size();
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (ma[i][j] == 0)
//            {
//                x = i; y = j;
//                break;
//            }
//        }
//        if (x != 0x3f3f3f3f)break;
//    }
//    if (x == 0x3f3f3f3f)
//    {
//        return;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if(ma[i][y]!=0)
//        ma[i][y] = 2;
//    }
//    for (int j = 0; j < m; j++)
//    {
//        if(ma[x][j]!=0)
//        ma[x][j] = 2;
//    }
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            if (ma[i][j] == 0)
//            {
//                ma[x][j] = 0; ma[i][y] = 0;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        if (ma[i][y] == 0)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (i == x || j == y)continue;
//                ma[i][j] = 0;
//            }
//        }
//    }
//    for (int j = 0; j < m; j++)
//    {
//        if (ma[x][j] == 0)
//        {
//            for (int i = 0; i < n; i++)
//            {
//                if (i == x || j == y)continue;
//                ma[i][j] = 0;
//            }
//        }
//    }
//    for (int i = 0; i < n; i++)
//    {
//        ma[i][y] = 0;
//    }
//    for (int j = 0; j < m; j++)
//    {
//        ma[x][j] = 0;
//    }
//    int sdss = 0;
//}




//void gameOfLife(vector<vector<int>>& bo)
//{
//    vector<vector<int>> vv = bo;
//    int n = bo.size(); int m = bo[0].size();
//    int dx[8] = { -1,-1,-1,0,1,1,1,0 };
//    int dy[8] = { -1,0,1,1,1,0,-1,-1 };
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < m; j++)
//        {
//            int li = 0;
//            for (int k = 0; k < 8; k++)
//            {
//                int x = i + dx[k];
//                int y = j + dy[k];
//                if (x<0 || x>=n || y<0 || y>=m)continue;
//                if (vv[x][y] == 1)li++;
//            }
//            if (vv[i][j] == 0 && li == 3)bo[i][j] = 1;
//            if (vv[i][j] == 1 && li == 1)bo[i][j] = 0;
//            if (vv[i][j] == 1 && li > 3)bo[i][j] = 0;
//        }
//    }
//    int sss = 1;
//}
//
//
//
//
//
//signed main()
//{
//    vector<vector<int>> vv(4);
//    vv[0] = { 0,1,0 };
//    vv[1] = { 0,0,1 };
//    vv[2] = { 1,1,1 };
//    vv[3] = { 0,0,0 };
//    gameOfLife(vv);
//    return 0;
//}




//void solve()
//{
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> num[i];
//	}
//	int dp[4] = { 0 };
//	dp[0] = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		if (num[i] == 2)
//		{
//			dp[2] = add(dp[2], dp[2]);
//		}
//		dp[num[i]] = add(dp[num[i] - 1], dp[num[i]]);
//	}
//	cout << dp[3] << endl;
//}
//
//
//
//signed main()
//{
//	int t = 1;
//	while (t--)solve();
//	return 0;
//}



//bool cmp(vector<int>& a, vector<int>& b)
//{
//	return a[0] < b[0];
//}
//
//signed main()
//{
//	int n; cin >> n;
//	int ret = 0;
//	vector<int> tu[200];
//	int pos = 0;
//	for (int i = 2; i <= 17; i++)
//	{
//		int mul = 1;
//		for (int j = 1; j <= i; j++)
//		{
//			mul *= j;
//		}
//		if (mul == n)
//		{
//			pos++;
//			for (int k = 1; k <= i ; k++)
//			{
//				tu[pos].push_back(k);
//			}
//			break;
//		}
//		for (int j = 2; mul <= n; j++)
//		{
//			mul /= (j-1);
//			mul *= (j + i-1);
//			if (mul > n)break;
//			if (mul == n)
//			{
//				pos++;
//				for (int k = j; k <= i + j - 1; k++)
//				{
//					tu[pos].push_back(k);
//				}
//			}
//		}
//	}
//	sort(tu + 1, tu + 1 + pos, cmp);
//	cout << pos << endl;
//	for (int i = 1; i <= pos; i++)
//	{
//		for (int j = 0; j < tu[i].size(); j++)
//		{
//			cout << tu[i][j] << " ";
//		}
//		cout << endl;
//	}
//	return 0;
//}