#include<iostream>
class Node
{
	public:
	int key;
	Node*left;
	Node*right;	
	int height;
};
int max(int a,int b)
int height(Node*n)
{
	if(n==NULL)
		return 0;
	return n->height;
}
int max(int a,int b)
{
	return(a>b)? a:b;
}
Node* newNode(int key)  
{  
    Node* node = new Node(); 
    node->key = key;  
    node->left = NULL;  
    node->right = NULL;  
    node->height = 1; 
    
    return(node);  
} 
 
