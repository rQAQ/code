#include<cstdio>
#include<iostream>
#include<algorithm>
#include<string>	
using namespace std;

string str;
int a[4]={0,0,0,0};
int maxn=0,minn=0,ch=0;

bool cmp(int a,int b){
	return a>b;
}

int main(){
	cin>>str;
	int len=str.length();
	for(int i=0;i<len;i++){
		a[i]=str[i]-'0';
	}

	if(a[1]==a[2]&&a[2]==a[3]&&a[3]==a[0]) cout<<str<<" - "<<str<<" = "<<"0000";
	else{
		while(ch!=6174){
			sort(a,a+4,cmp);
			for(int i=0;i<4;i++){
				maxn=10*maxn+a[i];
				minn=10*minn+a[3-i];
			}
			ch=maxn-minn;
			printf("%04d - %04d = %04d\n",maxn,minn,ch);
			a[3]=ch%10;
			a[2]=(ch/10)%10;
			a[1]=(ch/100)%10;
			a[0]=ch/1000;
			maxn=0;
			minn=0;
		}
	}

	return 0;
}