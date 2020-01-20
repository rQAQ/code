#include<iostream>
using namespace std;

//使用flag的冒泡排序法
int bubbleSort(int A[],int n){
	int sw=0;
	bool flag=1;
	for(int i=0;flag;i++){
		flag=0;
		for(int j=n-1;j>i;j--){
			if(A[j]<A[j-1]){
			//交换相邻元素
				swap(A[j],A[j-1]);
				flag=1;
				sw++;
			}
		}
	}
	return sw;
}

int main(){
	int A[100],n,sw;
	cin>>n;
	for(int i=0;i<n;i++) cin>>A[i];

	sw=bubbleSort(A,n);
	
	for(int i=0;i<n;i++){
		if(i) cout<<" ";
		cout<<A[i];
	}
	cout<<endl;
	cout<<sw<<endl;
	
	return 0;
}