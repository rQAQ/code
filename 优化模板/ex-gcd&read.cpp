#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,ans;

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

int gcd(int x,int y){
	return y?gcd(y,x%y):x;
}

int lcm(int x,int y){
	return x*y/gcd(x,y);
}

int main(){
	n=read();
	for(int i=1;i<=n;i++){
		int tmp=read();
		if(tmp<0) tmp=-tmp;
		ans=gcd(ans,tmp);
	}
	printf("%d",ans);
	
	return 0; 
}