#include<iostream>
#include<string>
#include<cctype>
using namespace std;

string s1,s2,ans;

int main(){
	cin>>s1>>s2;
	for(int i=0;i<s1.length();i++){
		if(s2.find(s1[i])==string::npos&&ans.find(toupper(s1[i]))==string::npos){
			ans+=toupper(s1[i]);
		}
	}
	
	cout<<ans;
	
	return 0;
}