#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		int left;
		int right;
};
node*newNode(int data)
{
	node*temp=new Node();
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
	
}
