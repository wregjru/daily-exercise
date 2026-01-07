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


int minSwaps(string s)
{
    
    //010
    int cnt1 = 0; int cnt2 = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')cnt1++;
        else cnt2++;
    }
    if (s.size() % 2 == 0)
    {
        if (cnt1 != cnt2)
        {
            return -1;
        }
        else
        {
            if (abs(cnt1 - cnt2) > 2)return -1;
        }
    }
    if (s.size() % 2 == 0)
    {
        //1010
        int fl1 = 1;
        int c1 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0' != fl1)c1++;
            fl1 = 1 - fl1;
        }
        c1 /= 2;
        int fl2 = 0;
        int c2 = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] - '0' != fl2)c2++;
            fl2 = 1 - fl2;
        }
        c2 /= 2;
        return min(c1, c2);
    }
    else
    {
        if (cnt1 > cnt2)
        {
            int cc = 0;
            //101
            int fl1 = 1;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] - '0' != fl1)cc++;
                fl1 = 1 - fl1;
            }
            return cc / 2;
        }
        else
        {
            int cc = 0;
            //101
            int fl1 = 0;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] - '0' != fl1)cc++;
                fl1 = 1 - fl1;
            }
            return cc / 2;
        }
    }
    return -1;
}

signed main()
{
    cout<<minSwaps("100");
    return 0;
}



//int maxIncreasingSubarrays(vector<int>& num)
//{
//    int n = num.size();
//    num.push_back(0x3f3f3f3f);
//    vector<int> cnt;
//    int l = 0; int r = 0;
//    while (r < n)
//    {
//        while (r < n && (r == l || (r != l && num[r] > num[r - 1])))
//        {
//            r++;
//        }
//        cnt.push_back(r - l);
//        l = r;
//    }
//    int ret = 0;
//    for (int i = 0; i < cnt.size(); i++)
//    {
//        ret = max(ret, cnt[i] / 2);
//        if (i != cnt.size() - 1)
//        {
//            ret = max(ret, min(cnt[i], cnt[i + 1]));
//        }
//    }
//    return ret;
//    
//}
//
//signed main()
//{
//    vector<int> v = { 2, 5, 7, 8, 9, 2, 3, 4, 1, 3 };
//    cout<<maxIncreasingSubarrays(v);
//    return 0;
//}





//long long validSubstringCount(string w1, string w2)
//{
//    int m = w1.size(); int n = w2.size();
//    int req[26] = { 0 };
//    for (int i = 0; i < n; i++)
//    {
//        req[w2[i] - 'a']++;
//    }
//    int l = 0; int r = 0;
//    int tmp[26] = { 0 };
//    int miss = n;
//    long long ret = 0;
//    while (r < m)
//    {
//        tmp[w1[r] - 'a']++;
//        if (tmp[w1[r] - 'a'] <= req[w1[r] - 'a'])
//        {
//            miss--;
//        }
//        r++;
//        while (miss == 0)
//        {
//            tmp[w1[l] - 'a']--;
//            if (tmp[w1[l] - 'a']<req[w1[l]-'a'])
//            {
//                miss++;
//            }
//            l++;
//        }
//        ret += l;
//
//    }
//    return ret;
//}






//long long validSubstringCount(string w1, string w2)
//{
//    int req[26] = { 0 };
//    for (int i = 0; i < w2.size(); i++)
//    {
//        req[w2[i] - 'a']++;
//    }
//    int n = w1.size();
//    int www[26] = { 0 };
//    for (int i = 0; i < w1.size(); i++)
//    {
//        www[w1[i] - 'a']++;
//    }
//    int fff = 1;
//    for (int i = 0; i < 26; i++)
//    {
//        if (www[i] < req[i])
//        {
//            fff = 0;
//            break;
//        }
//    }
//    if (fff == 0)return 0;
//    // vector<vector<int>> dp(26,vector<n,0>);
//    // for(int j=0;j<n;j++)
//    // {
//    //     // if(i!=0)
//    //     // {
//    //     //     for(int j=0;j<26;j++)
//    //     //     {
//    //     //         dp[j][i]=dp[j][i-1];
//    //     //     }
//    //     // }
//    //     // dp[w1[i]-'a'][i]++;
//    //     for(int i=0;i<26;i++)
//    //     {
//    //         dp[i][j]
//    //     }
//
//    // }
//    int l = 0; int r = 0;
//    vector<int> tmp(26, 0);
//    int ret = (w1.size() - w2.size() + 2) * (w1.size() - w2.size() + 1) / 2;
//    if (ret <= 0)return 0;
//    while (r < n)
//    {
//        // for(int i=0;i<26;i++)
//        // {
//        //     tmp[i]+=dp[r][i];
//        // }
//        tmp[w1[r] - 'a']++;
//        r++;
//        int fl = 1;
//        for (int i = 0; i < 26; i++)
//        {
//            if (tmp[i] < req[i])
//            {
//                fl = 0;
//                break;
//            }
//        }
//        if (fl == 1)
//        {
//            ret -= (r - l - w2.size() + 1) * (r - l - w2.size()) / 2;
//            tmp[w1[l] - 'a']--;
//            l++;
//            int ffl = 1;
//            for (int i = 0; i < 26; i++)
//            {
//                if (tmp[i] < req[i])
//                {
//                    ffl = 0; break;
//                }
//            }
//            while (l <= r && ffl == 1)//µÍÓÚ
//            {
//                tmp[w1[l] - 'a']--;
//                l++;
//                ffl = 1;
//                for (int i = 0; i < 26; i++)
//                {
//                    if (tmp[i] < req[i])
//                    {
//                        ffl = 0; break;
//                    }
//                }
//            }
//        }
//
//    }
//    return ret;
//}


//signed main()
//{
//    cout<<validSubstringCount("bcca", "abc");
//    return 0;
//}


//int brokenCalc(int st, int tar)
//{
//    //int p = 0;
//    //if (st >= tar)
//    //{
//    //    return st - tar;
//    //}
//    //while (!(st <= tar && 2 * st >= tar))
//    //{
//    //    st *= 2;
//    //    p++;
//    //}
//    //p +=  2 * st - tar + 1;
//    //return p;
//
//    
//    unordered_map<long long, long long> gone;
//    unordered_map<long long, long long> pre;
//    queue<long long> qu;
//    if (tar <= st)
//    {
//        return st - tar;
//    }
//    swap(st, tar);
//    qu.push(st);
//    while (!qu.empty())
//    {
//        long long s = qu.front(); qu.pop();
//        long long a = s / 2; long long b = s + 1;
//        if (s%2==0&&(!gone.count(a)))
//        {
//            gone[a] = 1;
//            qu.push(a);
//            pre[a] = pre[s] + 1;
//        }
//        if (!gone.count(b))
//        {
//            gone[b] = 1;
//            qu.push(b);
//            pre[b] = pre[s] + 1;
//        }
//        if (a == tar || b == tar)
//        {
//            return pre[s] + 1;
//        }
//    }
//    return -1;
//}
//
//
//signed main()
//{
//    cout << brokenCalc(3, 10);
//    return 0;
//}