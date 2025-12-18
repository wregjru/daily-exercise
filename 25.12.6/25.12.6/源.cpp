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



vector<int> getConcatenation(vector<int>& nums)
{
    vector<int>ret;
    ret.reserve(2 * nums.size() + 10);
    int n = nums.size();
    for (int i = 0; i < 2 * n; i++)
    {
        ret.push_back(0);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        ret[i] = ret[i + n] = nums[i];
    }
    return ret;
}


int main()
{
    vector<int> v = { 1,4,2,1 };
    getConcatenation(v);
    return 0;
}





//bool isPalindrome(int x)
//{
//    string a = to_string(x);
//    string b = a;
//    reverse(b.begin(), b.begin());
//    return a == b;
//}
//
//
//int main()
//{
//    isPalindrome(10);
//	return 0;
//}



//int myatoi(string s)
//{
//    int fl = 1;
//    int l = 0;
//    int r = 0;
//    while (s[l] == ' ' || !(s[l]>='0'&&s[l]<='9'||s[l]=='+'||s[l]=='-'))l++;
//    if (s[l] == '-' || s[l] == '+')r = l + 1;
//    else r = l;
//    while (s[r] >= '0' && s[r] <= '9')r++;
//    s=s.substr(l, r-l+1);
//    l = 0;
//    if (s[l] == '-')
//    {
//        fl = -1;
//        s = s.substr(1);
//    }
//    else if (s[l] == '+')
//    {
//        s = s.substr(1);
//    }
//    l = 0;
//    while (s[l] == '0')l++;
//    s = s.substr(l);
//    if (s.size() > 10)
//    {
//        s = s.substr(s.size() - 10);
//    }
//    if (s.size()==10&&s > "2147483647")
//    {
//        s = s.substr(1);
//    }
//    int ret = 0;
//    for (int i = 0; i < s.size(); i++)
//    {
//        ret = ret * 10 + (s[i] - '0');
//    }
//    return fl * ret;
//}
//
//
//
//int main()
//{
//    cout<<myatoi("words and 987");
//	return 0;
//}