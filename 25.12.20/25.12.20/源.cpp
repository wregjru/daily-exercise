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



long long maximumScore(vector<int>& num, string s)
{
    int n = num.size();
    priority_queue<int> heap;
    int i = 0;
    int ret = 0;
    while (i < n)
    {
        while (i < n && s[i] != '1')
        {
            heap.push(num[i]);
            i++;
        }
        if (i < n && s[i] == '1')
        {
            heap.push(num[i]);
            ret += heap.top();
            heap.pop();
            i++;
        }
    }
    return ret;
    // int l=0;
    // int r=s.find('1');
    // int ma=0;
    // int pma=0;
    // while(r!=string::npos)
    // {
    //     for(int i=l;i<=r;i++)
    //     {
    //         if()
    //     }
    // }
    // int n=s.size();
    // int cnt=0;
    // for(int i=0;i<n;i++)
    //     {
    //         if(s[i]=='1')cnt++;
    //     }
    // sort(num.begin(),num.end());
    // int ret=0;
    // for(int i=n-1;i>=n-1-cnt+1;i--)
    //     {
    //         ret+=num[i];
    //     }
    // return ret;
}


int main()
{
    vector<int> v = { 2,1,5,2,3 };
    string s = "01010";
    maximumScore(v, s);
    return 0;
}





//int maximumSum(vector<int>& num)
//{
//    sort(num.begin(), num.end());
//    int n = num.size();
//    // int tmp[4]={0};
//    // for(int i=0;i<n;i++)
//    // {
//    //     num[i]=num[i]%3-1;
//    //     tmp[num[i]]++;
//    // }
//    vector<int> tu[4];
//    for (int i = 0; i <n; i++)
//    {
//        tu[num[i] % 3].push_back(num[i]);
//    }
//    int flag = 0;
//    int ret = 0;
//    if (tu[0].size() >= 3)
//    {
//        int p = tu[0].size() - 1;
//        ret = max(ret, tu[0][p - 2] + tu[0][p - 1] + tu[0][p]);
//        flag = 1;
//    }
//    if (tu[1].size() >= 3)
//    {
//        int p = tu[1].size() - 1;
//        ret = max(ret, tu[1][p - 2] + tu[1][p - 1] + tu[1][p]);
//        flag = 1;
//    }
//    if (tu[2].size() >= 3)
//    {
//        int p = tu[2].size() - 1;
//        ret = max(ret, tu[2][p - 2] + tu[2][p - 1] + tu[2][p]);
//        flag = 1;
//    }
//    if (tu[2].size() && tu[1].size() && tu[0].size())
//    {
//        ret = max(ret, tu[0][tu[0].size() - 1] + tu[1][tu[1].size() - 1] + tu[2][tu[2].size() - 1]);
//        flag = 1;
//    }
//    if (flag == 0)
//    {
//        return 0;
//    }
//    else
//    {
//        return ret;
//    }
//
//}
//int main()
//{
//    vector<int> v = { 4,3,2,1 };
//    maximumSum(v);
//    return 0;
//}




//long long maximumScore(vector<int>& num, string s)
//{
//    int n = s.size();
//    int cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (s[i] == '1')cnt++;
//    }
//    sort(num.begin(), num.end());
//    int ret = 0;
//    for (int i = n - 1; i >= n - 1 - cnt + 1; i--)
//    {
//        ret += num[i];
//    }
//    return ret;
//}
//int main()
//{
//    vector<int> v = { 2,1,5,2,3 };
//    string s = "01010";
//    maximumScore(v, s);
//    return 0;
//}



//int minOperations(vector<int>& nums)
//{
//    int n = nums.size();
//    unordered_map<int, int>ma;
//    int i = n - 1;
//    while(i>=0)
//    {
//        if (ma[nums[i]] == 0)
//        {
//            ma[nums[i]] = 1;
//            i--;
//        }
//        else
//        {
//            break;
//        }
//    }
//    i = i + 1;
//    if (i % 3 == 0)
//    {
//        return i / 3;
//    }
//    else
//    {
//        return i / 3 + 1;
//    }
//}
//signed main()
//{
//	vector<int>v = { 3,3,5,1,2};
//    cout<<minOperations(v);
//	return 0;
//}