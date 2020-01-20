#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<map>
using namespace std;

struct node{
	string name;
	int num;
	double sum;
}a[100005];

bool cmp(node a,node b){
	if(a.num==b.num&&(int)a.sum==(int)b.sum) return a.name<b.name;
	else if((int)a.sum==(int)b.sum) return a.num<b.num;
	else return (int)a.sum>(int)b.sum;
}

int n,sum,f;

int main(){
	cin>>n;
	map<string,int>mp;
	for(int i=0;i<n;i++){
		string s,na;
		double x;
		cin>>s>>x>>na;
		for(int j=0;j<na.length();j++){
			na[j]=tolower(na[j]);
		}
		if(s[0]=='B') x/=1.5;
		if(s[0]=='T') x*=1.5;
		if(!mp.count(na)){
			mp[na]=sum;
			a[sum].name=na;
			sum++;
		}
		a[mp[na]].sum+=x;
		a[mp[na]].num++;
	}
	sort(a,a+sum,cmp);
	cout<<sum<<endl<<"1"<<" "<<a[0].name<<" "<<(int)a[0].sum<<" "<<a[0].num<<endl;
	for(int i=1;i<sum;i++){
		if((int)a[f].sum!=(int)a[i].sum){
			f=i;		
		}
		cout<<f+1<<" "<<a[i].name<<" "<<(int)a[i].sum<<" "<<a[i].num<<endl;
	}

	return 0;
}