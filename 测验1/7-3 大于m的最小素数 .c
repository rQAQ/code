#include<stdio.h>
#include<math.h>

long long a;
int flag=1;

int main(){
	scanf("%lld",&a);
	for(long long j=a+1;;j++){
		for(long long i=j;i<=sqrt(j);i++){
			if(j%i==0){
				flag=0;
				break;
			}
		}
		if(flag=1){
			printf("%lld",j);
			return 0;
		}
		flag=1;
	}
	
	return 0;
}