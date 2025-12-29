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




vector<int> num;
int tar;
vector<int> path;
int sum = 0;
vector<vector<int>> ret;
void dfs(int p)
{
    if (p < 0)return;
    if (p == 0)ret.push_back(path);
    while (p >= 0)
    {
        dfs(p-num[])
    }
}
vector<vector<int>> combinationSum(vector<int>& can, int targ)
{
    num = can;
    tar = targ;
    dfs(targ);
    return ret;
}


signed main()
{
    vector<int> v = { 2,3,6,7 };
    combinationSum(v, 7);
    return 0;
}






//unordered_map<int, int> has;
//vector<vector<int>> ret;
//int pos = 0;
//vector<int> pat;
//vector<int> num;
//void dfs()
//{
//    if (pos == num.size() - 1)
//    {
//        for (int i = 0; i < num.size(); i++)
//        {
//            if (!has.count(num[i]))
//            {
//                pat.push_back(num[i]);
//                break;
//            }
//        }
//        ret.push_back(pat);
//        return;
//    }
//    for (int i = 0; i < num.size(); i++)
//    {
//        if (!has.count(num[i]))
//        {
//            has[num[i]] = 1;
//            pos++;
//            pat.push_back(num[i]);
//            dfs();
//            pos--;
//            pat.pop_back();
//            has.erase(num[i]);
//            dfs();
//        }
//    }
//}
//vector<vector<int>> permute(vector<int>& nums)
//{
//    num = nums;
//    dfs();
//    return ret;
//}
//
//signed main()
//{
//    vector<int> v = { 1,2,3 };
//    permute(v);
//    return 0;
//
//}






//unordered_map<char, string> ma;
//string need;
//int n;
//vector<string> ret;
//void dfs(int p)
//{
//    if (p == n+1)return;
//    int q = ma[need[p - 1]].size();
//    int z = ret.size();
//    for (int i = 1; i < q; i++)
//    {
//        for (int j = 0; j < z; j++)
//        {
//            ret.push_back(ret[j]);
//        }
//    }
//    for (int gap = 0; gap < q; gap++)
//    {
//        for (int j = 0; j < z; j++)
//        {
//            ret[gap * z + j] += ma[need[p - 1]][gap];
//        }
//    }
//    dfs(p + 1);
//}
//vector<string> letterCombinations(string dig)
//{
//    ma['2'] = "abc";
//    ma['3'] = "def";
//    ma['4'] = "ghi";
//    ma['5'] = "jkl";
//    ma['6'] = "mno";
//    ma['7'] = "pqrs";
//    ma['8'] = "tuv";
//    ma['9'] = "wxyz";
//    need = dig;
//    n = dig.size();
//    string y = ma[dig[0]];
//    for (int i = 0; i < y.size(); i++)
//    {
//        string st(1, y[i]);
//        ret.push_back(st);
//    }
//    dfs(2);
//    return ret;
//}
//
//
//signed main()
//{
//    string dig = "23";
//    letterCombinations(dig);
//    return 0;
//}