#include"cstdio"
#include"iostream"
#include"algorithm"
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch=getchar();
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
	int b,e;
}a[1000005];

bool cmp(node a,node b){
if(a.e==b.e) return a.b>b.b;
	return a.e<b.e;
}

int n,mint,cnt;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i].b=read(),a[i].e=read();
	}
	sort(a,a+n,cmp);
	mint=a[0].e;
	for(int i=0;i<n;i++){
		if(a[i].b>=mint) cnt++,mint=a[i].e;
	}
	print(cnt+1);

	return 0;
}