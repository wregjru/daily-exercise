#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;
BTNode* BuyNode(BTDataType x);
BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	return node1;

}
BTNode* BuyNode(BTDataType x)
{
	BTNode* new = (BTNode*)malloc(sizeof(BTNode));
	if (new == NULL)
	{
		return NULL;
	}
	new->left = NULL;
	new->right = NULL;
	new->data = x;
	return new;
}

void InOrder(BTNode* root)
{

	if (root == NULL)
	{
		printf("N ");
		return;
	}
	else
	{
		printf("%d ", root->data);
		InOrder(root->left);
		InOrder(root->right);

	}
}
int TreeSize(BTNode* root)
{
	return root == NULL ? 0 : TreeSize(root->left) + TreeSize(root->right) + 1;
}
int TreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	if (root->left == NULL && root->right == NULL)
	{
		return 1;
	}
	return TreeLeafSize(root->left) + TreeLeafSize(root->right);
}
int TreeHeight(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}
	int left = TreeHeight(root->left);
	int right = TreeHeight(root->right);
	return left > right ? left + 1 : right + 1;

}
int TreeLevelKSize(BTNode* root, int k)
{
	if (root == NULL)
	{
		return 0;
	}
	if (k == 1)
	{
		return 1;
	}
	return TreeLevelKSize(root->left, k - 1) + TreeLevelKSize(root->right, k - 1);
}
BTNode* TreeFind(BTNode* root,int k)
{
	if (root == NULL)
	{
		return NULL;
	}
	if (root->data == k)
	{
		return root;
	}
	BTNode* left = TreeFind(root->left, k);
	BTNode* right = TreeFind(root->right, k);
	if (left != NULL)
	{
		return left;
	}
	if (right != NULL)
	{
		return right;
	}
	return NULL;
}
int main()
{
	BTNode* root = CreatBinaryTree();
	InOrder(root);
	printf("\n");
	printf("%d ", TreeSize(root));
	printf("\n");
	printf("%d ", TreeLeafSize(root));
	printf("\n");
	printf("%d ", TreeHeight(root));
	printf("\n");
	printf("%d ", TreeLevelKSize(root, 3));
	printf("\n");
	printf("%d",TreeFind(root, 2)->data);
	return 0;
}