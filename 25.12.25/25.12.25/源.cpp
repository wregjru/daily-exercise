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


//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//ListNode* partition(ListNode* head, int x)
//{
//    ListNode* dim = new ListNode(-0x3f3f3f3f);
//    dim->next = head;
//    ListNode* r = dim;
//    ListNode* cur = head;
//    ListNode* pcur = dim;
//    while (cur)
//    {
//        if (cur->val < x)
//        {
//			if (r == pcur)
//			{
//				r = cur;
//				pcur = pcur->next;
//				cur = cur->next;
//			}
//			else
//			{
//				ListNode* next = cur->next;
//				cur->next = r->next;
//				r->next = cur;
//				pcur->next = next;
//				r = cur;
//				cur = next;
//			}
//            
//        }
//        else
//        {
//            pcur = cur;
//            cur = cur->next;
//        }  
//    }
//    return dim->next;
//
//}
//
//signed main()
//{
//	ListNode* head = new ListNode;
//	ListNode* cur = head;
//	vector<int> v = { 1,4,3,2,5,2 };
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
//	partition(head, 3);
//
//	return 0;
//}


class LRUCache
{
public:
    list<pair<int,int>> li;
    int _cap = 0;
    int _size = 0;
    unordered_map<int, list<pair<int,int>>::iterator>ma;
    //unordered_map<int, int> ma2;
    LRUCache(int capacity)
    {
        _cap = capacity;
    }
    void put(int key, int val)
    {
        if (ma.count(key))
        {
            auto pos = ma[key];
            li.erase(pos);
            li.push_back({ key,val });
            ma[key] = (--li.end());
        }
        else
        {
            _size++;
            if (_size > _cap)
            {
                ma.erase(li.begin()->first);
                li.pop_front();
                _size--;
                
            }
            li.push_back({ key,val });
            ma[key] = (--li.end());
        }
    }
    int get(int key)
    {
        if (ma.count(key))
        {
            auto pos = ma[key];
            int a = pos->first;
            int b = pos->second;
            li.erase(pos);
            li.push_back({ a,b });
            ma[key] = (--li.end());
            return b;
        }
        else
        {
            return -1;
        }
    }
    


};


signed main()
{
    LRUCache lr(2);
    lr.put(2,1);
    lr.put(1, 1);
    lr.put(2, 3);
    lr.put(4, 1);
    cout << lr.get(1);
    cout << lr.get(2);
    /*lr.put(1,0);
    lr.put(2,2);
    cout<<lr.get(1);
    lr.put(3, 3);
    cout << lr.get(2);
    lr.put(4,4);
    cout << lr.get(1);
    cout << lr.get(3);
    cout << lr.get(4);*/



	//list<int> li;
	//li.push_back(1);
	//cout << *(--li.end());
	//unordered_map<int, int> ma;
	
	return 0;
}