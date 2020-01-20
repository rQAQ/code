//无论我们相距多远,我都想告诉你,我对你的心愿不会变 
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	double a;
	cin>>a;
	double ans;
	if(a<=150){
		ans+=a*0.4463;
	}else if(a>150&&a<=400){
		ans+=150*0.4463+(a-150)*0.4663;
	}else{
		ans+=150*0.4463+250*0.4663+(a-400)*0.5663;
	}
	int t=ans*100;
	//cout<<t<<endl;
	int s1=(ans*10+1)/1;
	int s2=(ans*10)/1;
	double ss1=s1;
	double ss2=s2;
	if(t%10>=5){
		ans=ss1/10;
	}else{
		ans=ss2/10;
	}
	cout<<ans;
	return 0;
} 
