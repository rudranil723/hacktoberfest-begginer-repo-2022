#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N=1e5+10;
int a[N],pf[N];
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)//1-based indexing
	{
		cin>>a[i];
		pf[i]=pf[i-1]+a[i];
	}
	
    int t;
	cin>>t;
	
	while(t--)
	{
		int l,r;
		cin>>l>>r;
		
		cout<<pf[r]-pf[l-1]<<"\n";
	}
	return 0;
}
