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


//class Node {
//public:
//    int val;
//    vector<Node*> neighbors;
//    Node() {
//        val = 0;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val) {
//        val = _val;
//        neighbors = vector<Node*>();
//    }
//    Node(int _val, vector<Node*> _neighbors) {
//        val = _val;
//        neighbors = _neighbors;
//    }
//};


//vector<double> calcEquation(vector<vector<string>>& equ, vector<double>& val, vector<vector<string>>& que)
//{
//    int pos = 0;
//    unordered_map<string, int> ma;
//    for (int i = 0; i < equ.size(); i++)
//    {
//        if (!ma.count(equ[i][0]))
//        {
//            ma[equ[i][0]] = (pos++);
//        }
//        if (!ma.count(equ[i][1]))
//        {
//            ma[equ[i][1]] = (pos++);
//        }
//    }
//    vector<vector<pair<int, double>>> vv(pos + 5);
//    for (int i = 0; i < equ.size(); i++)
//    {
//        vv[ma[equ[i][0]]].push_back({ ma[equ[i][1]],val[i] });
//        vv[ma[equ[i][1]]].push_back({ ma[equ[i][0]],1 / val[i] });
//    }
//    vector<double>ret;
//    for (int i = 0; i < que.size(); i++)
//    {
//        string a = que[i][0];
//        string b = que[i][1];
//        if ((!ma.count(a)) || (!ma.count(b)))
//        {
//            ret.push_back(0);
//            continue;
//        }
//        vector<int> gone(pos + 5, 0);
//        queue<pair<int, double>> qu;
//        qu.push({ ma[a],1 });
//        int fl = 0;
//        while (!qu.empty())
//        {
//            auto s = qu.front(); qu.pop();
//            int i = s.first; double j = s.second;
//            gone[i] = 1;
//            for (int k = 0; k < vv[i].size(); k++)
//            {
//                if (gone[vv[i][k].first])continue;
//                if (vv[i][k].first == ma[b])
//                {
//                    ret.push_back(vv[i][k].second * j);
//                    fl = 1;
//                    break;
//                }
//                qu.push({ vv[i][k].first,vv[i][k].second * j });
//            }
//            if (fl == 1)break;
//        }
//    }
//    return ret;
//    
//}
int get(int n, int row, int col)
{
    int row_from_bottom = n - 1 - row;
    if (row_from_bottom % 2 == 0)
    {
        return row_from_bottom * n + col + 1;
    }
    else
    {
        return row_from_bottom * n + (n - col);
    }
}

int snakesAndLadders(vector<vector<int>>& bo)
{
    int n = bo.size();
    vector<int> gone(n * n + 7, 0);
    unordered_map<int, int> ma;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (bo[i][j] != -1)
            {
                int pos = get(n, i, j);  // 计算格子编号
                ma[pos] = bo[i][j];  // 单向映射
            }
        }
    }
    queue<pair<int, int>> qu;
    qu.push({ 1,0 });
    while (!qu.empty())
    {
        auto s = qu.front(); qu.pop();
        int x = s.first; int y = s.second;
        //gone[x] = 1;
        for (int i = 6; i >= 1; i--)
        {
            int a = x + i;
            if (ma.count(a))
            {
                a = ma[a];
            }
            if (gone[a])continue;
            gone[a] = 1;
            if (a >= n * n)return y + 1;
            qu.push({ a,y + 1 });
        }
    }
    return -1;


}


signed main()
{
   /* Node* n = new Node;
    n->neighbors.push_back(n);
    queue<int> qu;*/
    /*vector<vector<string>> equ = { {"a","b"},{"b","c"},{"bc","cd"} };
    vector<double> val = { 1.5,2.5,5.0 };
    vector<vector<string>> que = { {"a","c"},{"c","b"},{"bc","cd"},{"cd","bc"} };
    calcEquation(equ, val, que);*/
    //vector<vector<int>>bo = { {-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,-1,-1,-1,-1,-1},{-1,35,-1,-1,13,-1},{-1,-1,-1,-1,-1,-1},{-1,15,-1,-1,-1,-1} };
    vector<vector<int>>bo(20, vector<int>(20, -1));
    cout<<snakesAndLadders(bo);
    return 0;
}