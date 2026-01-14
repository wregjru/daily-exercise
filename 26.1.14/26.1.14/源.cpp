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



int minRectanglesToCoverPoints(vector<vector<int>>& po, int w)
{
    sort(po.begin(), po.end(), [](vector<int>& v1, vector<int>& v2) {return v1[0] < v2[0]; });
    int ret = 1;
    int p = po[0][0] + w;
    int cur = 0;
    while (cur < po.size())
    {
        if (po[cur][0] <= p)
        {
            cur++;
        }
        else
        {
            ret++;
            p = po[cur][0] + w;
            cur++;
        }
    }
    return ret;

}



signed main()
{
    vector<vector<int>> vv = { {2,1},{1,0},{1,4},{1,8},{3,5},{4,6} };
    cout<<minRectanglesToCoverPoints(vv, 1);
    return 0;
}






//int maxOperations(vector<int>& num)
//{
//    int ret = 0;
//    for (int i = 2; i <= 200; i++)
//    {
//        int p = 0;
//        int r = 0;
//        while (p < num.size() - 1 && num[p] + num[p + 1] == i)
//        {
//            r++;
//            p += 2;
//        }
//        ret = max(ret, r);
//
//    }
//    return ret;
//
//}

//signed main()
//{
//    vector<int> v = { 1,5,3,3,4,1,3,2,2,3 };
//    cout << maxOperations(v);
//    return 0;
//}







//#include<sstream>
//struct TreeNode 
//{
//     int val;
//     TreeNode *left;
//     TreeNode *right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
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
//
//
//
//unordered_map<TreeNode*, int> ma;
//unordered_map<TreeNode*, int> all;
//int dfs1(TreeNode* root)
//{
//    if (root == nullptr)return 0;
//    if (root->left == nullptr && root->right == nullptr)
//    {
//        ma[root] = root->val;
//        return 1;
//    }
//    //if (root->left == nullptr || root->right == nullptr)return -1;
//
//    int fl1 = dfs1(root->left); int fl2 = dfs1(root->right);
//    if (fl1 == -1 || fl2 == -1)return -1;
//    if (fl1 == fl2)
//    {
//        ma[root] = root->val;
//        return fl1 + 1;
//    }
//    else return -1;
//}
//int dfs2(TreeNode* root)
//{
//    if (root == nullptr)return 0;
//    int l = dfs2(root->left);
//    int r = dfs2(root->right);
//    all[root] = l + r+1;
//    return l + r+1;
//}
//int kthLargestPerfectSubtree(TreeNode* root, int k)
//{
//    dfs1(root);
//    dfs2(root);
//    vector<int> r;
//    for (auto& e : ma)
//    {
//        r.push_back(all[e.first]);
//    }
//    sort(r.begin(), r.end(),greater<int>());
//    if (r.size() < k)return -1;
//    return r[k-1];
//}
//
//
//signed main()
//{
//    TreeNode* root=makeuptree("5,3,6,5,2,5,7,1,8,null,null,6,8");
//    kthLargestPerfectSubtree(root, 2);
//    return 0;
//}