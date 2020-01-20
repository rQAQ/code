#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;

int n,m,k,b[30005],f[30005],ans,cnt[30005];

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

int find(int k){
	if(f[k]==k) return k;
	return f[k]=find(f[k]);
}

int main(){
	n=read(),m=read();
	for(int i=0;i<=n;i++){
		f[i]=i;
	}
	for(int i=0;i<m;i++){
		k=read();
		for(int j=0;j<k;j++){
			b[j]=read();
			if(j) f[find(b[j])]=find(b[j-1]);
		}
	}
	for(int i=1;i<=n;i++){
		cnt[find(i)]++;
	}
	for(int i=0;i<=n;i++){
		ans=max(ans,cnt[i]);
	}
	print(ans);

	return 0;
}