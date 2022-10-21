// Nth root using binary search
#include<bits/stdc++.h>
using namespace std;

double eps=1e-6; //0.000001

int multiply(double mid,int n)
{
	double ans=1;
	for(int i=1;i<=n;i++)
		ans*=mid;
	
	return ans;
}
int main()
{
	int n;
	cin>>n;
	double x;
	cin>>x;
	double mid,lo=1,hi=x;
	while(hi-lo > eps) //here we will get correct answer upto 5 decimal places as eps=1e-6
	{
		mid=(lo+hi)/2;
		if(multiply(mid,n) < x)
		{
			lo=mid;
		}
		else{
			hi=mid;
		}
	}
	cout<<lo<<endl; //print any of lo or hi we will get the nth root
}
//output-
//3 2
//1.25992
