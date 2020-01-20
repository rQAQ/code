#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
	int name,score;
}b[100005];

int n,a[100005],cnt1,cnt2;

bool cmp(node a,node b){
	return a.score>b.score;
}

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		int t,s;
		cin>>t>>s;
		a[t]+=s;
		cnt1>=t?cnt1=cnt1:cnt1=t;
	}

	for(int i=0;i<=cnt1;i++){
		if(a[i]){
			b[cnt2].name=i;
			b[cnt2].score=a[i];
			cnt2++;
		}
	}
	sort(b,b+cnt2,cmp);

	cout<<b[0].name<<" "<<b[0].score;

	return 0;
}