#include "iostream"
using namespace std;

struct Node{
    int key;
    struct Node *left, *right;
};
struct Node *newNode(char data){
    struct Node *node=(struct Node*) malloc(sizeof (struct Node));
    node->key = data;
    node->right = node->left = NULL;
}
//fullbinaryTree
bool isFullBinaryTree(struct Node *root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    if((root->left) && (root->right))
        return (isFullBinaryTree(root->left)) &&
                isFullBinaryTree(root->right);

    return false;

}


int main(){
    struct Node *root = NULL;
    root = newNode(8);                        //       8
    root->left = newNode(10);                 //    10      3
    root->right = newNode(3);                 //  4    2
    root->left->left = newNode(4);            //      17 7
    root->left->right = newNode(2);
    root->left->right->left = newNode(17);
    root->left->right->right = newNode(7);
    // root->left->right->right->left = newNode(77);

    if(isFullBinaryTree(root))
        cout<<"Full Binary Tree\n";
    else
        cout<<"is not Full Binary Tree";
}