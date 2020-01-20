#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,a[300005],cnt;
long long sum;
double ans;

inline int read(){
	int s=0,w=1;
	char ch;
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
	while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
	return s*w;
}

bool cmp(int a,int b){
	return a>b;
}

long long fp(long long x,long long n){
	long long res=1;
	while(n>0){
		if(n&1) res*=x;
		x*=x;
		n>>=1;
	}
	return res;
}

int main(){
	n=read();
	for(int i=0;i<n;i++) a[i]=read();
	sort(a,a+n,cmp);
	for(int i=0;i<n;i++){
		sum+=a[i];
		cnt++;
		if(ans>((double)sum/cnt)*sum) break;
		else ans=((double)sum/cnt)*sum;
	}
	printf("%.8lf\n",ans);

	return 0;
}