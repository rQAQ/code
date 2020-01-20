#include<cstdio>
#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

long long gcd(long long t1,long long t2){  //求最大公约数
    return t2==0?t1:gcd(t2,t1%t2);
}

int jian(long long a,long long b){   //判断分母是否为0
    long long t=0,x=0;
    if(!b){
      cout<<"Inf";
      return 0;
    }
    long long k=gcd(abs(a),b);
    a=a/k;
    b=b/k;
    t=abs(a)/b;
    x=abs(a)-t*b; 
    if(a<0){
      if(t&&x) printf("(-%lld %lld/%lld)",t,x,b);
      if(t&&!x) printf("(-%lld)",t);
      if(!t&&x) printf("(-%lld/%lld)",x,b);
      if(!t&&!x) printf("0");
    }
    if(a>=0){
      if(t&&x) printf("%lld %lld/%lld",t,x,b);
      else if(t&&!x) printf("%lld",t);
      else if(!t&&x) printf("%lld/%lld",x,b);
      else printf("0");
    }
    return 0;
}

int main(){
    long long a1,b1,a2,b2;
    scanf("%lld/%lld",&a1,&b1);
    scanf("%lld/%lld",&a2,&b2);
    jian(a1,b1);
    cout<<' '<<'+'<<' ';
    jian(a2,b2);
    cout<<' '<<'='<<' ';
    jian(a1*b2+a2*b1,b1*b2);
    cout<<endl;
    jian(a1,b1);cout<<' '<<'-'<<' ';
    jian(a2,b2);
    cout<<' '<<'='<<' ';
    jian(a1*b2-a2*b1,b1*b2);
    cout<<endl;
    jian(a1,b1);
    cout<<' '<<'*'<<' ';
    jian(a2,b2);
    cout<<' '<<'='<<' ';
    jian(a1*a2,b1*b2);
    cout<<endl;
    jian(a1,b1);
    cout<<' '<<'/'<<' ';
    jian(a2,b2);
    cout<<' '<<'='<<' ';
    if(a2<0) jian(a1*b2*a2/abs(a2),b1*abs(a2));
    else jian(a1*b2,b1*a2);
    cout<<endl;

  return 0;
}