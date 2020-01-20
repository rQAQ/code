#include <iostream>
using namespace std;
 
struct problem{
	int score;
	int sum;
	int anw;
	string right;
}p[105];

int n,m,wrong[10005];
char ch;

int main(){
	cin>>n>>m;
	for(int i=0;i<m;i++){
		scanf("%d %d %d",&p[i].score,&p[i].sum,&p[i].anw);
		for(int j=0;j<p[i].anw;j++){
			cin>>ch;
			p[i].right+=ch;
		}
	}
	for(int i=0;i<n;i++){
		int sco=0;
		scanf("\n");
		for(int j=0;j< m; j ++){
			if(j != 0) scanf(" ");
			string str;
			int k;
			char s;
			scanf("(%d", &k);
			for(int q = 0; q < k; q ++){
				scanf(" %c", &s);
				str += s;
			}
			scanf(")");
			if(str == p[j].right) sco += p[j].score;
			else wrong[j] ++; 
		}
		printf("%d\n", sco);
	}
	
	int max = -1;
	for(int i = 0; i < m; i ++){
		if(max < wrong[i]) max = wrong[i];
	}
	if(max == 0) cout << "Too simple";
	else{
		cout << max;
		for(int i = 0; i < m; i ++){
			if(max == wrong[i]) cout << " " << i+1;
		}
	}

	return 0;
}