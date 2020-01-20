#include <iostream>
#include <string>
using namespace std;

string a[13] = {"tret","jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec"};
string b[13] = {"","tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou"};
int tt,temp,temp1,ans = 0;

void fun1(string t){
	int len = t.length();
	int num = 0;
	for(int i = 0;i<len;i++)
	{
		num = num*10+(t[i]-'0');
	}
	cout<<b[num/13];
	if((num%13)&&(num/13))cout<<" "<<a[num%13];
	else if(num%13)cout<<a[num%13];
	else if(num==0)cout<<"tret";
}

void fun2(string t){
	if(t.size()==3) 
	{
		for(int i = 0;i<13;i++){
			if(t==b[i]){
				cout<<i*13;
				break;
			}
		}
		for(int i = 0;i<13;i++){ 
			if(t==a[i]){
				cout<<i;
			}
		}
	}
	else if(t.size()==4)cout<<"0";
	else{
		string aa = t.substr(0,3);
		string bb = t.substr(4,3);
		for(int i = 0;i<13;i++){
			if(aa==b[i])temp = i*13;
			if(bb==a[i])temp1 = i;
		}
		cout<<temp+temp1;
	}
}

int main(){
	string t;
	int n;
	cin>>n;
	getchar();
	for(int i = 0;i<n;i++){
		getline(cin,t);
		if(t[0]>='0'&&t[0]<='9')fun1(t);
		else fun2(t); 
		cout<<endl;
	}
	return 0;
} 