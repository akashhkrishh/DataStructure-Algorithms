#include<bits/stdc++.h>

struct Node{
	int data;
	struct Node *left,*right;
};

Node* newNode(int data){
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void Inorder(struct Node* node)
{
	if (node != NULL){
        Inorder(node->left);
	    std::cout << node->data << " ";
	    Inorder(node->right);
		}
}

void Preorder(struct Node* node)
{
	if (node != NULL){
        std::cout << node->data << " ";
	    Preorder(node->left);
	    Preorder(node->right);
		}
}

void Postorder(struct Node* node)
{
	if (node != NULL){
        Postorder(node->left);
        Postorder(node->right);
        std::cout << node->data << " ";
		}
}

struct Node* insertNode(struct Node* root,int data){
	
	if(root==NULL)
		return newNode(data);
	else if(data<root->data)
		root->left=insertNode(root->left,data);
	else if(data>root->data)
		root->right=insertNode(root->right,data);
	return root;
}

int main(){
	
	struct Node* root = NULL;
	root=insertNode(root,4);
	insertNode(root,5);
	insertNode(root,2);
	insertNode(root,9);
	insertNode(root,1);
	insertNode(root,3);
	
	std::cout << "Preorder traversal of binary tree is : ";
	Preorder(root);
	std::cout << "\nInorder traversal of binary tree is : ";
	Inorder(root);
	std::cout << "\nPosrorder traversal of binary tree is : ";
	Postorder(root);
	std::cout<<std::endl;
	
	return 0;
}
