#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,ans;

struct node{
	int data,value;
}arr[1005];	

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

bool cmp(node a,node b){
	return a.value>b.value;
}

int main(){
	n=read();
	for(int i=0;i<n;i++){
		int a,b,c;
		scanf("%d-%d %d",&a,&b,&c);
		arr[a].data=a,arr[a].value+=c;
	}
	sort(arr,arr+1004,cmp);
	cout<<arr[0].data<<" "<<arr[0].value;

	return 0;
}