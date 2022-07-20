#include "stdio.h"
#include "stdlib.h"
#define MaxQ 10

//type build, declaration, init
typedef struct {
    int head, tail;         //ma si ma pyit
    int QA[MaxQ];           //arr
}Qtype, *Queue;             //int a, *b;

//Queue Build
Queue initQueue(){
    Queue qp = (Queue)malloc(sizeof (Qtype));       //node
    qp->head = qp->tail = 0;    //head,tail == 0
    return qp;
};

//enqueue or push
void enqueue(Queue Q, int n){
    if(Q->tail == MaxQ-1){          //9 lr check mal
        Q->tail = 0;                //true yin 0 ko change
    } else{
        ++(Q->tail);                //ma hote yin 1++
    }
    //
    if(Q->tail == Q->head){         //0 pyit twar yin exit
        printf(("\nQueue is fukk \n"));
        exit(1);
    }
    //data input
    Q->QA[Q->tail] = n;
}
int main(){
    int n = 0;
    Queue Q = initQueue();
    printf("Enter a positive interger:");
    scanf("%d",&n);           //123 input lote yin 321 output
    while (n > 0){
        enqueue(Q, n%10);        //n yae remainer
        n = n/10;                   //12/10= 2 remainer or next num
    }


    return 0;
}

