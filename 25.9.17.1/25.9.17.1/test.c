#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
typedef struct BintreeNode
{
    struct BintreeNode* left;
    struct BintreeNode* right;
    char val;
}BTNode;
BTNode* create(char* a, int* t)
{
    if (a[*t] == '#')
    {
        (*t)++;
        return NULL;
    }
    else
    {
        BTNode* new = (BTNode*)malloc(sizeof(BTNode));
        new->val = a[*t];
        (*t)++;
        new->left = create(a, t);
        new->right = create(a, t);
        return new;
    }

}
int main()
{
    char a[100];
    int i = 0;
    scanf("%s", a);
    int t = 0;
    BTNode* root = create(a, &t);

    return 0;
}