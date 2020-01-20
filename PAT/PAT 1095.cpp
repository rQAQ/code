#include<cstdio>
#include<cstring>
#include<iostream>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct node{
    char level;
    int room,date,id,score;
}a[10005];

bool cmp(node a,node b){
    if(a.score!=b.score) return a.score>b.score;
    return a.room<b.room;
}

int n,m,f,type;

int main(){
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        getchar();
        scanf("%c%3d%6d%3d%d",&a[i].level,&a[i].room,&a[i].date,&a[i].id,&a[i].score);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<m;i++){
        f=1;
        scanf("%d",&type);
        if(type==1){
            char level;
            getchar();
            scanf("%c",&level);
            printf("Case %d: %d %c\n",i+1,type,level);
            for(int j=0;j<n;j++)
                if(a[j].level==level){
                    f=0;
                    printf("%c%03d%06d%03d %d\n",a[j].level,a[j].room,a[j].date,a[j].id,a[j].score);
                }
            if(f) printf("NA\n");
        }else if(type==2){
            int room,sum=0,cnt=0;
            scanf("%d",&room);
            printf("Case %d: %d %d\n",i+1,type,room);
            for(int j=0;j<n;j++)
                if(a[j].room==room){
                    f=0;
                    cnt++;
                    sum+=a[j].score;
                }
            if(f) printf("NA\n");
            else printf("%d %d\n",cnt,sum);
        }else if(type==3){
            int date,maxn=0,rooms[1000]={0};
            scanf("%d",&date);
            printf("Case %d: %d %06d\n",i+1,type,date);
            for(int j=0;j<n;j++)
                if(a[j].date==date){
                    f=0;
                    rooms[a[j].room]++;
                    if(maxn<rooms[a[j].room]) maxn=rooms[a[j].room];
                }
            if(f) printf("NA\n");
            else{
                for(int c=maxn;c>0;c--){
                    for(int r=101;r<1000;r++){
                        if(rooms[r]==c) printf("%d %d\n",r,c);
                    }
                }
            }
        }
    }

    return 0;
}