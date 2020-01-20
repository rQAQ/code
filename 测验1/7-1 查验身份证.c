#include<stdio.h>
#include<string.h> 
 
inline int read(){
	int s=0,w=1;
	char ch=getchar();
	while(ch<'0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
    while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
    return s*w;
}

void print(int x){
	if(x<0) putchar('-'),x=-x;
	if(x>9) print(x/10);
	putchar(x%10+'0');
}

int n,w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char str[20],change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
int flag=1;

int main(){
	n=read();
	for(int i=0;i<n;i++){
		int ans=0,j;
		scanf("%s",str);
		for(j=0;j<17;j++){
			if(!(str[j]>='0'&&str[j]<='9')) break;
				ans=ans+(str[j]-'0')*w[j]; 
		} 
		if(j<17){
			flag=0;
			printf("%s\n",str);
		}else{
			if(change[ans%11]!=str[17]){
				flag=0;
				printf("%s\n",str);
			}
		}
	} 
 
	if(flag) printf("All passed");
		
	return 0;
} 