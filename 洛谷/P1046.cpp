//我要用什么样的速度，才能与你相遇
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int s[10];
int ans,h; 
inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}
int main(){
	for(int i=0;i<=9;i++){
		s[i]=read();
	}
	h=read()+30;
	ans=0;
	for(int i=0;i<=9;i++){
		if(s[i]<=h){
			ans++;
		}
	}
	cout<<ans;
	return 0;
} 
