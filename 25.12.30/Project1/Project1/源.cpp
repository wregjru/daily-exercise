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




class Node {
public:
    bool val;
    bool isLeaf;
    Node* topLeft;
    Node* topRight;
    Node* bottomLeft;
    Node* bottomRight;

    Node() {
        val = false;
        isLeaf = false;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = NULL;
        topRight = NULL;
        bottomLeft = NULL;
        bottomRight = NULL;
    }

    Node(bool _val, bool _isLeaf, Node* _topLeft, Node* _topRight, Node* _bottomLeft, Node* _bottomRight) {
        val = _val;
        isLeaf = _isLeaf;
        topLeft = _topLeft;
        topRight = _topRight;
        bottomLeft = _bottomLeft;
        bottomRight = _bottomRight;
    }
};

Node* root;
vector<vector<int>> tu;
vector<vector<int>> dp;
void merge(int a1, int b1, int a2, int b2, Node*& root)
{
    int p = tu[a1][b1];
    int fl = 1;
    if (a2 < a1 || b2 < b1)return;
    if (a1 == a2)
    {
        root = new Node(tu[a1][b1], 1);
        return;
    }
    for (int i = a1; i <= a2; i++)
    {
        for (int j = b1; j <= b2; j++)
        {
            if (tu[i][j] != tu[a1][b1])
            {
                fl = 0;
                break;
            }
        }
        if (fl == 0)break;
    }
    if (fl == 1)
    {
        root = new Node(tu[a1][b1], 1);
    }
    else
    {
        root = new Node(1, 0);
        merge(a1, b1, (a1 + a2) / 2, (b1 + b2) / 2, root->topLeft);
        merge(a1, (b1 + b2) / 2+1, (a1 + a2) / 2, b2, root->topRight);
        merge((a1 + a2) / 2+1, b1, a2, (b1 + b2) / 2, root->bottomLeft);
        merge((a1 + a2) / 2+1, (b1 + b2) / 2+1, a2, b2, root->bottomRight);
    }
}
Node* construct(vector<vector<int>>& grid)
{
    tu = grid;
    int n = grid.size();
    vector<vector<int>> d(n + 2, vector<int>(n + 2, 0));
    dp = d;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            dp[i + 1][j + 1] = dp[i + 1][j] + dp[i][j + 1] - dp[i][j] + tu[i + 1][j + 1];
        }
    }
    merge(0, 0, n - 1, n - 1, root);
    return root;
}

signed main()
{
    vector<vector<int>> vv = { {0,1},{1,0} };
    construct(vv);
    return 0;
}

//struct TreeNode {
//    int val;
//    TreeNode* left;
//    TreeNode* right;
//    TreeNode() : val(0), left(nullptr), right(nullptr) {}
//    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
//    
//};
//
//TreeNode* root = nullptr;
//vector<int> v;
//void mk(int l, int r, TreeNode*& root)
//{
//    if (l > r)return;
//    int m = (l + r) / 2;
//    root = new TreeNode(v[m]);
//    mk(l, m - 1, root->left);
//    mk(m + 1, r, root->right);
//}
//TreeNode* sortedArrayToBST(vector<int>& nums)
//{
//    v = nums;
//    int m = (nums.size() - 1) / 2;
//    root = new TreeNode(nums[m]);
//    mk(0, m - 1, root->left);
//    mk(m + 1, nums.size() - 1, root->right);
//    return root;
//}
//
//signed main()
//{
//    vector<int> v = { 1,3 };
//    sortedArrayToBST(v);
//    return 0;
//}








//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 };
//vector<vector<int>> gone;
//vector<vector<char>> tu;
//int m; int n;
//bool dfs(int x, int y,int p,string&word)
//{
//    if (p == word.size() - 1)return 1;
//    int fl = 0;
//    for (int i = 0; i < 4; i++)
//    {
//        int a = dx[i] + x; int b = dy[i] + y;
//        if (a<0 || a>=m || b<0 || b>=n)continue;
//        if (gone[a][b])continue;
//        if (tu[a][b] == word[p + 1])
//        {
//            gone[a][b] = 1;
//            if (dfs(a, b, p + 1, word))fl = 1;
//            gone[a][b] = 0;
//        }
//        if (fl == 1)break;
//    }
//    return fl;
//}
//
//
//bool exist(vector<vector<char>>& bo, string word)
//{
//    m = bo.size(); n = bo[0].size();
//    if (word.size() == 1)
//    {
//        int fl = 0;
//        for (int i = 0; i < m; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (bo[i][j] == word[0])fl = 1;
//            }
//        }
//        return fl;
//    }
//    tu = bo;
//    vector<vector<int>> g(m, vector<int>(n, 0));
//    gone = g;
//    for (int i = 0; i < m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (word[0] == tu[i][j])
//            {
//                gone[i][j] = 1;
//                if (dfs(i, j, 0, word))return 1;
//                gone[i][j] = 0;
//            }
//            
//        }
//    }
//    return 0;
//}
//
//
//
//signed main()
//{
//    //vector<vector<char>> bo = { {'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'} };
//    vector<vector<char>> bo = { {'A','B'}};
//    string s = "BA";
//    cout<<exist(bo, s);
//    return 0;
//}