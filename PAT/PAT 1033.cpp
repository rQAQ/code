#include<cstdio>
#include <iostream>
#include <algorithm>
#include<string>
using namespace std;

string s1,s2;
int flag,sum,len;

int main(){
    getline(cin,s1);
    getline(cin,s2);

    len=s2.length();
    if(s1.find('+')!=string::npos) flag=1;
    for(int i=0;i<len;i++){
        if(s2[i]>='a'&&s2[i]<='z'){
            if(s1.find(s2[i]-32)==string::npos){
                cout<<s2[i];
                sum=1;
            }
        }
        else if(s1.find(s2[i])==string::npos){
            if(s2[i]>='A'&&s2[i]<='Z'&&flag) continue;
            else{
                cout<<s2[i];
                sum=1;
            }
        }
    }
    if(!sum) cout<<endl;
    
    return 0;
}