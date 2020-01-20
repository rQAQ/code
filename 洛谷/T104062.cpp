#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

struct node1{
	string quest,ans;
}s1[105];

struct node2{
	string quest,a,b,c,d;
}s2;

int n,q;

bool 
int main(){
	cin>>n>>q;
	for(int i=0;i<n;i++){
		cin>>s1[i].quest>>s1[i].ans;
	}
	for(int i=0;i<q;i++){
		cin>>s2.quest>>s2.a>>s2.b>>s2.c>>s2.d;
		for(int j=0;j<n;j++){
			if(s2.quest==s1[j].quest){
				if(s2.a==s1[j].ans) {cout<<"A";break;}
				if(s2.b==s1[j].ans) {cout<<"B";break;}
				if(s2.c==s1[j].ans) {cout<<"C";break;}
				if(s2.d==s1[j].ans) {cout<<"D";break;}
			}
		}
		cout<<endl;
	}

	return 0;
}