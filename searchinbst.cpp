#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *left,*right;
	
	Node(int value)
	{
		data=value;
		left=NULL;
		right=NULL;
	}
};

Node* searchbst(Node* root, int key)
{
	if(root==NULL ||root->data==key)
	{
		return root;
	}
	if(root->data>key)
	{
		return searchbst(root->left, key);
	}
	return searchbst(root->right, key);
}

int main()
{
	Node* root=new Node(4);
	root->left=new Node(2);
	root->right=new Node(5);
	root->left->left=new Node(1);
	root->left->right=new Node(3);
	root->right->right=new Node(6);
	
	if(searchbst(root,12)==NULL)
	{
		cout<<"key doesnot exist: ";
	}else{
		cout<<"key exist:";
	}
}
