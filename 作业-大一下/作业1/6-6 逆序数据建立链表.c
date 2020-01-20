#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

struct ListNode *createlist(){
	struct ListNode *head=NULL,*tail=NULL;
	int data;
	while(1){
		scanf("%d",&data);
		if(data==-1) return head;
		tail=(struct ListNode *)malloc(sizeof(struct ListNode));
		tail->data=data;
		tail->next=head;
		head=tail;
	}
}