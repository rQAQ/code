#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>	
using namespace std;

struct node
{
	string name;
	int sum;
}A[100005];

int n,sum,cnt;

bool cmp(node x,node y){
	return x.sum<y.sum;
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b,c;
		string tmp;
		cin>>tmp;
		scanf("%d/%d/%d",&a,&b,&c);
		sum=a*365+b*30+c;
		if(a>2014||(a==2014&&b>9)||(a==2014&&b==9&&c>6)||a<1814||(a==1814&&b<9)||(a==1814&&b==9&&c<6)){
		}else{
			A[cnt].name=tmp;
			A[cnt].sum=sum;
			cnt++;
		}
	}

	sort(A,A+cnt,cmp);
	
	if(cnt==0) cout<<cnt;
	else cout<<cnt<<" "<<A[0].name<<" "<<A[cnt-1].name;

	return 0;
}