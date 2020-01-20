#include<cstdio>
#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

char ch,sale[1005],red[1005];
int temp[150],len1,len2,cnt1,cnt2;

int main(){
    scanf("%s",sale);
    scanf("%s",red);
    
    len1=strlen(sale);
    for(int i=0;i<len1;i++){
        ch=sale[i];
        temp[ch]++;
    }
    len2=strlen(red);   
    cnt2=len1-len2;
    for(int i=0;i<len2;i++){
        ch=red[i];
        temp[ch]--;
        if(temp[ch]<0) cnt1++;
    }
    if(!cnt1) printf("Yes %d",cnt2);
    else printf("No %d",cnt1);
    
    return 0;
}
