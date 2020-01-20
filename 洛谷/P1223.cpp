#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

void print(int x){
    if(x<0) putchar('-'),x=-x;
    if(x>9) print(x/10);
    putchar(x%10+'0');
}

struct node{
	int id;
	int time;
}a[1005];

bool cmp(node a,node b){
	return a.time<b.time;
}
int n;
double ans,cnt;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i].id=i;
		a[i].time=read();
	}
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		if(i) printf(" ");
		print(a[i].id+1);
		cnt+=(double)a[i].time;
		ans+=cnt;
	}
	ans-=cnt;
	ans/=n;
	printf("\n%.2lf",ans);

	return 0;
}