#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

int n;

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

string run(int x,int i=0,string s=string("")){
    if(x==0)return string("0");
    do if(x&1) s=(i==1?"2":"2("+run(i)+")")+(s==""?"":"+")+s;
    while(++i,x>>=1);
    return s;
}

int main(){
	n=read();
	cout<<run(n)<<endl;

	return 0;
}