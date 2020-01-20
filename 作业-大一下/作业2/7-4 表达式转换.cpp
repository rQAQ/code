#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

int s,x,y;
char ch;
stack<int> p;

int main(){
	while(ch!='@'){
		ch=getchar();
		switch(ch){
			case '+':x=p.top();p.pop();y=p.top();p.pop();p.push(x+y);break;
			case '-':x=p.top();p.pop();y=p.top();p.pop();p.push(y-x);break;
			case '*':x=p.top();p.pop();y=p.top();p.pop();p.push(x*y);break;
			case '/':x=p.top();p.pop();y=p.top();p.pop();p.push(y/x);break;
			case '.':p.push(s);s=0;break;
			default :s=s*10+ch-'0';break;
		}
	}
	cout<<p.top()<<endl;
	return 0;
}