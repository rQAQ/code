#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

struct node
{
	int left=0,right=0,mid=0,t=0,p=0;
};

int n,l;
string t;

int main(){
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		l=t.size();
		node cnt;
		for(int j=0;j<l;j++){
			if(t[j]=='A'&&cnt.p==0&&cnt.t==0){
				cnt.left++;
				continue;
			}
			if(t[j]=='P'){
				cnt.p++;
				continue;
			}
			if(t[j]=='A'&&cnt.p==1&&cnt.t==0){
				cnt.mid++;
				continue;
			}
			if(t[j]=='T'&&cnt.mid>=1){
				cnt.t++;
				continue;
			}
			if(t[j]=='A'&&cnt.p==1&&cnt.t==1){
				cnt.right++;
				continue;
			}else break;
		}
		if(cnt.p==1&&cnt.t==1&&cnt.left*cnt.mid==cnt.right){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}

	return 0;
}