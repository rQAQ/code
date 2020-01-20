#include <cstdio>
#include <iostream>
#include <algorithm>
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

int main(){
	n=read();
	for(int i=0;i<n;i++) cout<<"Shazam!"<<endl;

	return 0;
}