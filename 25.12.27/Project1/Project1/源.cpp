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



void solve(vector<vector<char>>& bo)
{
    int dx[4] = { 0,0,1,-1 };
    int dy[4] = { 1,-1,0,0 };
    int m = bo.size();
    int n = bo[0].size();
    queue<pair<int, int>> qu;
    vector<vector<bool>> vv(m, vector<bool>(n, 0));
    for (int i = 0; i < m; i++)
    {
        if (bo[i][0] == 'O')qu.push({ i,0 });
        if (bo[i][n - 1] == 'O')qu.push({ i,n - 1 });
    }
    for (int j = 0; j < n; j++)
    {
        if (bo[0][j] == 'O')qu.push({ 0,j });
        if (bo[m - 1][j] == 'O')qu.push({ m - 1,j });
    }
    while (qu.size())
    {
        auto s = qu.front(); qu.pop();
        int x = s.first; int y = s.second;
        if (vv[x][y])continue;
        vv[x][y] = 1;
        bo[x][y] = 'D';
        for (int i = 0; i < 4; i++)
        {
            int a = x + dx[i];
            int b = y + dy[i];
            if (a < 0 || a >= n || b < 0 || b >= m)continue;
            if (bo[a][b] != 'O')continue;
            if (vv[a][b])continue;
            qu.push({ a,b });
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (bo[i][j] == 'O')bo[i][j] = 'X';
            else if (bo[i][j] == 'D')bo[i][j] = 'X';
        }
    }
    int sss = 0;
}



signed main()
{
    vector<vector<char>>bo(4);
    bo[0]={ 'X','X','X','X' };
    bo[1] = { 'X','O','O','X' };
    bo[2] = { 'X','X','O','X' };
    bo[3] = { 'X','O','X','X' };
    solve(bo);
    return 0;
}