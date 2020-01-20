#include<cstdio>
#include<iostream>
#include<algorithm>
#include<queue>
#include<cmath>
using namespace std;
const int inf=1e9+7;//极大值

int head[100010],cnt,m,n,dis[505],c1,c2;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}//读入优化!

struct edge{
	int to,w,next;
}e[500005];//链式前向星

struct wtf{//好变量名233 
	int t,r,rs;
}r[505];

void add(int u,int v,int w){
	e[++cnt].to=v;
	e[cnt].w=w;
	e[cnt].next=head[u];
	head[u]=cnt;
}//加边

struct node{
	int u,d;
	friend bool operator<(const node &a,const node &b){
		return a.d>b.d;
	}
};

void Dijkstra(){
	for(int i=0;i<n;i++) dis[i]=inf;
	dis[c1]=0;
	priority_queue<node>q;
	node x;
	x.u=c1,x.d=0;
	q.push(x);
	while(!q.empty()){
		node fr=q.top();
		q.pop();
		int u=fr.u,d=fr.d;
		if(d!=dis[u]) continue;
		for(int i=head[u];i;i=e[i].next){
			int v=e[i].to,w=e[i].w;
			if(dis[u]+w==dis[v]) r[v].t+=r[u].t,r[v].rs=max(r[v].rs,r[u].rs+r[v].r);//更新路
			if(dis[u]+w<dis[v]){
				r[v].t=r[u].t;//更新路
				r[v].rs=r[u].rs+r[v].r;
				dis[v]=dis[u]+w;
				node y;
				y.u=v,y.d=dis[v];
				q.push(y);
			}
		}
	}
}

int main(){
	n=read(),m=read(),c1=read(),c2=read();
	for(int i=0;i<n;i++) r[i].rs = r[i].r=read();
	for(int i=1;i<=m;i++){
		int u=read(),v=read(),w=read();
		add(u,v,w);
		add(v,u,w);
	}
	r[c1].t=1;
	Dijkstra();
	cout<<r[c2].t<<" "<<r[c2].rs<<endl;

	return 0;
}