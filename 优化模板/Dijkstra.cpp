#include <cstdio>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
const int inf=1e9+7;

int head[100010],cnt,s,m,n,dis[100010];

inline int read(){
	int w=0,x=0;char ch=0;
	while(!isdigit(ch)) w|=ch=='-',ch=getchar();
	while(isdigit(ch)) x=(x<<3)+(x<<1)+(ch^48),ch=getchar();
	return w?-x:x;
} 

struct edge{
	int to,w,next;
}e[500010]; 

void add(int u,int v,int w){
	e[++cnt].to =v;
	e[cnt].w =w;
	e[cnt].next =head[u];
	head[u]=cnt;
}

struct node{
	int u,d;
	friend bool operator <(const node &a,const node &b){
		return a.d >b.d ;
	}
}; 

void dj(){
	for(int i=1;i<=n;i++) dis[i]=inf;
	dis[s]=0;
	priority_queue<node>q;
	node x;
	x.u=s,x.d=0;
	q.push(x);
	while(!q.empty()){
		node fr=q.top();
		q.pop();
		int u=fr.u ,d=fr.d ;
		if(d!=dis[u]) continue;
		for(int i=head[u];i;i=e[i].next){
			int v=e[i].to ,w=e[i].w ;
			if(dis[u]+w<dis[v]){
				dis[v]=dis[u]+w;
				node y;
				y.u=v,y.d=dis[v];
				q.push(y); 
			} 
		}
	} 
}

int main(){
	n=read(),m=read(),s=read();
	for(int i=1;i<=m;i++){
		int u=read(),v=read(),w=read();
		add(u,v,w);
	}
	dj();
	for(int i=1;i<=n;i++){
		printf("%d ",dis[i]);
	}
	return 0;
}