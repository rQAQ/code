#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();
struct ListNode *deleteeven( struct ListNode *head );
void printlist( struct ListNode *head )
{
     struct ListNode *p = head;
     while (p) {
           printf("%d ", p->data);
           p = p->next;
     }
     printf("\n");
}

int main()
{
    struct ListNode *head;

    head = createlist();
    head = deleteeven(head);
    printlist(head);

    return 0;
}

struct ListNode *createlist(){
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

struct ListNode *deleteeven( struct ListNode *head ){
    struct ListNode *p=head,*q;
    while(head&&head->data%2==0) head=head->next;
    p=head;
    while(p&&p->next){
        while(p->next&&p->next->data%2==0){
            q=p->next;
            p->next=q->next;
        }
        p=p->next;
    }
    return head;
}