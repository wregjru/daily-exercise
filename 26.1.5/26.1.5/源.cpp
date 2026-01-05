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




int maximalSquare(vector<vector<char>>& ma)
{
    int m = ma.size();
    int n = ma[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = ma[i - 1][j - 1]-'0' + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
        }
    }
    int mi = min(m, n);
    int ret = 0x3f3f3f3f;
    for (int i = 1; i <= mi; i++)
    {
        for (int j = 1; j <= m - i+1; j++)
        {
            for (int k = 1; k <= n - i+1; k++)
            {
                int t = dp[j + i-1][k + i-1] - dp[j - 1][k + i - 1] - dp[j + i - 1][k - 1] + dp[j - 1][k - 1];
                if (t == i * i)
                {
                    ret = i;
                    break;
                }
            }
            if (ret == i)break;
        }
    }
    if (ret == 0x3f3f3f3f)return 0;
    return ret*ret;
}


signed main()
{
    vector<vector<char>> v = {
    {'1','0','1','0','0'},
    {'1','0','1','1','1'},
    {'1','1','1','1','1'},
    {'1','0','0','1','0'}
    };
    maximalSquare(v);
    return 0;
}








//bool isInterleave(string s1, string s2, string s3)
//{
//    if (s1.size() + s2.size() != s3.size())return 0;
//    if (s1.size() == 0)
//    {
//        return s2 == s3;
//    }
//    if (s2.size() == 0)
//    {
//        return s1 == s3;
//    }
//    s1 = " " + s1;
//    s2 = " " + s2;
//    s3 = " " + s3;
//    int m = s1.size(); int n = s2.size();
//    vector<vector<int>> dp(m, vector<int>(n, 0));
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (i == 0 && j == 0)
//            {
//                if (s3[0] == s1[0] || s3[0] == s2[0])
//                {
//                    dp[0][0] = 1;
//                }
//                else
//                {
//                    return 0;
//                }
//            }
//            if (i && dp[i - 1][j] && s3[i + j] == s1[i])
//            {
//                dp[i][j] = 1;
//            }
//            if (j && dp[i][j - 1] && s3[i + j] == s2[j])
//            {
//                dp[i][j] = 1;
//            }
//        }
//    }
//    return dp[m - 1][n - 1];
//}
//
//
//signed main()
//{
//    string s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac";
//    //string s1 = "accbaabaaabbcbaacbababacaababbcbabaababcaabbbbbcacbaa", s2 = "cabaabcbabcbaaaacababccbbccaaabaacbbaaabccacabaaccbbcbcb", s3 = "accbcaaabbaabaaabbcbcbabacbacbababaacaaaaacbabaabbcbccbbabbccaaaaabaabcabbcaabaaabbcbcbbbcacabaaacccbbcbbaacb";
//    cout<<isInterleave(s1, s2, s3);
//    return 0;
//}










//int uniquePathsWithObstacles(vector<vector<int>>& obs)
//{
//    int m = obs.size();
//    int n = obs[0].size();
//    vector<vector<int>> dp(m, vector<int>(n, 0));
//    dp[0][0] = 1;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (obs[i][j] == 1)
//            {
//                dp[i][j] = -1;
//            }
//        }
//    }
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (i == 0 && j == 0)continue;
//            if (dp[i][j] == -1)continue;
//            if (i > 0 && dp[i - 1][j] != -1)
//            {
//                dp[i][j] += dp[i - 1][j];
//            }
//            if (j > 0 && dp[i][j - 1] != -1)
//            {
//                dp[i][j] += dp[i][j - 1];
//            }
//        }
//    }
//    return dp[m - 1][n - 1];
//}
//
//
//signed main()
//{
//    vector<vector<int>> vv = { {0,0,0},{0,1,0},{0,0,0} };
//    uniquePathsWithObstacles(vv);
//    return 0;
//}