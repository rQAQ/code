#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

int m,n,k,a[1005];
stack<int> s;

int main(){
	scanf("%d%d%d",&m,&n,&k);
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		int p=0,q=1;
		while(s.size()) s.pop();
		while(p<n){
			if(q==a[p]&&s.size()<m) p++,q++;
			else if(s.size()&&s.top()==a[p]) s.pop(),p++;
			else if(s.size()<m-1&&p<n) s.push(q),q++;
			else break;
		}
		if(p<n) printf("NO\n");
		else printf("YES\n");
	}
	return 0;
}