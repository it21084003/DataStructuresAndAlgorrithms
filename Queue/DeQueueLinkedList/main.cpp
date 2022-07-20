#include "stdio.h"
#include "stdlib.h"

typedef struct {            //Data Build
    int num;

}QueueData;

typedef struct node{        //Node Build
    QueueData data;
    struct node *next;
}Node, *NodePtr;

typedef struct QueueType{       //Queue Build
    NodePtr head, tail;
}QueueType, *Queue;

//initQueue
Queue initQueue(){
    Queue qp = (Queue) malloc(sizeof(QueueType));
    qp->head = NULL;
    qp->tail = NULL;
    return qp;
}
//empty
int empty(Queue Q){
    return (Q->head == NULL);
}

//Enqueue
void enqueue(Queue Q, QueueData d){
    NodePtr np = (NodePtr) malloc(sizeof(Node));
    np->data = d;
    np->next = NULL;
    //empty
    if(empty(Q)){
    Q->head = np;
    Q->tail = np;
    } else{
        Q->tail->next = np;
        Q->tail = np;
    }
}
//Dequeue
QueueData dequeue(Queue Q){
    if(empty(Q)){
        printf("Queue is empty :");
        exit(1);
    }
    QueueData  hold = Q->head->data;
    NodePtr temp = Q->head;
    Q->head = Q->head->next;

    if(Q->head == NULL){
        Q->tail =NULL;
    }
    free(temp);
    return hold;
}
int main(){
    int n = 0;
    QueueData  temp;
    Queue Q = initQueue();          //init
    printf("Enter a poistive interger:");
    scanf("%d", &n);
    while (n>0){
        temp.num = n%10;
        enqueue(Q, temp);
        n = n/10;
    }
    //Dequeue
    printf("\n Reverse Order\n");
    while (!empty(Q)){
        printf("%d",dequeue(Q).num);
    }


    return 0;
}
