#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<cctype>
using namespace std;

char c;
int a[128],b[2];

int main(){
	while((c=tolower(getchar()))!='\n')
		if(c-'a'>=0&&c-'a'<=25)	a[int(c)]++;
	for(int i=int('a');i<=int('z');i++){
		if(b[1]<a[i]){
			b[0]=i;
			b[1]=a[i];
		}
		if(b[1]==a[i]&&b[0]>i){
			b[0]=i;
			b[1]=a[i];
		} 
	}
	cout<<char(b[0])<<" "<<b[1];
	
	return 0;
}	