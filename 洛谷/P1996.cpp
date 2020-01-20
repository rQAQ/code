#include<cstdio>
#include<cstdlib>
#define len sizeof(node)

typedef struct node{
    int data;
    struct node *next;    
}*cllinklist;

node *pp;

void Initcllinklist(cllinklist *cl){
    *cl=(cllinklist)malloc(len);
    (*cl)->next=*cl;
}

void creatcllinklist(cllinklist cl,int n){
    node *rear,*s;
    rear=cl;//rear指针动态指向当前表尾，其初始值指向头结点 
    for(int i=1;i<=n;i++){
        s=(node *)malloc(len);
        s->data=i;
        rear->next=s;
        rear=s;
    }
    rear->next=cl->next;
}

void delecllinklist(cllinklist cl,int w){
    node *r;
    int cnt=0;
    while(cnt<w-2){
        pp=pp->next;
        cnt++;
    }
    printf("%d",pp->next->data);
    r=pp->next;
    pp->next=r->next;
    pp=pp->next;
    free(r);
}

int main(){
    int n,m;
    cllinklist cl;
    Initcllinklist(&cl);
    scanf("%d%d",&n,&m);
    creatcllinklist(cl,n);
    pp=cl->next;
    for(int i=0;i<n;i++){
       if(i) printf(" ");
       delecllinklist(cl,m);
    }
    free(cl);

    return 0;
}