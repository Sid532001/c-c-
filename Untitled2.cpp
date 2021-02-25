#include<iostream>
using namespace std;

class Node
{
	public:
		int data;
		Node*left;
		Node*right;
};
void inorder(Node*root)
{
	if(root==NULL)
	{
		return NULL;
	}
	inoder(root->left);
	cout<<root->data;
	inorder(root->right);
}
void 
