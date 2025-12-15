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



int myAtoi(string s)
{
    int l = 0;
    int flag = 1;
    while (s[l] == ' ' || s[l] == '0')l++;
    if (s[l] == '-')
    {
        flag = -1;
        l++;
    }
    else if (s[l] == '+')
    {
        l++;
    }
    s = s.substr(l);
    int r = 0;
    while (r < s.size() && s[r] >= '0' && s[r] <= '9')
        r++;
    
    
    s = s.substr(0, r);
    if (s.size() > 10)
    {
        s = s.substr(s.size() - 10);
    }
    while (s.size() > 10 || (s.size() == 10 && s > "2147483647"))
    {
        l++;
        s = s.substr(l);
    }
    int ret = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ret = ret * 10 + (s[i] - '0');
    }
    return flag * ret;
}


signed main()
{
    string s = "0-1";
    myAtoi(s);
    return 0;
}






//int reverse(int x)
//{
//    if (x == 0)
//    {
//        return 0;
//    }
//    string a = to_string(x);
//    string b;
//    int flag = 1;
//    if (a[0] == '-')
//    {
//        string c = a.substr(1);
//        std::reverse(c.begin(), c.end());
//        int l = 0;
//        while (c[l] == '0')l++;
//        c = c.substr(l);
//        b = c;
//        flag = -1;
//    }
//    else
//    {
//        string c = a;
//        std::reverse(c.begin(), c.end());
//        int l = 0;
//        while (c[l] == '0')l++;
//        c = c.substr(l);
//        b = c;
//    }
//    if ((b[0] != '-' && b.size() >= 10 && b >= "2147483647") || (b[0] == '-' && b.size() >= 11 && b >= "-2147483647"))
//    {
//        return 0;
//    }
//    int ret = stoi(b);
//    return flag * ret;
//}
//
//int main() 
//{
//    cout << reverse(123456789) << endl;
//
//    return 0;
//}




//#include <iostream>
//#include <string>
//#include <unordered_set>
//#include <algorithm>
//using namespace std;
//
//class Solution {
//public:
//    int lengthOfLongestSubstring(string str)
//    {
//        if (str == "au")
//        {
//            int sss = 1;
//        }
//        if (str.size() == 0)
//        {
//            return 0;
//        }
//        int f = 0; int s = 0;
//        int n = str.size();
//        int ret = 1;
//        int num[1000] = { 0 };
//        while (f < n && s < n)
//        {
//            if (num[(int)str[f]] == 0)
//            {
//                num[(int)str[f]]++;
//                f++;
//            }
//            else
//            {
//                ret = max(ret, f - s);
//                while (s < f)
//                {
//                    num[(int)str[s++]]--;
//                }
//
//            }
//        }
//        return ret;
//    }
//};
//
//void testCase(string s, int expected) {
//    Solution sol;
//    int result = sol.lengthOfLongestSubstring(s);
//    cout << "测试字符串: \"" << s << "\"" << endl;
//    cout << "期望结果: " << expected << endl;
//    cout << "实际结果: " << result << endl;
//    cout << (result == expected ? "✓ 通过" : "✗ 失败") << endl;
//    cout << "--------------------------------" << endl;
//}
//
//int main() {
//    // 标准测试用例
//    testCase("abcabcbb", 3);
//    testCase("bbbbb", 1);
//    testCase("pwwkew", 3);
//
//    // 你需要的测试用例
//    testCase("au", 2);
//
//    // 其他边界测试用例
//    testCase("", 0);
//    testCase(" ", 1);
//    testCase("a", 1);
//    testCase("ab", 2);
//    testCase("aa", 1);
//    testCase("aab", 2);
//    testCase("dvdf", 3);
//
//    return 0;
//}




//#include <iostream>
//#include <string>
//using namespace std;
//
//// 链表节点定义
//struct ListNode {
//    int val;
//    ListNode* next;
//    ListNode() : val(0), next(nullptr) {}
//    ListNode(int x) : val(x), next(nullptr) {}
//    ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//// 解决问题的函数
//ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
//{
//    string a;
//    while (l1)
//    {
//        a += (l1->val + '0');
//        l1 = l1->next;
//    }
//    string b;
//    while (l2)
//    {
//        b += (l2->val + '0');
//        l2 = l2->next;
//    }
//    string ret;
//    int car = 0;//进位
//    int i = 0;
//    int j = 0;
//    while (i <= a.size()-1 || j <= b.size()-1 || car > 0)
//    {
//        int sum = car;
//        if (i < a.size())
//        {
//            sum += (a[i++] - '0');
//        }
//        if (j < b.size())
//        {
//            sum += (b[j++] - '0');
//        }
//        ret += (sum % 10 + '0');
//        car = sum / 10;
//    }
//    //reverse(ret.begin(),ret.end());
//    ListNode* r = new ListNode(0);
//    ListNode* cur = r;
//    for (auto& e : ret)
//    {
//        cur->next = new ListNode(e - '0');
//        cur = cur->next;
//    }
//    return r->next;
//}
//
//// 辅助函数：创建链表
//ListNode* createList(int arr[], int n) {
//    if (n == 0) return nullptr;
//    ListNode* head = new ListNode(arr[0]);
//    ListNode* current = head;
//    for (int i = 1; i < n; i++) {
//        current->next = new ListNode(arr[i]);
//        current = current->next;
//    }
//    return head;
//}
//
//// 辅助函数：打印链表
//void printList(ListNode* head) {
//    ListNode* current = head;
//    while (current != nullptr) {
//        cout << current->val;
//        if (current->next != nullptr) {
//            cout << " -> ";
//        }
//        current = current->next;
//    }
//    cout << endl;
//}
//
//// 辅助函数：释放链表内存
//void deleteList(ListNode* head) {
//    ListNode* current = head;
//    while (current != nullptr) {
//        ListNode* temp = current;
//        current = current->next;
//        delete temp;
//    }
//}
//
//// 测试用例
//void testCase1() {
//    cout << "测试用例 1:" << endl;
//    int arr1[] = { 2, 4, 3 }; // 342
//    int arr2[] = { 5, 6, 4 }; // 465
//    ListNode* l1 = createList(arr1, 3);
//    ListNode* l2 = createList(arr2, 3);
//
//    cout << "链表1: ";
//    printList(l1);
//    cout << "链表2: ";
//    printList(l2);
//
//    ListNode* result = addTwoNumbers(l1, l2);
//    cout << "结果: ";
//    printList(result); // 应该输出 7 -> 0 -> 8 (807)
//
//    deleteList(l1);
//    deleteList(l2);
//    deleteList(result);
//    cout << endl;
//}
//
//void testCase2() {
//    cout << "测试用例 2:" << endl;
//    int arr1[] = { 0 }; // 0
//    int arr2[] = { 0 }; // 0
//    ListNode* l1 = createList(arr1, 1);
//    ListNode* l2 = createList(arr2, 1);
//
//    cout << "链表1: ";
//    printList(l1);
//    cout << "链表2: ";
//    printList(l2);
//
//    ListNode* result = addTwoNumbers(l1, l2);
//    cout << "结果: ";
//    printList(result); // 应该输出 0
//
//    deleteList(l1);
//    deleteList(l2);
//    deleteList(result);
//    cout << endl;
//}
//
//void testCase3() {
//    cout << "测试用例 3:" << endl;
//    int arr1[] = { 9, 9, 9, 9, 9, 9, 9 }; // 9999999
//    int arr2[] = { 9, 9, 9, 9 }; // 9999
//    ListNode* l1 = createList(arr1, 7);
//    ListNode* l2 = createList(arr2, 4);
//
//    cout << "链表1: ";
//    printList(l1);
//    cout << "链表2: ";
//    printList(l2);
//
//    ListNode* result = addTwoNumbers(l1, l2);
//    cout << "结果: ";
//    printList(result); // 应该输出 8 9 9 9 0 0 0 1 (10009998的逆序)
//
//    deleteList(l1);
//    deleteList(l2);
//    deleteList(result);
//    cout << endl;
//}
//
//int main() {
//    cout << "两数相加（链表表示）" << endl;
//    cout << "=====================" << endl;
//
//    testCase1();
//    testCase2();
//    testCase3();
//
//    return 0;
//}