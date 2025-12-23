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






int longestConsecutive(vector<int>& num)
{
    unordered_map<int, int> ma;
    for (int i = 0; i < num.size(); i++)
    {
        ma[num[i]]++;
    }
    vector<int> v;
    for (auto& e : ma)
    {
        int i = e.second; int j = e.first;
        for (int k = 0; k < i; k++)
            v.push_back(j);
    }
    int sss = 0;
    return sss;
}


signed main()
{
    vector<int> v = { 100,4,200,1,3,2 };
    longestConsecutive(v);
    return 0;
}






//vector<vector<string>> groupAnagrams(vector<string>& strs)
//{
//    vector<string>s = strs;
//    int n = strs.size();
//    unordered_map<string, int> ma;
//    int pos = 0;
//    vector<vector<string>> vv;
//    vector<string> v;
//    for (int i = 0; i < n; i++)
//    {
//        sort(s[i].begin(), s[i].end());
//        if (ma[s[i]] == 0)
//        {
//            ma[s[i]] = (++pos);
//            vv.push_back(v);
//            vv[pos - 1].push_back(strs[i]);
//        }
//        else
//        {
//            vv[ma[s[i]] - 1].push_back(strs[i]);
//        }
//    }
//    return vv;
//
//}
//
//
//signed main()
//{
//    vector<string> v = { "eat", "tea", "tan", "ate", "nat", "bat" };
//    groupAnagrams(v);
//    return 0;
//}






