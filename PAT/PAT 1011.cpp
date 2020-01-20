#include<cstdio>
#include<iostream>
using namespace std;

int main(){
    long long a,b,c;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a>>b>>c;
        if(a+b>c) cout<<"Case #"<<i<<": true"<<endl;
        else cout<<"Case #"<<i<<": false"<<endl;
    }
    
    return 0;
}