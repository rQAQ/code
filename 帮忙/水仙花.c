#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}
int narcissistic( int number )
{
    int t,sum=0,count=0,a,m;
    m=number;
    a=number;
    while(number>0){
        number/=10;
        count++;
    }
    while(a>0){
        t=a%10;
        a/=10;
        int sum1=1;
        for(int i=0;i<count;i++) sum1*=t;
        sum+=sum1;
    }
    if(sum==m) return 1;
    else return 0;
}

void PrintN( int m, int n )
{
    int i;
    for(i=m+1;i<n;i++){
        if(narcissistic(i)) printf("%d\n",i);
    }
}