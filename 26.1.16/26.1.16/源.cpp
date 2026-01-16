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


int arithmeticTriplets(vector<int>& num, int diff)
{
    int ret = 0;
    for (int i = 0; i < num.size() - 2; i++)
    {
        for (int j = i + 1; j < num.size() - 1; j++)
        {
            for (int k = j + 1; k < num.size(); k++)
            {
                if (2 * num[j] == (num[i] + num[k]))ret++;
            }

        }
    }
    return ret;
}

signed main()
{
    vector<int> v = { 4,5,6,7,8,9 };

    return 0;
}










//int numberOfWays(string cor)
//{
//    int ret = 1;
//    const int mod = 1e9 + 7;
//    int fl = 0;
//    int pcur = -1;
//    for (int i = 0; i < cor.size(); i++)
//    {
//        if (cor[i] == 'S')
//        {
//            pcur = i; fl = 1;
//            break;
//        }
//    }
//    int cnt = 0;
//    for (int i = 0; i < cor.size(); i++)
//    {
//        if (cor[i] == 'S')cnt++;
//    }
//    if (cnt % 2 == 1)return 0;
//    if (pcur == -1)return 1;
//    if (fl == 0)return 1;
//    for (int i = pcur+1; i < cor.size(); i++)
//    {
//        if (cor[i] == 'S')
//        {
//            if (fl == 0)
//            {
//                fl = 1;
//                ret = ret * (i - pcur) % mod;
//            }
//            else if (fl == 1)
//            {
//                fl = 0;
//                pcur = i;
//            }
//        }
//    }
//    if (fl == 1)
//    {
//        return 0;
//    }
//    return ret;
//}
//
//
//
//signed main()
//{
//    cout << numberOfWays("P");
//    return 0;
//}
