#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int a[100005];

inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

int n;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i]=read();
	}
	sort(a,a+n);
	if(a[0]>n) cout<<n<<endl;
	else for(int i=n-1;i>=0;i--)
			if(a[i]<=n-i){
				cout<<n-i-1;
				return 0;
			}
}


