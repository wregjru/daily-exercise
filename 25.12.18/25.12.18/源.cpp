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


int main()
{
	vector<vector<int>> v(10000,vector<int>(3, 0));
	unordered_map<int, int> ma;
	return 0;
}






//int maxProfit(vector<int>& pri)
//{
//    int n = pri.size();
//    pri.push_back(0);
//    int l = 0; int r = 0;
//    int flag = 0;//0:没确定，1：确定l，2：确定r
//    int ret = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        if (flag == 0)
//        {
//            if (pri[i] > pri[i - 1])
//            {
//                l = i - 1;
//                flag = 1;
//            }
//            else
//            {
//                l = i;
//            }
//        }
//        else if (flag == 1)
//        {
//            if (pri[i] < pri[i - 1])
//            {
//                flag = 2;
//                r = i - 1;
//            }
//            else
//            {
//                r = i;
//            }
//        }
//        if (flag == 2)
//        {
//            ret += pri[r] - pri[l];
//            flag = 0;
//        }
//    }
//    return ret;
//
//}
//
//int main()
//{
//    vector<int> v = { 7,1,5,3,6,4 };
//    maxProfit(v);
//    return 0;
//}