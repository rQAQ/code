//Ը��������һ����Ժ�����Ҫ�����ط� 
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	b+=a*60;
	d+=c*60;
	int ans1=(d-b)/60;
	int ans2=(d-b)%60;
	cout<<ans1<<" "<<ans2;
	return 0;
}
