#include<stdio.h>
#include<stdlib.h>
#define len sizeof(node)

typedef struct node{
    int data;
    struct node *next;    
}*cllinklist;

void Initcllinklist(cllinklist *cl){
    *cl=(cllinklist)malloc(len);
    (*cl)->next=*cl;
}

void creatcllinklist(cllinklist cl,int n){
    node *rear,*s;
    rear=cl;
    int flag=1,x;
    for(register int i=0;i<n;i++){
        scanf("%d",&x);
        s=(node *)malloc(len);
        s->data=x;
        rear->next=s;
        rear=s;
    }
    rear->next=cl->next;
}

void printcllinklist(cllinklist cl,int n){
    node *p;
    p=cl->next;
    for(int i=0;i<n;i++,p=p->next){
        printf("%d ",p->data);
    }
}

void incllinklist(cllinklist cl,int w,int v){
    node *p,*s;
    int cnt=0;
    p=cl;
    while(p->next!=cl&&cnt<w-1){
        cnt++;
        p=p->next;
    }
    s=(node *)malloc(len);
    s->data=v;
    s->next=p->next;
    p->next=s;
}

void delecllinklist(cllinklist cl,int w){
    node *p,*r;
    p=cl;
    int cnt=0;
    if(w<0) return;
    while(p->next!=cl&&cnt<w-1){
        p=p->next;
        cnt++;
    }
    if(p->next==cl) return;
    r=p->next;
    p->next=r->next;

    free(r);
}

int lengthcllinklist(cllinklist cl){
    int cnt=0;
    node *p;
    p=cl->next;
    while(p!=cl){
        cnt++;
        p=p->next;
    }
    return cnt;
}

int main(){
    int n,w,v;
    cllinklist cl;
    Initcllinklist(&cl);
    scanf("%d",&n);
    creatcllinklist(cl,n);
    scanf("%d%d",&w,&v);
    incllinklist(cl,w,v);
    scanf("%d",&w);
    delecllinklist(cl,w);
    printcllinklist(cl,n);
    free(cl);

    return 0;
}