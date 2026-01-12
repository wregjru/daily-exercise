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


bool checkString(string s)
{
    int l = 0; int r = s.size() - 1;
    while (l < s.size() && s[l] == 'a')l++;
    while (r && s[r] == 'b')r--;
    return (l == r + 1);
}
signed main()
{
    checkString("bbb");
    return 0;
}