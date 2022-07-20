#include "stdio.h"
#include "stdlib.h"
#define  RogueValue -9595
#define stackSize 10

typedef struct {            //stack 1ku mhar top and arr 2ku pr ya mal
    int top;                //top
    int st[stackSize];      //arr

}Stacktype, *Stack;     //stacktype and stackPointer
                        //stack new type
//init
Stack initStack(){
    //type and size ko ti ya mal
    //eg int sp
    Stack sp = (Stack)malloc(sizeof(Stacktype) );

    sp -> top=-1;
    return sp;
}
//empty function
int empty(Stack S){
    return (S->top==-1);    //s ye top ka -1 lr?
}
//push function
void push(Stack S,int n){
    if(S->top == stackSize-1){       //stack overflow lr check mal
        printf("\n Stack OverFlow\n");
        exit(1);                //exit
    }
    ++(S->top);                       //9 hti yout yin stop

    S->st[S->top] = n;                 //S>st>top htae data input



}
//pop function
//data output
int pop(Stack S){
    if(empty(S)){                       //data empty so yin ROgueValue return
        return RogueValue;
    }
    int hold = S->st[S->top];           //S>st>top htae data output
    --(S->top);                         //9 top 1
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