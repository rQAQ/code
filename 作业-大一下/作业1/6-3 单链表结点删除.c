#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
     struct ListNode *p = L;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist(){
    struct ListNode *head,*p,*tail;
    head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next=NULL;
    tail=head;
    while (1){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        scanf("%d",&p->data);
        if(p->data==-1) break;
        tail->next=p;
        tail=p;
    }
    tail->next=NULL;
    return head;
}

struct ListNode *deletem( struct ListNode *L, int m ){
    struct ListNode *head,*p,*tail;
    head=L,p=L->next,tail=L;
    while(p){
        if(p->data==m){
            tail->next=p->next;
            p=tail->next;
            continue;
        }
        tail=tail->next;
        p=p->next;
    }
    return head->next;
}