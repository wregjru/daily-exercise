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



vector<int> f;
int find(int s)
{
    return f[s] == s ? s : f[s] = find(f[s]);
}
void uni(int a, int b)
{
    int fa = find(a); int fb = find(b);
    f[fa] = fb;
}
long long countPairs(int n, vector<vector<int>>& edg)
{
    vector<int> g(n + 1, 0);
    for (int i = 0; i <= n; i++)
    {
        g[i] = i;
    }
    f = g;
    for (int i = 0; i < edg.size(); i++)
    {
        uni(edg[i][0], edg[i][1]);
    }
    vector<int> v;
    unordered_map<int, int> ma;
    for (int i = 0; i < n; i++)
    {
        ma[find(i)]++;
    }
    for (auto& e : ma)
    {
        v.push_back(e.second);
    }
    sort(v.begin(), v.end());
    vector<int> pru(n + 1, 0);
    for (int i = 0; i < v.size(); i++)
    {
        pru[v[i]]++;
    }
    vector<pair<int, int>> r;
    for (int i = 0; i < pru.size(); i++)
    {
        if (pru[i] != 0)
        {
            r.push_back({ i,pru[i] });
        }
    }
    long long ret = 0;
    for (int i = 0; i < r.size(); i++)
    {
        for (int j = i; j < r.size(); j++)
        {
            if (r[i].first == r[j].first)
            {
                ret += r[i].first * r[i].second * r[j].first * (r[j].second-1);
            }
            else 
            ret += r[i].first * r[i].second * r[j].first * r[j].second;
        }
    }
    return ret;
}



signed main()
{
    vector<vector<int>> vv = { {0,1},{2,3},{4,5} };
    cout << countPairs(7, vv);
    return 0;
}







//int minSizeSubarray(vector<int>& num, int tar)
//{
//    int sum = 0;
//    for (int i = 0; i < num.size(); i++)
//    {
//        sum += num[i];
//    }
//    int n = num.size();
//    int t = tar / sum;
//    int ret = n * t;
//    tar %= sum;
//    if (tar == 0)
//    {
//        return num.size();
//    }
//    int l = 0; int r = 0;
//    int rs = 0x3f3f3f3f;
//    int s = 0;
//    for (int i = 0; i < n; i++)
//    {
//        num.push_back(num[i]);
//    }
//    n = num.size();
//    while (r < n)
//    {
//        s += num[r++];
//        while (r<=n&&s >= tar)
//        {
//            if (s == tar)
//            {
//                rs = min(r - l, rs);
//            }
//            s -= num[l];
//            l++;
//        }
//    }
//    if (rs == 0x3f3f3f3f)return -1;
//    return ret + rs;
//}
//
//
//signed main()
//{
//    vector<int> v = { 1,1,1,2,3 };
//    cout<<minSizeSubarray(v, 4);
//    return 0;
//}






//#include<sstream>
//struct TreeNode
//{
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//};
//
//
//TreeNode* makeuptree(const string& input_str)
//{
//    if (input_str.empty()) return nullptr;
//
//    vector<string> values;
//    stringstream ss(input_str);
//    string item;
//
//    while (getline(ss, item, ',')) {
//        values.push_back(item);
//    }
//
//    if (values[0] == "null") return nullptr;
//
//    TreeNode* root = new TreeNode(stoi(values[0]));
//    queue<TreeNode*> q;
//    q.push(root);
//
//    int i = 1;
//    while (!q.empty() && i < values.size()) {
//        TreeNode* node = q.front();
//        q.pop();
//
//        if (i < values.size() && values[i] != "null") {
//            node->left = new TreeNode(stoi(values[i]));
//            q.push(node->left);
//        }
//        i++;
//
//        if (i < values.size() && values[i] != "null") {
//            node->right = new TreeNode(stoi(values[i]));
//            q.push(node->right);
//        }
//        i++;
//    }
//
//    return root;
//}
//
//
//unordered_set<TreeNode*>se;
//unordered_map<TreeNode*, int> ma;
//struct node
//{
//    int m; int M;
//    bool f;
//    node(int mi, int ma, int fff)
//    {
//        m = mi; M = ma; f = fff;
//    }
//};
//node check(TreeNode* root)
//{
//    if (root == nullptr)return { 0x3f3f3f3f,-0x3f3f3f3f,1 };
//    auto fl = check(root->left);
//    auto fr = check(root->right);
//    if (fl.f && fr.f&&root->val>fl.M&&root->val<fr.m)
//    {
//        
//        se.insert(root);
//        int m = min(fl.m, root->val);
//        int M = max(fr.M, root->val);
//        return { m,M,1 };
//    }
//    return { -1,-1,0 };
//
//    
//
//}
//int dfs(TreeNode* root)
//{
//    if (root == nullptr)return 0;
//    int t = dfs(root->left) + dfs(root->right) + root->val;
//    ma[root] = t;
//    return t;
//}
//int maxSumBST(TreeNode* root)
//{
//    check(root);
//    dfs(root);
//    int ret = 0;
//    for (auto& e : se)
//    {
//        ret = max(ret, ma[e]);
//    }
//    return ret;
//}
//
//
//
//
//signed main()
//{
//    TreeNode*  root=makeuptree("1,null,10,-5,20");
//    cout<<maxSumBST(root);
//   
//    return 0;
//}