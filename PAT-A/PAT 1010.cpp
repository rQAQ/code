#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#define ll long long
using namespace std;

ll fun(char ch){
	return isdigit(ch)?ch-'0':ch-'a'+10;
}

ll strnum(string str,int radix){
    ll sum=0,index=0;
    for(auto t=str.rbegin();t!=str.rend();t++){
        sum+=fun(*t)*pow(radix,index++);
    }
    return sum;
}

ll fradix(string str,ll num){
    char ch=*max_element(str.begin(),str.end());
    ll low=fun(ch)+1;
    ll high=max(low,num),ans=-1;
    while(low<=high){
        ll mid=(low+high)>>1,t=strnum(str,mid);
        if(t<0||t>num) high=mid-1;
        else if(t<num) low=mid+1;
        else{
            ans=mid;
        	break;
        }
    }
    return ans;
}

string s1,s2;
int flag,radix,res;

int main(){
   	cin>>s1>>s2>>flag>>radix;
    res=fradix((flag==1?s2:s1),flag==1?strnum(s1,radix):strnum(s2,radix));
    res!=-1?printf("%d\n",res):printf("Impossible\n");

    return 0;
}