#include "iostream"
using namespace std;

struct Node{
    int item;
    struct Node *left, *right;
};
struct Node *newNode(int item){
    struct Node *node=(struct Node*) malloc(sizeof (struct Node));
    node->item = item;
    node->right = node->left = NULL;
    return node;
}
//balancebinarytree
bool balanceChecking(Node *root, int *height){
    int leftH = 0, rightH = 0;
    int l = 0, r = 0;

    if(root == NULL){
        *height = 0;
        return 1;
    }
    l = balanceChecking(root->left, &leftH);
    r = balanceChecking(root->right, &rightH);

    *height = (leftH > rightH ? leftH : rightH)+1;

    if((leftH-rightH >= 2) || (rightH-leftH) >= 2){
        return 0;
    } else{
        return l && r;
    }
}


int main(){
    int height = 0;

    struct Node *root = NULL;
    root = newNode(1);                        //       1
    root->left = newNode(2);                 //    2      3
    root->right = newNode(3);                 //  4  5   6
    root->left->left = newNode(4);            //
    root->left->right = newNode(5);
//    root->left->left->left = newNode(6);

    int data = balanceChecking(root, &height);
    if(data){
        printf("Balanced binary tree was found");
    }else{
        printf("Not Found");
    }


}