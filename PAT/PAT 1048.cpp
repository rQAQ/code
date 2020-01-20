#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string A;
    string B;
    int num;
    char ref[13] = {'0','1','2','3','4','5','6','7','8','9','J','Q','K'};
    string c = "";
    cin>>A>>B;
    if(B.length()<A.length()){ 
        for(int i=B.length();i<A.length();i++){
            B = "0"+B;
        }
    }
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    for(int i=0;i<A.length();i++){
        if((i+1)%2!=0){
            num = ((A[i]-'0'+B[i]-'0')%13);
            c += ref[num];
        }else{
            num = B[i]-A[i];
            if(num<0)num += 10;
            c += ref[num];
        }
    }
    if(A.length()<B.length()){  //补全位数B大于A 
        for(int i=A.length();i<B.length();i++){
            c += B[i];
        }
    }
    reverse(c.begin(),c.end());
    cout<<c;
    return 0;
}