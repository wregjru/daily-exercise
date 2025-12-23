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


string simplifyPath(string path)
{
    vector<string> v;
    //v.push_back("/");
    int l = 1;
    auto r = path.find('/',1);
    while (r != string::npos)
    {
        v.push_back(path.substr(l, r - l));
        while (r < path.size() && path[r] == '/')r++;
        l = r;
        r = path.find( '/',r);
    }
    v.push_back(path.substr(l));
    string ret;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "")continue;
        if (v[i] == "..")
        {
            int pos = ret.size()-1;
            while (pos>=0&&ret[pos] != '/')
            {
                pos--;
                ret.pop_back();
            }
            if(ret.size())ret.pop_back();
            continue;
        }
        if(v[i]==".")continue;
        ret += "/";
        ret += v[i];
    }
    if (ret == "")return " ";
    return ret;
}


int main()
{
    string path = "/../";
    simplifyPath(path);
    return 0;
}






//static bool cmp(vector<int>& a, vector<int>& b)
//{
//    if (a[0] != b[0])
//        return a[0] < b[0];
//    else return a[1] > b[1];
//}
//
//int findMinArrowShots(vector<vector<int>>& p)
//{
//    sort(p.begin(), p.end(), cmp);
//    int ret = 0;
//    int l = 0;
//    while (l < p.size())
//    {
//        int po = p[l][1];
//        int p2 = l + 1;
//        while (p2 < p.size() && p[p2][0] <= po)
//        {
//
//            po = min(po, p[p2][1]);
//            p2++;
//        }
//        ret++;
//        l = p2;
//    }
//    return ret;
//}
//
//
//
//int main()
//{
//    //vector<vector<int>> vv = { {1,2},{3,5},{6,7},{8,10},{12,16} };
//    //vector<int> v = { 4,8 };
//    /*vector<vector<int>> vv = { {10,16}, {2,8},{1,6},{7,12} };*/
//    vector<vector<int>> vv = { {1,2}, {2,3},{3,4},{4,5} };
//    findMinArrowShots(vv);
//    return 0;
//}






//vector<vector<int>> insert(vector<vector<int>>& val, vector<int>& news)
//{
//    if (val.size() == 0)
//    {
//        vector<vector<int>> r = { {news[0],news[1]} };
//        return r;
//    }
//    int l = news[0];
//    int fl = -1;
//    int r = news[1];
//    int fr = -1;
//    for (int i = 0; i < val.size(); i++)
//    {
//        if (fl == -1 && l <= val[i][1])
//        {
//            fl = i;
//            break;
//        }
//
//    }
//    for (int i = val.size() - 1; i >= 0; i--)
//    {
//        if (fr == -1 && r >= val[i][0])
//        {
//            fr = i;
//            break;
//        }
//    }
//    vector<vector<int>> ret;
//    if (fl == -1 || fr == -1)
//    {
//        if (fl == -1)
//        {
//            for (int i = 0; i < val.size(); i++)
//            {
//                ret.push_back(val[i]);
//            }
//            ret.push_back({ l,r });
//        }
//        else
//        {
//            ret.push_back({ l,r });
//            for (int i = 0; i < val.size(); i++)
//            {
//                ret.push_back(val[i]);
//            }
//        }
//        return ret;
//    }
//    for (int i = 0; i < fl; i++)
//    {
//        ret.push_back(val[i]);
//    }
//    if (l < val[fl][0])
//    {
//        ret.push_back({ l,0 });
//    }
//    else
//    {
//        ret.push_back({ val[fl][0],0 });
//    }
//    if (r > val[fr][1])
//    {
//        ret[fl][1] = r;
//    }
//    else
//    {
//        ret[fl][1] = val[fr][1];
//    }
//    for (int i = fr + 1; i < val.size(); i++)
//    {
//        ret.push_back(val[i]);
//    }
//    return ret;
//}

//int main()
//{
//    //vector<vector<int>> vv = { {1,2},{3,5},{6,7},{8,10},{12,16} };
//    //vector<int> v = { 4,8 };
//    vector<vector<int>> vv = { {1,5}};
//    vector<int> v = { 6,8 };
//    insert(vv, v);
//	return 0;
//}