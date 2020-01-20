//此剑抚平天下不平事,此剑无愧世间有愧人 
#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
struct num{
	int a,b,c,nu;
};
num n1,n2,n3;
void method(num &n){
	n.a=n.nu/100;
	n.b=(n.nu%100)/10;
	n.c=(n.nu%10);
	//cout<<n.a<<endl<<n.b<<endl<<n.c<<endl;
}
int flag; 
void jud(num n1,num n2,num n3){
	int s[10];
	for(int i=1;i<=9;i++){
		s[i]=0;
	}
	s[n1.a]++;
	s[n1.b]++;
	s[n1.c]++;
	s[n2.a]++;
	s[n2.b]++;
	s[n2.c]++;
	s[n3.a]++;
	s[n3.b]++;
	s[n3.c]++;
	for(int i=1;i<=9;i++){
	//	cout<<s[i]<<endl;
		if(s[i]!=1){
			flag=0;
		}
	}
	//cout<<flag;
}
int main(){
	flag=1;
	for(int i=1;i<=3;i++){
		for(int j=1;j<=9;j++){
			for(int k=1;k<=9;k++){
				n1.a=i;
				n1.b=j;
				n1.c=k;
				n1.nu=100*i+10*j+k;
				n2.nu=2*n1.nu;
				n3.nu=3*n1.nu;
				method(n2);
				//cout<<"wapo"<<n2.a<<endl;
				method(n3);
				jud(n1,n2,n3);
				if(flag==1&&n2.nu<=999&&n3.nu<=999){
					cout<<n1.nu<<" "<<n2.nu<<" "<<n3.nu<<endl;
				}
				flag=1;
			}
		}
	}
	return 0;
} 
