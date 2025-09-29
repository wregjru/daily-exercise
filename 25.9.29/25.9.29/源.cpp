#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
#include<queue>
using namespace std;
vector<vector<int>> levelOrder(TreeNode* root)
{
    queue<TreeNode*> mid;
    vector<vector<int>> vv;
    int num = 0;
    if (root)
    {
        mid.push(root);
        num = 1;

    }
    while (!mid.empty())
    {
        vector<int> v;
        while (num)
        {

            TreeNode* front = mid.front();
            mid.pop();

            v.push_back(front->val);
            if (front->left)
                mid.push(front->left);
            if (front->right)
                mid.push(front->right);


            num--;

        }
        vv.push_back(v);
        num = mid.size();


    }
    return vv;


}