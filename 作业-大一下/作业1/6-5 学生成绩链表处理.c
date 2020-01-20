#include <stdio.h>
#include <stdlib.h>

struct stud_node {
     int    num;
     char   name[20];
     int    score;
     struct stud_node *next;
};

struct stud_node *createlist();
struct stud_node *deletelist( struct stud_node *head, int min_score );

int main()
{
    int min_score;
    struct stud_node *p, *head = NULL;

    head = createlist();
    scanf("%d", &min_score);
    head = deletelist(head, min_score);
    for ( p = head; p != NULL; p = p->next )
        printf("%d %s %d\n", p->num, p->name, p->score);

    return 0;
}

struct stud_node *createlist()
{
    struct stud_node *head,*p,*tail;
    head=(struct stud_node*)malloc(sizeof(struct stud_node));
    p=head;
    tail=head;
    scanf("%d",&head->num);
    while(p->num!=0){
        scanf("%s%d",p->name,&p->score);
        tail->next=p; 
        tail=p;
        tail->next=NULL;
        p=(struct stud_node*)malloc(sizeof(struct stud_node));
        scanf("%d",&p->num);
    }
    return head;
}

struct stud_node *deletelist( struct stud_node *head, int min_score )
{
    struct stud_node *p1,*p2;
    if(head==NULL) return NULL;
    for(p1=head;p1!=NULL;p1=p1->next){
        if(p1->score<min_score){
            if(p1==head) head=head->next;   
            else p2->next=p1->next;
        }
        else p2=p1;
    }
    return head;    
}