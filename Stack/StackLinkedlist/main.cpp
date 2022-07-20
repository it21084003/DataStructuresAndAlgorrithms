#include "stdio.h"
#include "stdlib.h"
#define  RogueValue -9595

typedef struct node{            //Node Build
    int num;                    //no
    struct node *next;          //next
}Node, *NodePtr;

typedef struct  stackType{      //Stack Build
    NodePtr top;
}StackType, *Stack;

//stack new type
//init
Stack initStack(){
    //type and size ko ti ya mal
    //eg int sp
    Stack sp = (Stack)malloc(sizeof(StackType) );       //stack build

    sp -> top= NULL;            //Null ko check
    return sp;
}
//empty function
int empty(Stack S){
    return (S->top== NULL);    //S ye top ka NUll lr?
}
//push function
void push(Stack S,int n){
    NodePtr np = (NodePtr) malloc(sizeof (Node));       //node Build
    np->num = n;                    //no
    np->next = S->top;              //next
    S->top = np;

}
//pop function
//data output
int pop(Stack S){
    if(empty(S)){                       //data empty so yin ROgueValue return
        return RogueValue;
    }
    int hold = S->top->num;             //S>top>num htae data output
    NodePtr temp = S->top;              //local change
    S->top = S->top->next;              //local change
    free(temp);
    return hold;                        //data return
}
int main(){
    //int ma hote stack
    Stack initStack();
    int empty(Stack);
    void push(Stack , int );        //stack htae data input
    int pop(Stack);                 //data output
    int n = 0;

    Stack S=initStack();            //stack builded
    printf("Press 0 if you want to quit or push some data integers:");
    scanf("%d", &n);
    while (n != 0){
        push(S,n);                  //S htae ko n yae data input
        scanf("%d",&n);
    }
    printf("Data are in LIFO last in fast out\n");
    bool flag = empty(S);           //empty function ko call
    //data shi ma shi ckeck
    while(!empty(S)){
        printf("%d",pop(S));
        printf("\n");
    }

    return 0;
}