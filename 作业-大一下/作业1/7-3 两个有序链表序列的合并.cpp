#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

struct Node {
    int Data;
    Node *Next;
};
typedef Node* List;

List L1,L2,L;

List Read(){
    List head=(List)malloc(sizeof(List)),tail;
    tail=head;
    while(1){
        List p=(List)malloc(sizeof(List));
        p->Next=NULL;
        scanf("%d",&(p->Data));
        if(p->Data==-1) break;
        tail->Next=p;
        tail=p;
    }
    tail->Next=NULL;
    return head;
}

void Print(List L){
    if(L->Next==NULL) printf("NULL\n");
    int f=0;
    L=L->Next;
    while(L){
        if(f) printf(" ");
        printf("%d",L->Data);
        L=L->Next;
        f=1;
    }
}

List Merge( List L1, List L2 ){
    List p1=L1->Next,p2=L2->Next,p;
    List L=(List)malloc(sizeof(List));
    L->Data=L1->Data+L2->Data;
    p=L;
    while(p1!=NULL&&p2!=NULL){
        if((p1->Data)<(p2->Data)){
            p->Next=p1;
            p=p->Next;
            p1=p1->Next;
        }else{
            p->Next=p2;
            p=p->Next;
            p2=p2->Next;
        }
    }
    if(p1==NULL) p->Next=p2;
    else if(p2==NULL) p->Next=p1;
    return L;
}

int main(){
    L1 = Read(),L2=Read();
    L=Merge(L1,L2);
    Print(L);

    return 0;
}