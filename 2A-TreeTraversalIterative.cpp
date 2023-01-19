#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node*left;
    Node*right;
    Node(int data){
        this->data=data;
        left=right=NULL;
    }
};
void inOrder(Node* root){
    stack<Node*> s;
    Node*curr=root;
    while(curr!=NULL||!s.empty()){
        while (curr!=NULL){
            s.push(curr);
            curr=curr->left;
        }
    curr=s.top();
    s.pop();
    cout<<curr->data<<" ";
    curr=curr->right;
    }
}
void preOrder(Node* root)
{
// return if the tree is empty
    if (root == nullptr)
        return;
// create an empty stack and push the root node
    stack<Node*> stack;
    stack.push(root);
// loop till stack is empty
    while (!stack.empty()){
// pop a node from the stack and print it
        Node* curr = stack.top();
        stack.pop();
        cout << curr->data << " ";

        if (curr->right) {
            stack.push(curr->right);
        }
// push the left child of the popped node into the stack
        if (curr->left) {
            stack.push(curr->left);
        }
// the right child must be pushed first so that the leftchild
// is processed first (LIFO order)
    }
}
void postOrder(Node*root){
    stack<Node*>s;
    stack<Node*>vals;
    Node *curr=root;
    Node *temp=root;
    s.push(curr);
    while(!s.empty()){
        curr=s.top();
        s.pop();
        vals.push(curr);
        if(curr->left){
            s.push(curr->left);
        }
        if(curr->right){
            s.push(curr->right);
        }
    }
    while(!vals.empty()){
        cout<<vals.top()->data<<" ";
        vals.pop();
    }
}
int main(){
    Node *root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    cout<<"\nPre Order: ";
    preOrder(root);
    cout<<"\nIn Order:";
    inOrder(root);
    cout<<"\nPost Order:";
    postOrder(root);
    cout<<"\n";
    return 0;
}
