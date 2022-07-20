#include <iostream>
// linked list data structure

class Node{
public:
    int data;
//    int data2;  more ok
    Node* next;
//    Node* noxt2;
};
// normal pointer is stored address of variable
// but now pointer is Node-Type pointer
// Node -> next -> Node -> next -> Node -> next -> node -> null;

int  main(){
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

    return 0;
}