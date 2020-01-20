#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int n,A[105],B[105],t;

void trace(int A[],int n){
	for(int i=0;i<n;i++){
		if(i) printf(" ");
		printf("%d",A[i]);
	}
}

void insertionSort(int A[],int n){
	cout<<"Insertion Sort"<<endl;
	int cnt;
	for(int i=0;i<n;i++) 
		if(A[i+1]<A[i]){
			cnt=i+1;
	 		break;
		}
	for(int i=1;i<n;i++){
		int v=A[i];
		int j=i-1;
		while(j>=0&&A[j]>v){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=v;
		if(i==cnt){
			trace(A,n);
			return;
		}
	}
}

void mergesort(int b[],int n){
    cout<<"Merge Sort"<<endl;
    int cnt1=1,cnt2=1,cnt,m=0;
    for(int i=1;i<n;i++){
    	if(m<1){
            if(b[i]>=b[i-1]) cnt1++;
                else m++;
            }else{
                if(b[i]>=b[i-1]) cnt2++;
                else break;
            }
        }
    cnt1<=cnt2?cnt=cnt1:cnt=cnt2;
    if(2*cnt>=n){
        sort(b,b+n);
    }else{
        int k=1;
        for(int i=2*k*cnt;i<=n;i=2*k*cnt){
            sort(b+2*(k-1)*cnt,b+i,less<int>());
            k++;
        }
        sort(b+2*(k-1)*cnt,b+n);
    }
   	trace(b,n);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&A[i]);
	for(int i=0;i<n;i++) scanf("%d",&B[i]);

	for(int i=n-1;i>=0;i--){
		if(A[i]!=B[i]){
			t=i;
			break;
		}
	}
	for(int i=1;i<=t;i++){
		if(B[i-1]>B[i]){
			mergesort(B,n);
			return 0;
		}
	}
	insertionSort(B,n);
	
	return 0;
}