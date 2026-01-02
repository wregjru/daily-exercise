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



vector<pair<int, int>> v(10010);
vector<int> ret(10010);

int get2(int s)
{
    int ret = 0;
    while (s % 2 == 0)
    {
        ret++;
              s /= 2;
    }
    return ret;
}
int get5(int s)
{
    int ret = 0;
    while (s % 5 == 0)
    {
        ret++;
        s /= 5;
    }
    return ret;
}
void get()
{
    for (int i = 1; i <= 10000; i++)
    {
        v[i].first = get2(i) + v[i - 1].first;
        v[i].second += get5(i)+ v[i-1].second;
        ret[i] = min(v[i].first, v[i].second);
    }
}
signed main()
{
    get();
    for (int i = 0; i <= 10000; i++)
    {
        cout << ret[i] << ",";
    }
    return 0;
}



//string tow(int s)
//{
//    string r;
//    for (int i = 31; i >= 0; i--)
//    {
//        if (s & (1 << i))r += '1';
//        else r += '0';
//    }
//    return r;
//}
//int nums(string s)
//{
//    long long p = 1;
//    int ret = 0;
//    for (int i = 31; i >= 0; i--)
//    {
//        if (s[i] == '1')
//        {
//            ret += p;
//            p *= 2;
//        }
//        else
//        {
//            p *= 2;
//        }
//    }
//    return ret;
//}
//int rangeBitwiseAnd(int left, int right)
//{
//    string ret;
//    string a = tow(left);
//    string b = tow(right);
//    int fl = 1;
//    for (int i = 0; i < 32; i++)
//    {
//        if (a[i] == '0' && b[i] == '0')
//        {
//            ret += '0';
//        }
//        else if (a[i] == '1' && b[i] == '0')
//        {
//            fl = 0;
//            ret += '0';
//        }
//        else if (a[i] == '0' && b[i] == '1')
//        {
//            fl = 0;
//            ret += '0';
//        }
//        else if (a[i] == '1' && b[i] == '1' && fl == 1)
//        {
//            ret += '1';
//        }
//        else
//        {
//            ret += '0';
//        }
//    }
//    return  nums(ret);
//}
//
//
//signed main()
//{
//    cout<<rangeBitwiseAnd(5, 7);
//    return 0;
//}