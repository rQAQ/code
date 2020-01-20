#include<stdio.h>

double x,y;

int main(){
	scanf("%lf%lf",&x,&y);
	for((x-2)*(x-2)+(y-2)*(y-2)>1||(x+2)*(x+2)+(y-2)*(y-2)>1||(x-2)*(x-2)+(y+2)*(y+2)>1||(x+2)*(x+2)+(y+2)*(y+2)>1) printf("0\n");
	else printf("10\n");

	return 0;
}