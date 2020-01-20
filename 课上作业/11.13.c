#include<stdio.h>
#define maxn 100000005

int prime[maxn],n;
int pr[maxn]; 

void click(){
	int cnt=0;
	cnt++;
	printf("%d\n",cnt);
}

void prm(){
	int tot=0;
	pr[1]=1;
    for(register int i=2;i<=maxn;i++){
        if(!pr[i]) prime[++tot]=i;
        for(register int j=1;j<=tot&&i*prime[j]<=maxn;j++){
        	pr[i*prime[j]]=1;
            if(i%prime[j]==0) break;
        }
    }
}

void print(int x){
	if(x>9) print(x/10);
	putchar(x%10+'0');
}

int main(){
	/*while(1){
		click();
	}*/
	//scanf("%d",&n);
	prm();
	for(register int i=1;i<=100000000;i++){
		//printf("%d ",i);
		//pr[i]?printf("No\n"):printf("Yes\n");
		if(!pr[i]) print(i);
	}

	return 0;
}