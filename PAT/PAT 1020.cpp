#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int n,cnt;

struct node
{
	double t,w,per;
}s[1005];

bool cmp(node a,node b){
	return a.per>b.per;
}

double sum,d;

int main(){
	cin>>n>>d;
	for(int i=0;i<n;i++){
		cin>>s[i].t;
	}
	for(int i=0;i<n;i++){
		cin>>s[i].w;
		s[i].per=s[i].w/s[i].t;
	}
	sort(s,s+n,cmp);
	while(d){
		if(d<=s[cnt].t){
			sum+=s[cnt].per*d;
			d=0;
		}else{
			sum+=s[cnt].w;
			d-=s[cnt].t;
			cnt++;
			if(cnt>n) break;
		}
	}
	printf("%.2f",sum);

	return 0;
}