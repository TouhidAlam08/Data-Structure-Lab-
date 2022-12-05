#include<iostream>
using namespace std;

struct BstNode
{
	int data;
	BstNode* left;
	BstNode* right;

};
BstNode* root;

BstNode* GetNewNode(int data)
{
	BstNode* NewNode = new BstNode();
	NewNode->data = data;
	NewNode->left = NULL;
	NewNode->right = NULL;
	return NewNode;
}

void PreOrder(BstNode* root)
{
	if (root == NULL)
	{
		return;
	}
	cout << root->data << " ";
	PreOrder(root->left);
	PreOrder(root->right);
}

BstNode* Insert(BstNode* root,int x)
{
    if (root==NULL)
	{
		root=GetNewNode(x);
	}
	else if(x<=root->data)
	{
		root->left=Insert(root->left,x);
	}
	else
	{
		root->right=Insert(root->right,x);
	}
	return root;
}

int main()
{
	root = NULL;
	root = Insert(root,5);
	root = Insert(root,4);
	root = Insert(root,6);
	root = Insert(root,3);
	root = Insert(root,7);
	root = Insert(root,2);
	PreOrder(root);

}
