#include<cstdio>
#include <iostream>
#include<algorithm>
using namespace std;
 
int day,month,year,sum,m;    

int main(){
    cin>>year>>month>>day;
    if(year%4==0&&year%100!=0||year%400==0) m=29;
    else m=28;
    switch (month){
        case 12:sum+=30;   
        case 11:sum+=31;
        case 10:sum+=30;
        case 9:sum+=31;         
        case 8:sum+=31;
        case 7:sum+=30;
        case 6:sum+=31;
        case 5:sum+=30;
        case 4:sum+=31;
        case 3:sum+=m;
        case 2:sum+=31;
        case 1:sum+=day;         
    }

    cout<<sum;    

    return 0;
}