#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
 
struct node{
	int key,next;
}a1[100005];

int m,n,k1,k2,a2[100005],a3[100005],flag[100005];

int main(){
	cin>>m>>n;
	
	for(int i=0;i<n;i++){
		int addr,key,next;
		cin>>addr>>a1[addr].key>>a1[addr].next;
	}	
	for(int i=m;i!=-1;i=a1[i].next){
		int q=abs(a1[i].key);
		if(!flag[q]){
			flag[q]=1;
			a2[k1++]=i;
		}else a3[k2++]=i;
	}
	printf("%05d %d ",a2[0],a1[a2[0]].key);
	for(int i=1;i<k1;i++){
		printf("%05d\n",a2[i]);
		printf("%05d %d ",a2[i],a1[a2[i]].key);
	}
	printf("-1\n");
	if(k2){
		printf("%05d %d ",a3[0],a1[a3[0]].key);
		for(int i=1;i<k2;i++){
			printf("%05d\n",a3[i]);
			printf("%05d %d ",a3[i],a1[a3[i]].key);
		}
		printf("-1\n");
	}
	
	return 0;
}