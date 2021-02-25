#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*left;
		Node*right;
		
};
void inorder(Node*root,int k1,int k2)
{
	if(root==NULL)
	{
		return;
	}
	if( k1<root->data)
	{
		inorder(root->left,k1,k2);
	}
	if( k1<=root->data &&  k2>=root->data)
	{
		cout<<root->data<<" ";
	}
	if( k2>root->data)
	{
		inorder(root->right, k1, k2);
	}
}


Node* newNode(int data)  
{  
    Node *temp = new Node();  
    temp->data = data;  
    temp->left = NULL;  
    temp->right = NULL;  
      
    return temp;  
}  
int main()
{  
    Node *root = new Node();  
    int k1 = 10, k2 = 25;  
      
   	
    root = newNode(20);  
    root->left = newNode(8);  
    root->right = newNode(22);  
    root->left->left = newNode(4);  
    root->left->right = newNode(12);  
    //inorder(root,k1,k2);
    //CreateArray(root);
    inorder(root,k1,k2);  
    return 0;  
}  
