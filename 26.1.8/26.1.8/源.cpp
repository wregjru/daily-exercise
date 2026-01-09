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


int dfs(int s, vector<vector<int>>& tu, vector<int>& dp)
{
    dp[s] = 1;
    for (int i = 0; i < tu[s].size(); i++)
    {
        dp[s] += dfs(tu[s][i], tu, dp);
    }
    return dp[s];

}
int countHighestScoreNodes(vector<int>& par)
{
    int n = par.size();
    int ret = n - 1;
    vector<vector<int>> tu(n);
    vector<int> dp(n);

    for (int i = 0; i < n; i++)
    {
        if (par[i] == -1)continue;
        tu[par[i]].push_back(i);
    }
    dfs(0, tu, dp);
    vector<vector<int>> tu2(n);
    for (int i = 0; i < n; i++)
    {
        if (par[i] != -1)tu2[par[i]].push_back(i);
        tu2[i].push_back(par[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int all = 1;
        for (int j = 0; j < tu2[i].size(); i++)
        {
            all *= abs(dp[i] - dp[tu2[i][j]]);
        }
        ret = max(ret, all);
    }
    return ret;
}

signed main()
{
    vector<int> v = { -1,2,0,2,0 };
    countHighestScoreNodes(v);
    return 0;
}