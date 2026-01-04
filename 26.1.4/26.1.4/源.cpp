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


int findShortestCycle(int n, vector<vector<int>>& edg)
{
    vector<vector<int>> tu(n);
    for (int i = 0; i < edg.size(); i++)
    {
        tu[edg[i][0]].push_back(edg[i][1]);
        tu[edg[i][1]].push_back(edg[i][0]);
    }
    int ret = 0x3f3f3f3f;
    for (int i = 0; i < n; i++)
    {
        vector<int> dist(n, 0x3f3f3f3f);
        vector<int> gone(n, 0);
        vector<int> par(n, -1);
        gone[i] = 1;
        dist[i] = 0;
        queue<int> qu;
        qu.push(i);
        while (!qu.empty())
        {
            int p = qu.front(); qu.pop();
            for (int i = 0; i < tu[p].size(); i++)
            {
                int q = tu[p][i];
                if (gone[q])
                {
                    if (par[p]!=q)
                    {
                        ret = min(ret, dist[p] + dist[q] + 1);
                        continue;
                    }
                    else continue;
                }
                gone[q] = 1;
                qu.push(q);
                dist[q] = dist[p] + 1;
                par[q] = p;
            }
        }

    }
    if (ret == 0x3f3f3f3f)return -1;
    return ret;
}


signed main()
{
    vector<vector<int>> vv = { {0,1},{1,2},{2,0},{3,4},{4,5},{5,6},{6,3} };
    cout<<findShortestCycle(7, vv);
    return 0;
}







//vector<long long> minOperations(vector<int>& nums, vector<int>& qu)
//{
//    sort(nums.begin(), nums.end());
//    int n = nums.size();
//    vector<long long> dp(nums.size() + 1, 0);
//    vector<long long> ret(qu.size(), 0);
//    for (int i = 0; i < nums.size(); i++)
//    {
//        dp[i + 1] = dp[i] + nums[i];
//    }
//    for (int i = 0; i < qu.size(); i++)
//    {
//        int q = qu[i];
//        int l = 0; int r = nums.size() - 1;
//        while (l < r)
//        {
//            int m = (l + r+1) / 2;
//            if (nums[m] <= q)l = m;
//            else r = m - 1;
//        }
//        if (nums[l] > q)
//        {
//            ret[i] = dp[n] - q * n;
//            continue;
//        }
//        //if (l == 0)
//        //{
//        //    ret[i] = dp[n] - q * n;
//        //    continue;
//        //}
//        //if (l == n - 1)
//        //{
//        //    ret[i] = q * n - dp[n];
//        //    continue;
//        //}
//        l++;
//        //ret[i] += q * (l + 1) - (dp[l + 1]) + (dp[n + 1] - dp[l + 1]) - q * (n - l + 1);
//        ret[i] = dp[n] - dp[l] - q * (n - l) + q * l - dp[l] - dp[0];
//    }
//    return ret;
//
//}


//signed main()
//{
//    set<int> inq;
//    inq.
//    vector<int> nums = { 47,50,97,58,87,72,41,63,41,51,17,21,7,100,69,66,79,92,84,9,57,26,26,28,83,38 };
//    vector<int> v = { 3 };
//    minOperations(nums, v);
//    return 0;
//}







//const int mod = 1e9 + 7;
//int numberOfRoutes(vector<string>& grid, int d)
//{
//    int n = grid.size();
//    int m = grid[0].size();
//    for (int i = 0; i < n; i++)
//    {
//        grid[i] = 'q' + grid[i];
//    }
//    grid.insert(grid.begin(), "1");
//    //vector<vector<int>> dp1(n + 2, vector<int>(m + 2, 0));//Í£Ò»´Î
//    //vector<vector<int>> dp2(n + 2, vector<int>(m + 2, 0));
//    vector<long long> dp1(m + 1, 0);
//    vector<long long> dp2(m + 1, 0);
//    int l = sqrt(d * d - 1);
//    for (int i = n; i >= 1; i--)
//    {
//        vector<long long> f(m + 1, 0);
//        for (int j = 1; j <= m; j++)
//        {
//            if (grid[i][j] == '#')continue;
//            if (i == n)f[j] = 1;
//            else f[j] = ((dp1[min(m, j + l)] - dp1[max(0, j - l - 1)]) % mod + (dp2[min(m, j + l)] - dp2[max(0, j - l - 1)]) % mod)%mod;
//        }
//        for (int j = 1; j <= m; j++)
//        {
//            dp1[j] = (dp1[j - 1] + f[j])%mod;
//        }
//        vector<long long> g(m + 1, 0);
//        for (int j = 1; j <= m; j++)
//        {
//            if (grid[i][j] == '#')continue;
//            g[j] = (dp1[min(m, j + d)] - dp1[max(0, j - d - 1)] - f[j]) % mod;
//        }
//        for (int j = 1; j <= m; j++)
//        {
//            dp2[j] = (dp2[j - 1] + g[j]) % mod;
//        }
//    }
//    return ((dp1[m] + dp2[m]) % mod + mod) % mod;
//   
//
//}
//
//
//signed main()
//{
//    vector<string> v = { "#" };
//    cout << numberOfRoutes(v, 1);
//    return 0;
//}










//int findMaxVal(int n, vector<vector<int>>& res, vector<int>& diff)
//{
//    vector<int> top(n, 0x3f3f3f3f);
//    for (int i = 0; i < res.size(); i++)
//    {
//        top[res[i][0]] = res[i][1];
//    }
//    vector<int> h(n, 0);
//    for (int i = 1; i < n; i++)
//    {
//        h[i] = min(top[i], h[i - 1] + diff[i - 1]);
//    }
//    for (int i = n - 2; i >= 0; i--)
//    {
//        h[i] = min(h[i], h[i + 1] + diff[i]);
//        h[i] = min(h[i], top[i]);
//    }
//    int ret = 0;
//    for (int i = 0; i < n; i++)
//    {
//        ret = max(ret, h[i]);
//    }
//    return ret;
//}
//
//
//
//
//signed main()
//{
//    vector<vector<int>> vv = { {3,1} ,{ 8,1 } };
//    vector<int> v = { 2,2,3,1,4,5,1,1,2 };
//    findMaxVal(10, vv, v);
//    return 0;
//}