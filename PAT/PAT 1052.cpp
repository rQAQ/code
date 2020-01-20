#include<vector>
#include<iostream>
using namespace std;
vector<vector<string> > v;//先说段错误！！！以为会爆结果不是这个原因
int main()
{
	
	for(int i=0;i<3;i++)
	{
		string s;
		getline(cin,s);
		vector<string> row;
		int j=0,k=0;
		while(j<s.length())
		{
			if(s[j]=='[')
			{
				while(k++<s.length())
				{
					if(s[k]==']')
					{
						row.push_back(s.substr(j+1,k-j-1));//获取字符串中一段 
						break;
					}
				}
			}
			j++;		
		}
		v.push_back(row);
	}	
	
	int n;
	cin >> n;
	while(n--)
	{
		int a,b,c,d,e;
		cin >> a >> b >> c >> d >> e;
		if(a>v[0].size()||b>v[1].size()||c>v[2].size()||d>v[1].size()||e>v[0].size()||a<1||b<1||c<1||d<1||e<1)	
		{
			cout << "Are you kidding me? @\\/@"<< endl;
		}
		else
		{
			cout << v[0][a-1] << "(" << v[1][b-1]  << v[2][c-1] << v[1][d-1] << ")" <<v[0][e-1]<< endl;
		}
	}
	 
} 

