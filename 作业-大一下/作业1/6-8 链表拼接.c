#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist(); /*裁判实现，细节不表*/
struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2);
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
    struct ListNode  *list1, *list2;

    list1 = createlist();
    list2 = createlist();
    list1 = mergelists(list1, list2);
    printlist(list1);
	
    return 0;
}

struct ListNode *mergelists(struct ListNode *list1, struct ListNode *list2){
    struct ListNode *cmp,*p,*head=NULL;
    int a[10000],cnt=0;
    cmp=list1;
    while(cmp!=NULL){
        a[cnt++]=cmp->data;
        cmp=cmp->next;
    }
    cmp=list2;
    while(cmp!=NULL){
        a[cnt++]=cmp->data;
        cmp=cmp->next;
    }
    for(int i=0;i<cnt-1;i++){
        for(int j=0;j<cnt-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(int i=0;i<cnt;i++){
        p=(struct ListNode*)malloc(sizeof(struct ListNode));
        p->data=a[i];
        p->next=NULL;
        if(head==NULL) head=p;
        else cmp->next=p;
        cmp=p;
    }
    return head;
}