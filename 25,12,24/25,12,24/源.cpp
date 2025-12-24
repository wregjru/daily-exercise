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


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};

TreeNode* root = nullptr;
unordered_map<int, int> hash1;
int pos = 0;
void maket(vector<int>& pre, vector<int>& ino, int l, int r, TreeNode*& root)
{
    if (r < l)return;
    if (l == r)
    {
        root = new TreeNode;
        root->val = pre[pos++];
        return;
    }
    int mid = hash1[pre[pos]];
    root = new TreeNode;
    root->val = pre[pos];
    maket(pre, ino, l, mid - 1, root->left);
    maket(pre, ino, mid + 1, r, root->right);
    //map<int, int>ma;
    //for (int i = l; i <= r; i++)
    //{
    //    ma.insert({ pre[i],i });
    //}
    //map<int, int>::iterator p = ma.end();
    //for (int i = 0; i < ino.size(); i++)
    //{
    //    if (ma.count(ino[i]))
    //    {
    //        p = ma.find(ino[i]);
    //        break;
    //    }
    //}
    //root = new TreeNode;
    //root->val = p->first;
    //int mid = p->second;
    //maket(pre, ino, l, mid - 1, root->left);
    //maket(pre, ino, mid + 1, r, root->right);
}

TreeNode* buildTree(vector<int>& pre, vector<int>& ino)
{
    for (int i = 0; i < pre.size(); i++)
    {
        hash1[ino[i]] = i;
    }
    maket(pre, ino, 0, pre.size() - 1, root);
    return root;
}



signed main()
{
    vector<int>pre = { 3,9,20,15,7 };
    vector<int>ino = { 9,3,15,20,7 };
    buildTree(pre, ino);
    return 0;
}




//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//	
//};
//
//
//ListNode* deleteDuplicates(ListNode* head)
//{
//    ListNode* l = head;
//    ListNode* r = head;
//    ListNode* pl = nullptr;
//    int sz = 0;
//    while (r)
//    {
//        while (r->next&&l->val == r->next->val)
//        {
//            r = r->next;
//            sz++;
//        }
//        if (sz != 0)
//        {
//            if (l == head)
//            {
//                head = r->next;
//            }
//            else
//            {
//                pl->next = r->next;
//            }
//            
//            l = r->next;
//            r = r->next;
//            sz = 0;
//        }
//        else
//        {
//            pl = l;
//            l = l->next;
//            r = r->next;
//
//        }
//    }
//    return head;
//    /*while (r)
//    {
//        while (l->val == r->val)
//        {
//            sz++;
//            r = r->next;
//        }
//        if (sz != 1)
//        {
//            if (l == head)
//            {
//                head = r;
//            }
//            else
//            {
//                pl->next = r->next;
//            }
//            sz = 0;
//            pl = r;
//            l = r;
//        }
//        else
//        {
//            l = l->next;
//            r = r->next;
//        }
//    }*/
//    //return head;
//
//
//}




//signed main()
//{
//	ListNode* head = new ListNode;
//	ListNode* cur = head;
//	vector<int> v = { 1,1,1,2,3 };
//	for (int i = 0; i < v.size(); i++)
//	{
//		cur->val = v[i];
//		if (i == v.size() - 1)
//		{
//			cur->next = nullptr;
//		}
//		else
//		{
//			cur->next = new ListNode;
//			cur = cur->next;
//		}
//	}
//    //deleteDuplicates(head);
//    map<int, int> ma;
//    ma.insert({ 1,1});
//    auto p = ma.find(1);
//    map<int, int>::iterator p1 = ma.find(1);
//    cout << p1->first << p1->second;
//	return 0;
//}