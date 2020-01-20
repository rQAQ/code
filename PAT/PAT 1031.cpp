#include<cstdio>
#include<cstring> 
 
int n,w[20]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char str[20],change[15]={'1','0','X','9','8','7','6','5','4','3','2'};
bool flag = true;

int main(){
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		int ans=0,j;
		scanf("%s",str);
		for(j=0;j<17;j++){
			if(!(str[j]>='0'&&str[j]<='9')) break;
				ans = ans +(str[j]-'0')*w[j]; 
		} 
		if(j<17){
			flag =false;
			printf("%s\n",str);
		}else{
			if(change[ans%11]!=str[17]){
				flag=false;
				printf("%s\n",str);
			}
		}
		
	} 
 
	if(flag) printf("All passed");
		
	return 0;
} 