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



int reverseBits(int n)
{
    long long ret = 0;
    long long p = 1;
    for (int i = 0; i < 32; i++)
    {
        ret <<= 1;
        if (n & 1)
        {
            ret += 1;
        }
        n >>= 1;
    }
    return ret;

}





signed main()
{
    cout<<reverseBits(2147483644);
    return 0;
}







//int check(int s, vector<int>& num, int k)
//{
//    return num[(s + k)%num.size()];
//}
//int search(vector<int>& nums, int tar)
//{
//    int k = 0;
//    if (nums[0] < nums[nums.size() - 1])
//    {
//        k = 0;
//    }
//    else
//    {
//        int l1 = 0; int r1 = nums.size() - 1;
//        while (l1 < r1)
//        {
//            int m = (l1 + r1) / 2;
//            if (nums[m] < nums[0])r1 = m;
//            else l1 = m + 1;
//        }
//        k = l1;
//    }
//    int l = 0; int r = nums.size() - 1;
//    while (l < r)
//    {
//        int m = (l + r + 1) / 2;
//        if (check(m, nums, k) <= tar)l = m;
//        else r = m - 1;
//    }
//    if (check(l, nums, k) == tar)
//    {
//        return l + k;
//    }
//    else
//    {
//        return -1;
//    }
//}
//
//signed main()
//{
//    vector<int> v = { 4,5,6,7,0,1,2 };
//    cout << search(v, 0);
//    return 0;
//}

//int maxSubarraySumCircular(vector<int>& nums)
//{
//    int n = nums.size();
//    vector<int> f(n);
//    vector<int> g(n);
//    int d1 = -0x3f3f3f3f;
//    for (int i = 0; i < n; i++)
//    {
//        d1 = max(nums[i], d1 + nums[i]);
//        f[i] = d1;
//    }
//    d1 = -0x3f3f3f3f;
//    for (int i = n - 1; i >= 0; i--)
//    {
//        d1 = max(nums[i], d1 + nums[i]);
//        g[i] = d1;
//    }
//    int ret = -0x3f3f3f3f;
//    for (int i = 0; i < n; i++)
//    {
//        ret = max(ret, f[i] + g[(i + 1) % n]);
//    }
//    //ret=max(ret,)
//    return ret;
//
//}


//signed main()
//{
//    vector<int> v = { -3,-2,-3 };
//    cout<<maxSubarraySumCircular(v);
//    return 0;
//}