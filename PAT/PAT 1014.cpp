#include<iostream>
#include<string>
using namespace std;

void Week(int n){
	switch(n){
		case 1:cout<<"MON"<<' ';break;
		case 2:cout<<"TUE"<<' ';break;
		case 3:cout<<"WED"<<' ';break;
		case 4:cout<<"THU"<<' ';break;
		case 5:cout<<"FRI"<<' ';break;
		case 6:cout<<"SAT"<<' ';break;
		case 7:cout<<"SUN"<<' ';break;
	}
}

int main(){
	string s1,s2,s3,s4;
	cin>>s1>>s2>>s3>>s4;
	int i=0;
	bool flag=false;
	while(i<s1.length()&&i<s2.length()){
		if(s1[i]==s2[i]){
		  	if(flag){
				if(s1[i]>='0'&&s1[i]<='9'){	
					cout<<0<<s1[i]-'0'<<':';
					break;
				}else if(s1[i]>='A'&&s1[i]<='N'){
					int n=s1[i]-'A'+1;
					cout<<n+9<<':';
					break;
				}
			}
			if(!flag&&s1[i]>='A'&&s1[i]<='G'){
				int n=s1[i]-'A'+1;
				Week(n); 
				flag=true;
			}		
		}
		i++;	
	}
	i=0;//注意i要及时归0 
	while(i<s3.length()&&i<s4.length()){
		if(s3[i]==s4[i]&&(s3[i]>='A'&&s3[i]<='Z'||s3[i]>='a'&&s3[i]<='z')){
			if(i<10) cout<<0;
			cout<<i;
			break;
		}
		i++;	
	}

	return 0;

}