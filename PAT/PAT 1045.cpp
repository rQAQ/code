#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

inline int read(){
	int s=0,w=1;
	char ch;
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
	int value;
	int maxn;
	int minn;
}a[100005];

int n,cnt,ans[100005];

int main(){
	n=read();
	for(int i=0;i<n;i++){
		a[i].value=read();
	}
	a[0].maxn=a[0].value;
	a[n-1].minn=a[n-1].value;
	for(int i=1;i<n;i++){
		a[i].maxn=a[i-1].maxn>=a[i].value?a[i-1].maxn:a[i].value;
	}
	for(int i=n-2;i>=0;i--){
		a[i].minn=a[i+1].minn<=a[i].value?a[i+1].minn:a[i].value;
	}
	for(int i=0;i<n;i++){
		if(i==0){
			if(a[i].minn>=a[i].value) ans[cnt++]=a[i].value;
		}else if(i==n-1){
			if(a[i].maxn<=a[i].value) ans[cnt++]=a[i].value;
		}else{
			if(a[i].maxn<=a[i].value&&a[i].minn>=a[i].value) ans[cnt++]=a[i].value;
		}
	}
	print(cnt);
	cout<<endl;
	if(cnt==0) printf("\n");
	else{
		for(int i=0;i<cnt;i++){
			if(i) cout<<" ";
			print(ans[i]);
		}
	}

	return 0;
}