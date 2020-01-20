#include<cstdio>
#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;

struct node{
	char A,B,C;
	int n;
}p,t;

void Hanoi(int n){
    stack<node> s;
    p.n=n;p.A='a';p.B='b';p.C ='c';
    s.push(p);
    while(s.size()){
        p=s.top(),s.pop();
        if(p.n==1) printf("%c -> %c\n",p.A,p.C);
        else{
            t.n=p.n-1;
            t.A=p.B;t.B=p.A;t.C=p.C;
            s.push(t);
            t.n=1;
            t.A=p.A;t.B=p.B;t.C=p.C;
            s.push(t);
            t.n=p.n-1;
            t.A=p.A;t.B=p.C;t.C=p.B;
            s.push(t);
        }
    }
}

int n;

int main(){
	scanf("%d",&n);
	Hanoi(n);

	return 0;
}