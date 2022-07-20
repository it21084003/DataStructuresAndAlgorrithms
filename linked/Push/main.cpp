#include "iostream"
using namespace std;
// linked list data structure
//PUSH

class Node{
public:
    int data;
//    int data2;

    Node* next;
//    Node* noxt2;
};
//PUSH method important part
void push(Node** head_ref, int newData){
    Node* new_node = new Node();

    new_node->data = newData;       //data
    new_node->next = (*head_ref);   //address

    (*head_ref) = new_node;     //
}
// normal pointer is stored address of variable
// but now pointer is Node-Type pointer
// Node -> next -> Node -> next -> Node -> next -> node -> null;

void dt_print(Node* node) {
    while (node != NULL){      // nout sone node a hti a lote lote
        cout<<node->data <<" ";
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
    head->next = second;       //link second

    second->data = 2;          //data is 1
    second->next = third;      //link third

    third->data = 3;           //data is 3
    third->next = NULL;        //link NULL

    cout<<"Before push"<<endl;
    dt_print(head);//head ko pay
    cout<<" "<<endl;

    push(&head, 100);  //head address
    cout<<"After push"<<endl;
    dt_print(head);

    push(&head, 101);
    cout<<"After push"<<endl;
    dt_print(head);
    return 0;
}
