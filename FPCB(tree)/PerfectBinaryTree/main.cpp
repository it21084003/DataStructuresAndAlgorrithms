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
    return node;
}
//perfectbinaryTree

int depth(Node *node){              //depth search
    int d = 0;
    while (node != NULL){                    //
        d++;
        node = node->left;
    }
    return d;
}

bool isPerfectBT(struct Node *root, int d, int level = 0) {

    if (root == NULL) {
        return true;
    }
    if (root->left == NULL && root->right == NULL) {
        bool flag;
        if (d == level + 1) {
            flag = true;
        } else {
            flag = false;
        }
        return flag;
    }
    if(root->left == NULL || root->right == NULL){
        return false;
    }
    return isPerfectBT(root->left, d , level+1) &&
            isPerfectBT(root->right, d, level+1);
}
bool isPerfect(Node *root){
    int d = depth(root);
    printf("death = %d\n",d);
    return isPerfectBT(root,d);
}



int main(){
    struct Node *root = NULL;
    root = newNode(8);                        //       8
    root->left = newNode(10);                 //    10      3
    root->right = newNode(3);                 //  4    2  17   7
    root->left->left = newNode(4);            //
    root->left->right = newNode(2);
    root->left->left->left = newNode(12);
    root->left->left->right = newNode(22);
    root->right->left = newNode(17);
    root->right->right = newNode(7);
    // root->left->right->right->left = newNode(77);

    if(isPerfect(root))
        cout<<"Perfect Binary Tree\n";
    else
        cout<<"is not Perfect Binary Tree";

}