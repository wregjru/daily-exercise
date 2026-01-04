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



int findMaxVal(int n, vector<vector<int>>& res, vector<int>& diff)
{
    vector<int> ma(n+5, 0);
    vector<int>mi(n+5, 0);
    vector<int> rest(n+5, 0x3f3f3f3f);
    for (int i = 0; i < res.size(); i++)
    {
        rest[res[i][0]] = res[i][1];
    }
    for (int i = 0; i < n-2; i++)
    {
        ma[i + 1] = min(rest[i+1], ma[i] + diff[i]);
        mi[i + 1] = max(0, mi[i] - diff[i]);
    }
    for (int i = n - 3; i >=0; i--)
    {
        ma[i] = min(rest[i], ma[i+1] + diff[i]);
        mi[i] = max(0, mi[i+1] - diff[i]);
    }
    int ret = 0;
    for (int i = 0; i < n - 2; i++)
    {
        ret = max(ret, ma[i]);

    }
    return ret;



   /* int ret = 0;
    for (int i = 0; i < res.size(); i++)
    {
        int r = res[i][0];
        int l = 0;
        int d = 0;
        if (i == 0)
        {
            l = 0;
            d = res[i][1];
        }
        else
        {
            l = res[i - 1][0];
            d = res[i][1] - res[i - 1][1];
        }
        
        vector<int> tmp;
        int sum = 0;
        int j = 0;
        if (l == 0)j = 0;
        else j = l+1;
        for (int k=j; k < r; k++)
        {
            tmp.push_back(diff[k]);
            sum += tmp[tmp.size()-1];
        }
        sort(tmp.begin(), tmp.end());
        int p = 0;
        while (sum > d)
        {
            sum -= 2*tmp[p];
            p++;
            if (sum <= d)
            {
                ret = max(ret, sum);
            }
        }
        return ret;

    }*/
}






//int minLength(vector<int>& nums, int k)
//{
//    int l = 0; int r = 0;
//    int sum = 0;
//    int ret = 0x3f3f3f3f;
//    unordered_map<int, int> ma;
//    while (r < nums.size())
//    {
//        if (ma[nums[r]]== 0)
//        sum += nums[r];
//        ma[nums[r]]++;
//        r++;
//        while (l<r && sum>=k)
//        {
//            ret = min(ret, r - l);
//            ma[nums[l]]--;
//            if (ma[nums[l]] == 0)
//            {
//                ma.erase(nums[l]);
//            }
//            if(!ma.count(nums[l]))
//            sum -= nums[l];
//            l++;
//
//        }
//    }
//    if (ret == 0x3f3f3f3f)return -1;
//    return ret;
//}


signed main()
{
    vector<vector<int>> vv = { {3,1},{8,1} };
    vector<int> v = { 2,2,3,1,4,5,1,1,2 };
    cout<<findMaxVal(10, vv, v);
    return 0;
}






//int minimumTotal(vector<vector<int>>& tri)
//{
//    int m = tri.size();
//    int n = tri[m - 1].size();
//    vector<vector<int>> dp(m, vector<int>(n, 0x3f3f3f3f));
//    dp[0][0] = tri[0][0];
//    for (int i = 1; i < m; i++)
//    {
//        for (int j = 0; j < tri[i].size(); j++)
//        {
//            int x = i - 1; int y = j;
//            if (tri[x].size() > j)
//            {
//                dp[i][j] = min(dp[i][j], dp[x][y] + tri[i][j]);
//            }
//            y--;
//            if (y>=0&&tri[x].size() > y)
//            {
//                dp[i][j] = min(dp[i][j], dp[x][y] + tri[i][j]);
//            }
//        }
//    }
//    int ret = 0x3f3f3f3f;
//    for (int i = 0; i < n; i++)
//    {
//        ret = min(ret, dp[m-1][i]);
//    }
//    return ret;
//
//}
//
//signed main()
//{
//    vector<vector<int>> vv = { {2},{3,4},{6,5,7},{4,1,8,3} };
//    minimumTotal(vv);
//    return 0;
//}




//int lengthOfLIS(vector<int>& nums)
//{
//    if (nums.size() == 1)return 1;
//    vector<int> ret(nums.size() + 5, -0x3f3f3f3f);
//    int sz = 0;
//    for (int i = 0; i < nums.size(); i++)
//    {
//        if (nums[i] > ret[sz])
//        {
//            ret[++sz] = nums[i];
//            continue;
//        }
//        int l = 1; int r = sz;
//        while (l < r)
//        {
//            int m = (l + r) / 2;
//            if (ret[m] > nums[i])r = m;
//            else l = m + 1;
//        }
//        if (ret[l - 1] == nums[i])continue;
//        ret[l] = nums[i];
//
//    }
//    return sz;
//}
//
//signed main()
//{
//    //vector<int> v = { 10,9,2,5,3,7,101,18 };
//    vector<int> v = { 4,10,4,3,8,9 };
//    cout << lengthOfLIS(v);
//    return 0;
//}



//int coinChange(vector<int>& coins, int am)
//{
//    vector<int>dp(am + 1, 0x3f3f3f3f);
//    dp[0] = 0;
//    for (int i = 0; i <= am; i++)
//    {
//        for (int j = 0; j < coins.size(); j++)
//        {
//            int k = coins[j];
//            if (i - k >= 0)
//            {
//                if (dp[i - k] == 0x3f3f3f3f)continue;
//                dp[i] = min(dp[i], dp[i - k] + 1);
//            }
//        }
//    }
//    if (dp[am] >= 0x3f3f3f3f)return 0;
//    return dp[am];
//
//}
//
//signed main()
//{
//    vector<int> v= {1, 2, 5};
//    coinChange(v, 11);
//    return 0;
//}
//





//bool wordBreak(string s, vector<string>& wor)
//{
//    vector<bool> v(s.size(), 0);
//    for (int i = 0; i < s.size(); i++)
//    {
//        for (int j = 0; j < wor.size(); j++)
//        {
//            string& p = wor[j];
//            int k = i - p.size()+1;
//            if (k < 0)continue;
//            if (k == 0 && s.substr(k, p.size()) == p)
//            {
//                v[i] = 1;
//                break;
//            }
//            if (k == 0)
//            {
//                continue;
//            }
//
//            if (v[k-1] == 1 && s.substr(k, p.size()) == p)
//            {
//                v[i] = 1;
//                break;
//            }
//
//        }
//    }
//    return v[s.size() - 1];
//}
//
//signed main()
//{
//    string s = "applepenapple";
//    vector<string> dict = { "apple", "pen" };
//    wordBreak(s, dict);
//    return 0;
//}