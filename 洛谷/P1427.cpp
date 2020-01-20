//就当一切无法重来
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-') w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
} 
long long s[105];
int l;
int main(){
	for(int i=1;;i++){
		s[i]=read();
		if(s[i]==0){
			l=i;
			break;
		}
	}
	for(int i=l-1;i>=1;i--){
		cout<<s[i]<<" ";
	}
	return 0;
}
