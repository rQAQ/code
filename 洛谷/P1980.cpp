//可以一起去找太阳落下的小岛 
#include<cstdio>
#include<iostream>
#include<algorithm>
#include<algorithm> 
using namespace std;
int n,x,ans;
int main(){
	cin>>n>>x;
	for(int i=1;i<=n;i++){
		int t=i;
		while(t!=0){
			int s=t%10;
			t=t/10;
			if(s==x) ans++;
		}
	}
	cout<<ans;
	return 0;
}
