#include <iostream>
using namespace std;

struct  Node{
    int data;
    struct Node *left, *right;
    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

//inorder function        ->left->right->root
//base hti twar pp mha data output
void inorder(struct Node * node){
    if(node == NULL){
        return;
    }
    inorder(node->left);
    cout<<node->data<<"->";
    inorder(node->right);
}

//preorder  ->root->left->right
void preorder(struct Node * node){
    if(node == NULL){
        return;
    }
    cout<< node->data <<"->";
    preorder(node->left);
    preorder(node->right);
}

int main(){
    struct Node *root = new Node(8);          //8
    root->left = new Node(10);           //10        3
    root->right = new Node(3);         //4  2     17

    root->right->left = new Node(17);
    root->left->left = new Node(4);
    root->left->right = new Node(2);

    cout<<"Inorder Traversal";      //inorder call
    inorder(root);

    cout<<"Preorder Traversal";     //preorder call
    preorder(root);
}
