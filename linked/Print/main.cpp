#include "iostream"
using namespace std;
// linked list data structure

class Node{
public:
    int data;
    int data2;

    Node* next;
//    Node* noxt2;
};
// normal pointer is stored address of variable
// but now pointer is Node-Type pointer
// Node -> next -> Node -> next -> Node -> next -> node -> null;

void dt_print(Node* node) {
    while (node != NULL){      // nout sone node a hti a lote lote
        cout<<node->data <<" ";
        cout<<node->data2 <<endl;
        node = node->next;      //node htae ka next ko node htae ko assign pyan lote pay
        //second memory address ko link
    }
}

int main(){
    Node* head = NULL;          //
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();          // memory location
    second = new Node();
    third = new Node();

    head->data = 1;            //data is 1
    head->data2 = 101;
    head->next = second;       //link second

    second->data = 2;          //data is 1
    second->data2 = 102;
    second->next = third;      //link third

    third->data = 3;           //data is 3
    third->data2 = 103;
    third->next = NULL;        //link NULL

    dt_print(head);//head ko pay

    return 0;
}
