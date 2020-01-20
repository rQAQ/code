#include<stdio.h>
#include<math.h>

int main(){
    int a,i,b,sum;
    for(a=1;a<3000;a++){   
        for(b=0,i=1;i<=a/2;i++)
            if(!(a%i)) b+=i;
        for(sum=0,i=1;i<=b/2;i++)
            if(!(b%i)) sum+=i;
        if(sum==a&&a<b) printf("(%d,%d)",a,b); 
    }

    return 0;
}

