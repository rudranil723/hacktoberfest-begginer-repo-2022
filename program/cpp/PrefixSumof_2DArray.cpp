#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e3+10;
int ar[N][N];
ll int pf[N][N]; //globally declared so already initialised to zero
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)//1-based indexing
	{
		for(int j=1;j<=n;j++)
		{
			cin>>ar[i][j];
			pf[i][j]=ar[i][j]+pf[i-1][j]+pf[i][j-1]-pf[i-1][j-1];
		}
	}
    int t;
	cin>>t;
	
	while(t--)
	{
		int a,b,c,d,res;
		cin>>a>>b>>c>>d;
		
		res=pf[c][d]-pf[a-1][d]-pf[c][b-1]+pf[a-1][b-1];
		cout<<res<<"\n";
	}
	return 0;
}
