#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

char a[25],b[25],s[25],ans[25];
int i,j,k,f,flag,alen,blen,slen;

int main(){
	for(i=0;;i++){
		char ch=getchar();
		if(ch=='\n'||ch=='\0') break;
		s[i]=ch;
	}
	slen=i;
	for(i=0;;i++){
		char ch=getchar();
		if(ch=='\n'||ch=='\0') break;
		a[i]=ch;
	}
	alen=i;
	for(i=0;;i++){
		char ch=getchar();
		if(ch=='\n'||ch=='\0') break;
		b[i]=ch;
	}
	blen=i;
	for(i=slen-1,j=alen-1,k=blen-1;i>=0;i--,j--,k--){
		int x=0,aa,bb;
		if(j<0) aa=0;
		else aa=a[j]-'0';
		if(k<0) bb=0;
		else bb=b[k]-'0';
		if(s[i]=='0') s[i]+=10;
		if(f){
			x++;
			f=0;
		}
		x+=aa+bb;
		if(x>=s[i]-'0'){
			f=1;
			x-=s[i]-'0';
		}
		ans[i]=x+'0';
	}
	if(f) cout<<"1",flag=1;
	for(int i=0;i<slen;i++){
		if(ans[i]!='0') flag=1;
		if(ans[i]=='0'&&!flag) continue;
		putchar(ans[i]);
		f=2;
	}
	if(f!=2) putchar('0');

	return 0;
}