#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

const int maxn=11000002;
char data[maxn<<1];
int p[maxn<<1],ans,cnt;

inline void manacher(){
	char ch=getchar();
	data[0]='~',data[cnt=1]='|';
	while(ch<'a'||ch>'z') ch=getchar();
	while(ch>='a'&&ch<='z') data[++cnt]=ch,data[++cnt]='|',ch=getchar();
}

int main(){
	manacher();
	for(int t=1,r=0,mid=0;t<=cnt;t++){
		if(t<=r) p[t]=min(p[(mid<<1)-t],r-t+1);
		while(data[t-p[t]]==data[t+p[t]]) ++p[t];
		if(p[t]+t>r) r=p[t]+t-1,mid=t;
		ans=p[t]>ans?p[t]:ans;
	}
	printf("%d",ans-1);

	return 0;
}