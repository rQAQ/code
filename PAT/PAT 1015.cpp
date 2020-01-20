#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	int h,d,c,std;
}p[100005];

int n,l,h,m;

bool cmp(node a,node b){
	if(a.std==b.std){
		if(a.d+a.c==b.d+b.c){
			if(a.d==b.d) return a.h<b.h;
			return a.d>b.d;
		}
		return a.d+a.c>b.d+b.c;
	}
	return a.std<b.std;
}

int main(){
	cin>>n>>l>>h;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		if(b>=l&&c>=l){
			p[m].h=a;
			p[m].d=b;
			p[m].c=c;
			if(p[m].d>=h&&p[m].c>=h) p[m].std=1;
			else if(p[m].d>=h&&p[m].c<h) p[m].std=2;
			else if(p[m].d<h&&p[m].c<h&&p[m].d>=p[m].c) p[m].std=3;
			else p[m].std=4;
			m++;
		}
	}

	sort(p,p+m,cmp);

	cout<<m<<endl;
	for(int i=0;i<m;i++){
		cout<<p[i].h<<" "<<p[i].d<<" "<<p[i].c<<endl;
	}

	return 0;
}