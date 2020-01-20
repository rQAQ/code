#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n;

struct node{
	int s,h,ans;	
}a,b;	

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

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a.s=read(),a.h=read();
		b.s=read(),b.h=read();
		int sum=a.s+b.s;
		if(sum==a.h&&sum!=b.h){
			b.ans++;
		}
		if(sum!=a.h&&sum==b.h){
			a.ans++;
		}
	}
	print(a.ans);
	cout<<" ";
	print(b.ans);

	return 0;
}	