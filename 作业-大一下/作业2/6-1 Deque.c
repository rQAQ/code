#include <stdio.h>
#include <stdlib.h>

#define ElementType int
#define ERROR 1e5
typedef enum { push, pop, inject, eject, end } Operation;

typedef struct Node *PtrToNode;
struct Node {
    ElementType Element;
    PtrToNode Next, Last;
};
typedef struct DequeRecord *Deque;
struct DequeRecord {
    PtrToNode Front, Rear;
};
Deque CreateDeque();
int Push( ElementType X, Deque D );
ElementType Pop( Deque D );
int Inject( ElementType X, Deque D );
ElementType Eject( Deque D );

Operation GetOp();          /* details omitted */
void PrintDeque( Deque D ); /* details omitted */

int main()
{
    ElementType X;
    Deque D;
    int done = 0;

    D = CreateDeque();
    while (!done) {
        switch(GetOp()) {
        case push: 
            scanf("%d", &X);
            if (!Push(X, D)) printf("Memory is Full!\n");
            break;
        case pop:
            X = Pop(D);
            if ( X==ERROR ) printf("Deque is Empty!\n");
            break;
        case inject: 
            scanf("%d", &X);
            if (!Inject(X, D)) printf("Memory is Full!\n");
            break;
        case eject:
            X = Eject(D);
            if ( X==ERROR ) printf("Deque is Empty!\n");
            break;
        case end:
            PrintDeque(D);
            done = 1;
            break;
        }
    }
    return 0;
}

Deque CreateDeque(){
    PtrToNode Node=(PtrToNode)malloc(sizeof(struct Node));
    Deque D=(Deque)malloc(sizeof(struct DequeRecord));
    Node->Next=Node->Last=NULL;
    D->Rear=D->Front=Node;
    return D;
}

int Push( ElementType X, Deque D ) {
    PtrToNode p=(PtrToNode)malloc(sizeof(struct Node));
    if(p){
        p->Element=X;
        p->Last=D->Front;
        p->Next=D->Front->Next;
        if(D->Front->Next) D->Front->Next->Last=p ;
        else D->Rear=p;
        D->Front->Next=p;
        return 1;
    }else return 0;
}

ElementType Pop( Deque D ) {
    ElementType val;
    PtrToNode p=D->Front->Next;
    if(p){
        val=p->Element;
        if(p==D->Rear) {
            D->Front->Next=NULL;
            D->Rear=D->Front;
        }
        else {
            D->Front->Next->Next->Last=D->Front;
            D->Front->Next=D->Front->Next->Next;
        }
        free(p);    
        return val;
    }else return ERROR;
    
}
int Inject( ElementType X, Deque D ) {
    PtrToNode p=(PtrToNode)malloc( sizeof(struct Node) );
    if(p){
        p->Element=X;
        p->Next=NULL;
        if(D->Front==D->Rear) {
            D->Front->Next=p;
            p->Last=D->Front;
        }else{
            D->Rear->Next=p;
            p->Last=D->Rear;    
        }
        D->Rear=p;
        return 1;
    }else return 0;
}

ElementType Eject( Deque D ) {
    ElementType val;
    if(D->Front==D->Rear) return ERROR;
    else{
        val=D->Rear->Element;
        if(D->Front->Next==D->Rear){
            free(D->Rear);
            D->Front->Next=NULL;
            D->Rear=D->Front;
        }else{
            D->Rear=D->Rear->Last;
            free(D->Rear->Next);
            D->Rear->Next=NULL;
        }
        return val;
    }
}