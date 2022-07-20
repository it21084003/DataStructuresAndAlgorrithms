
//////////////////////////////////////////////
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
// APPEND method import part
void append(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;     //nout sone mhar add ko htae

    new_node->data = new_data;
    new_node->next = NULL;

    if(*head_ref == NULL){      //null ko search
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL){
        last = last->next;
    }
    last->next = new_node;
    return;
}

//InsertAfter method
void insertAfter(Node* prev_node, int new_data){    //pre_node is index no3 yae address
    if(prev_node == NULL){
        cout<<"Prev_node cannot be null"<<endl;
        return;
    }
    Node* new_node = new Node;                      //new node
    new_node->data = new_data;                      //new node-> data
    new_node->next  = prev_node->next;              //new node-> next  OR next_node yae address
    prev_node->next = new_node;                     //
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
    cout<<" "<<endl;
    //Apppend
    append(&head, 111);
    cout<<"After append"<<endl;
    dt_print(head);

    //InsertAfters
    insertAfter(second->next,9595);     // index2 yae next OR index 3 yae address
    cout<<" "<<endl;
    cout<<" After Insert data "<<endl;
    dt_print(head);
    return 0;
    return 0;

}
