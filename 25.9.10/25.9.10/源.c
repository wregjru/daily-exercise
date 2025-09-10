#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

///**
// * Definition for singly-linked list.
// * struct ListNode {
// *     int val;
// *     struct ListNode *next;
// * };
// */
//bool hasCycle(struct ListNode* head)
//{
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//        if (slow == fast)
//        {
//            return true;
//        }
//    }
//    return false;
//
//
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode listnode;
struct ListNode* detectCycle(struct ListNode* head)
{
    listnode* fast = head;
    listnode* slow = head;
    while (fast && fast->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
        {
            listnode* meet = slow;
            listnode* move = head;
            while (meet != move)
            {
                meet = meet->next;
                move = move->next;
            }
            return move;
        }
    }
    return NULL;


}
/**
 * Definition for a Node.
 * struct Node {
 *     int val;
 *     struct Node *next;
 *     struct Node *random;
 * };
 */
typedef struct Node node;

struct Node* copyRandomList(struct Node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node* n0 = head;
    node* n1;
    while (n0)
    {
        node* n1 = (node*)malloc(sizeof(node));
        n1->val = n0->val;
        n1->next = n0->next;
        n0->next = n1;
        n0 = n0->next->next;


    }
    node* n3 = head;
    while (n3)
    {
        if (n3->random != NULL)
        {
            n3->next->random = n3->random->next;
            n3 = n3->next->next;
        }
        else
        {
            n3->next->random = NULL;
            n3 = n3->next->next;
        }
    }
    node* newhead = head->next;
    node* move1 = head->next;
    while (move1->next)
    {
        move1->next = move1->next->next;
        move1 = move1->next;
    }
    return newhead;
}