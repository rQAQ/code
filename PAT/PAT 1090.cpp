#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

vector<vector<int>> diss(100000, vector<int>(0));
int n,m,k;

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        int good1, good2;
        cin>>good1>>good2;
        diss[good1].push_back(good2);
        diss[good2].push_back(good1);
    }
    for (int i=0;i<m;i++) {
        int dir[100000]={ 0 };
        cin>>k;
        bool flag=true;
        for(int j=0;j<k;j++) {
            int good;
            cin>>good;
            if(dir[good]==1&&flag){
                cout<<"No"<<endl;
                flag=false;
            }
            for(int x=0;x<diss[good].size();x++){
                int ex=diss[good][x];
                dir[ex]=1;
            }
        }
        if(flag){
            cout<<"Yes"<<endl;
        }
    }
    
    return 0;
}