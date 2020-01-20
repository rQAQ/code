#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *reverse( struct ListNode *head );
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
    struct ListNode  *head;

    head = createlist();
    head = reverse(head);
    printlist(head);
	
    return 0;
}

struct ListNode *reverse( struct ListNode *head ){
    struct ListNode *p,*q=head,*tail=NULL;
    while(q){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->data=q->data;
        if(!tail) p->next=NULL;
        else p->next=tail; 
        tail=p;
        q=q->next;
    }
    return tail;
}