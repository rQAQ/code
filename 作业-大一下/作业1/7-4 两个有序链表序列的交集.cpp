#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;

struct Node{
    int Data;
    struct Node* Next;
};
typedef Node* List;

void Insert(List L,int t){
    List p=(List)malloc(sizeof(List));
    p->Data=t;
    p->Next=L->Next;
    L->Next=p;
}

List Search(List L1,List L2,List L3){
    List head=(List)malloc(sizeof(List)),tail;
    tail=head;
    List p1=L1->Next,p2=L2->Next;
    while(p1!=NULL&&p2!=NULL){
        if(p1->Data<p2->Data){
            p1=p1->Next;
        }else if(p1->Data>p2->Data){
            p2=p2->Next;
        }else{
            tail->Next=p1;
            tail=p1;
            p1=p1->Next;
            p2=p2->Next;
        }
    }
    return head;
}

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

int main(){
    List L1,L2,L3,tail;
    L1=Read(),L2=Read();
    if((!L1)||(!L1->Next)||(!L2)||(!L2->Next)){
        printf("NULL");
        return 0;
    }
    L3=Search(L1,L2,L3);
    if((!L3)||(!L3->Next)){
        printf("NULL");
        return 0;
    }
    Print(L3);

    return 0;
}