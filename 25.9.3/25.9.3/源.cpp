//#include<iostream>
////using namespace std;
////namespace xc
////{
////	int a = 1;
////	char arr[100] = "asdf";
////}
////int fun(int a = 0)
////{
////	return 2 * a;
////}
////double fun(double a = 0.1)
////{
////	return 3 * a;
////}
////using xc::a;
////int main()
////{
////	cout << a << "\n" << fun(1.0) << endl;
////	return 0;
////}
////typedef struct a
////{
////	char* arr;
////	int top;
////	int capacity;
////}ST;
////void initST(ST& pa,int n=4)
////{
////	pa.top = 0;
////	pa.capacity = 0;
////	pa.arr = (char*)malloc(n * sizeof(char));
////	pa.capacity = n;
////}
////void swap(int& x, int& y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////}
////int main()
////{
////	int a = 1;
////	int e = 2;
////	int& b = a;
////	int& c = a;
////	swap(a, e);
////	ST st;
////	initST(st);
////	std::cout << a << e << "\n" << std::endl << c << std::endl;
////}
////typedef struct ListNode
////{
////    int val;                // 节点存储的数据
////    struct ListNode* next;  // 指向下一个节点的指针
////} LtNode, * PNode;           // 定义了两个别名：LtNode 是 struct ListNode 的别名，PNode 是指向 struct ListNode 的指针类型的别名
////
////void ListPushBack(struct ListNode** phead, int x);
//typedef struct ListNode
//{
//    int val;                // 节点存储的数据
//    struct ListNode* next;  // 指向下一个节点的指针
//} LtNode, * PNode;           // 定义了两个别名：LtNode 是 struct ListNode 的别名，PNode 是指向 struct ListNode 的指针类型的别名
//
//void ListPushBack(LtNode** phead, int x)
//{
//    // 创建新节点并初始化
//    struct ListNode* newNode = (struct ListNode*)malloc(sizeof(LtNode));
//    newNode->val = x;
//    newNode->next = NULL;
//
//    // 如果链表为空，新节点作为头节点
//    if (*phead == NULL)
//    {
//        *phead = newNode;
//    }
//    else
//    {
//        // 遍历找到尾节点
//        struct ListNode* current = *phead;
//        while (current->next != NULL)
//        {
//            current = current->next;
//        }
//        // 将新节点链接到尾节点
//        current->next = newNode;
//    }
//}