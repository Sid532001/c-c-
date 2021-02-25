#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node*left;
		Node*right;
		
};
//write your code here
void inorderr(Node*root)
{
	if(root!=NULL)
	{
		inorderr(root->left);
		cout<<root->data <<" ";
		inorderr(root->right);
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
    //int k1 = 10, k2 = 25;  
      
   
    root = newNode(20);  
    root->left = newNode(8);  
    root->right = newNode(22);  
    root->left->left = newNode(4);  
    root->left->right = newNode(12);  
    inorderr(root);
    //Print(root, k1, k2);  
    return 0;  
}  
