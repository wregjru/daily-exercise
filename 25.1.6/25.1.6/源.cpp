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




long long countStableSubarrays(vector<int>& ca)
{
    vector<long long> dp(ca.size() + 1, 0);
    for (int i = 0; i < ca.size(); i++)
    {
        dp[i + 1] = dp[i] + ca[i];
    }
    long long ret = 0;
    map<pair<long long, long long>, long long> ma;

    for (int i = 2; i < ca.size(); i++)
    {
        ma[{dp[i - 2] + 2 * ca[i - 2], ca[i - 2]}]++;
        ret += ma[{dp[i], ca[i]}];
    }
    return ret;
}







//long long countStableSubarrays(vector<int>& ca)
//{
//    vector<int> dp(ca.size() + 1, 0);
//    for (int i = 0; i < ca.size(); i++)
//    {
//        dp[i + 1] = dp[i] + ca[i];
//    }
//    int ret = 0;
//    unordered_map<int, vector<int>> ma;
//    for (int i = 0; i < dp.size(); i++)
//    {
//        ma[i].push_back(dp[i]);
//    }
//    for (auto& e : ma)
//    {
//        vector<int>& s = e.second;
//        if (s.size() == 1)continue;
//        for (int i = 1; i < s.size(); i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (s[i] == dp.size() - 1 || dp[i] == dp.size() - 1)continue;
//                if (dp[s[i] + 1] == dp[s[j] + 1])ret++;
//            }
//        }
//    }
//    return ret;
//}


signed main()
{
    vector<int> v = { 9,3,3,3,9 };
    countStableSubarrays(v);
    return 0;
}




//bool cmp(pair<int, int>& p1, pair<int, int>& p2)
//{
//    if (p1.first != p2.first)
//    {
//        return p1.first < p2.first;
//    }
//    else
//    {
//        return p1.second > p2.second;
//    }
//}
//
//
//int longestWPI(vector<int>& ho)
//{
//    int fl = 0;
//    for (int i = 0; i < ho.size(); i++)
//    {
//        if (ho[i] > 8)
//        {
//            ho[i] = 1;
//            fl = 1;
//        }
//        else ho[i] = -1;
//    }
//    vector<int> dp(ho.size() + 1, 0);
//    for (int i = 0; i < ho.size(); i++)
//    {
//        dp[i + 1] = dp[i] + ho[i];
//    }
//    vector<pair<int, int>> vp;
//    for (int i = 0; i <= ho.size(); i++)
//    {
//        vp.push_back({ dp[i],i });
//    }
//    sort(vp.begin(), vp.end(), cmp);
//    int ret = 0;
//    int mi = 0x3f3f3f3f;
//    int minum = 0;
//    for (int i = 0; i < vp.size(); i++)
//    {
//
//        ret = max(ret, vp[i].second - mi);
//        mi = min(mi, vp[i].second);
//    }
//    return max(ret,fl);
//}
//
//
//signed main()
//{
//    vector<int> v = { 9,9,6,0,6,6,9 };
//    longestWPI(v);
//    return 0;
//}






//struct cmp
//{
//	bool operator()(const pair<int, char>& p1, const pair<int, char>& p2) const
//	{
//		if (p1.first != p2.first)
//		{
//			return p1.first > p2.first;
//		}
//		else
//		{
//			return p1.second > p2.second;
//		}
//		return 0;
//	}
//};
//
//
//
//string minimizeStringValue(string s) 
//{
//	int tmp[26] = { 0 };
//	int cnt = 0;
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] != '?')
//			tmp[s[i] - 'a']++;
//		else cnt++;
//	}
//	priority_queue<pair<int, char>,vector<pair<int,char>>,cmp> heap;
//	for (int i = 0; i < 26; i++)
//	{
//		heap.push({ tmp[i],'a' + i });
//	}
//	int ret[26] = { 0 };
//	for (int i = 0; i < cnt; i++)
//	{
//		auto s = heap.top(); heap.pop();
//		char e = s.second;
//		int f = s.first;
//		ret[e - 'a']++;
//		heap.push({ f + 1,e });
//
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (s[i] == '?')
//		{
//			for (int j = 0; j < 26; j++)
//			{
//				if (ret[j])
//				{
//					s[i] = ('a' + j);
//					ret[j]--;
//					break;
//				}
//			}
//		}
//	}
//	return s;
//	
//
//}
//
//
//signed main()
//{
//	cout<<minimizeStringValue("???");
//	return 0;
//}





//int minimumOperations(vector<vector<int>>& grid)
//{
//    int m = grid.size();
//    int n = grid[0].size();
//    vector<vector<int>> dp(10, vector<int>(n, 0));
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            dp[grid[i][j]][j]++;
//        }
//    }
//    for (int i = 0; i < 10; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            dp[i][j] = m - dp[i][j];
//        }
//    }
//    vector<vector<int>> dp2(10, vector<int>(n, 0x3f3f3f3f));
//    for (int j = 0; j < n; j++)
//    {
//        for (int i = 0; i < 10; i++)
//        {
//            if (j == 0)
//            {
//                dp2[i][j] = dp[i][j];
//                continue;
//            }
//            for (int k = 0; k < 10; k++)
//            {
//                if (k == i)continue;
//                dp2[i][j] = min(dp2[i][j], dp2[k][j - 1]);
//            }
//            dp2[i][j] += dp[i][j];
//        }
//    }
//    int ret = 0x3f3f3f3f;
//    for (int j = 0; j < 10; j++)
//    {
//        ret = min(ret, dp2[j][n - 1]);
//    }
//    return ret;
//}
//
//
//signed main()
//{
//    vector<vector<int>> vv = { {1,0,2},{1,0,2} };
//    minimumOperations(vv);
//    return 0;
//}