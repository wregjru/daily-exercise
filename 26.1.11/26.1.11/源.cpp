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


int maximalRectangle(vector<vector<char>>& ma)
{
    int m = ma.size(); int n = ma[0].size();
    int ret = 0;
    for (int i = 0; i < m; i++)
    {
        vector<int> tmp(n, 0);
        for (int j = 0; j < n; j++)
        {
            for (int k = i; k >= 0; k--)
            {
                if (ma[k][j] == '1')
                    tmp[j]++;
                else break;
            }
        }
        stack<int> st;
        vector<int> tmp1(n, 0);
        vector<int> tmp2(n, n);
        for (int j = 0; j < n; j++)
        {
            while (st.size() && tmp[st.top()] >= tmp[j])
            {
                tmp2[st.top()] = j;
                st.pop();
            }
            tmp1[j] = (st.empty() ? -1 : st.top());
            st.push(j);
        }
        for (int j = 0; j < n; j++)
        {
            int sss = (tmp2[j] - tmp1[j] - 1) * tmp[j];
            ret = max(ret, (tmp2[j] - tmp1[j] - 1) * tmp[j]);
        }

    }
    return ret;
}


signed main()
{
    vector<vector<char>> v = { {'1','0','1','1','1'},{'0','1','0','1','0'},{'1','1','0','1','1'},{'1','1','0','1','1'},{'0','1','1','1','1'} };
    cout<<maximalRectangle(v);
    return 0;
}







//int maximumAND(vector<int>& num, int k, int m)
//{
//    int ret = 0;
//    int n = num.size();
//    vector<int> req(m, -1);
//    sort(num.begin(), num.end(), less<int>());
//    if (m == 1)
//    {
//        int ma = 0;
//        for (int i = 0; i < n; i++)ma = max(ma, num[i]);
//        return ma + k;
//    }
//    for (int i = 31; i >= 0; i--)
//    {
//        if (i == 2)
//        {
//            int sss = 0;
//        }
//        if(req[0]==-1)
//        {
//            long long cur = (long long)1 << i;
//            priority_queue<pair<int, int>, vector<pair<int, int>>, less<pair<int, int>>> heap;
//            for (int j = 0; j < n; j++)
//            {
//                int ss = num[j] % cur;
//                if ((num[j]&((long long)1<<i)))ss = cur;
//                heap.push({ ss,j });
//            }
//            int t = 0;
//            vector<pair<int, int>> tmp;
//            for (int j = 0; j < m; j++)
//            {
//                auto s = heap.top(); heap.pop();
//                tmp.push_back(s);
//                t += (cur - s.first);
//                if (t > k)break;
//            }
//            if (t <= k)
//            {
//                k -= t;
//                ret += cur;
//                for (int j = 0; j < m; j++)
//                {
//                    if (num[tmp[j].second] & cur)continue;
//                    num[tmp[j].second] = cur;
//                }
//                for (int j = 0; j < m; j++)
//                {
//                    req[j] = tmp[j].second;
//                }
//            }
//        }
//        else
//        {
//            if (k <= 0)continue;
//            int t = 0;
//            long long cur = (long long)1 << i;
//            for (int j = 0; j < m; j++)
//            {
//                int ss = num[req[j]] % cur;
//                if ((num[req[j]] & ((long long)1 << i)))ss = cur;
//                t += (cur - ss);
//                //if (t > k)break;
//            }
//            if (t <= k)
//            {
//                k -= t;
//                ret += cur;
//                for (int j = 0; j < m; j++)
//                {
//                    if (num[req[j]] & cur)continue;
//                    num[req[j]] = cur;
//                }
//            }
//        }
//       
//    }
//    return ret;
//
//}
//
//
//signed main()
//{
//    vector<int> v = { 25,25,23 };
//    cout<<maximumAND(v, 1, 2);
//    //vector<int> v = { 11 };
//    //cout << maximumAND(v, 2, 1);
//    return 0;
//}




//struct vhash
//{
//    size_t operator()(const vector<int>& v) const
//    {
//        std::hash<int> hasher;
//        size_t seed = 0;
//        for (int i : v) 
//        {
//            seed ^= hasher(i) + 0x9e3779b9 + (seed << 6) + (seed >> 2);
//        }
//        return seed;
//    }
//};



//struct vhash
//{
//    size_t operator()(const vector<int>& v) const
//    {
//        hash<int> ha;
//        size_t seed = 0;
//        for (int i = 0; i < v.size(); i++)
//        {
//            int t = v[i];
//            seed ^= ha(i) + 0x9e3ff9b9 + (t << 6) + (t >> 2);
//        }
//        return seed;
//    }
//};
//
//
//
//
//
//long long countPairs(vector<string>& wo)
//{
//    int m = wo[0].size();
//    int n = wo.size();
//    vector<vector<int>> dp(n, vector<int>(m,0));
//    unordered_map<vector<int>, int, vhash> ma;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 1; j < m; j++)
//        {
//            int t = wo[i][j] - wo[i][j - 1];
//            if (t < 0)t += 26;
//            dp[i][j] = dp[i][j - 1] + t;
//            
//        }
//        ma[dp[i]]++;
//
//    }
//    
//    long long ret = 0;
//    auto it = ma.begin();
//    while (it != ma.end())
//    {
//        ret += (it->second) * (it->second - 1) / 2;
//        ++it;
//    }
//    return ret;
//}
//
//
//signed main()
//{
//    vector<string> v = { "fusion","layout" };
//    cout << countPairs(v) << endl;
//    return 0;
//}



//int centeredSubarrays(vector<int>& num)
//{
//    
//    int n = num.size();
//    vector<long long>f(n + 1);
//    int ret = 0;
//    unordered_map<int,int> ha;
//    for (int i = 1; i <= n; i++)
//    {
//        f[i] = f[i - 1] + num[i - 1];
//    }
//    for (int i = 0; i < n; i++)
//    {
//        ha[num[i]]++;
//        for (int j = 0; j <= i; j++)
//        {
//            /* cout << i << " " << j << " " << f[i + 1] - f[j] << endl;
//            cout << ha.count(f[i + 1] - f[j]) << endl;*/
//            if (ha.count(f[i+1] - f[j]))ret++;
//            ha[num[j]]--;
//            if (ha[num[j]] == 0)ha.erase(num[j]);
//        }
//        for (int j = 0; j <= i; j++)
//        {
//            ha[num[j]]++;
//        }
//    }
//    return ret;
//}
//
//
//signed main()
//{
//    vector<int> v = { -1,-1 };
//    cout<<centeredSubarrays(v);
//    return 0;
//}