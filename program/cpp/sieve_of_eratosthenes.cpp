//sieve of eratosthenes is the fastest method to find all prime numbers upto n
#include<iostream>
using namespace std;
void primeSieve(int n)
{
	int prime[100]={0};
	for(int i=2;i<n;i++){
		if(prime[i]==0)              //prime[i]=0 in the end if any value of i is 0 then that is a prime number
		{
			for(int j=i*i;j<=n;j+=i)
			prime[j]=1;
		}
	}
	for(int i=2;i<=n;i++){
		if (prime[i]==0)
		cout<<i<<" ";
	}
	cout<<endl;
}
int main(){
	int n;
	cin>>n;
	primeSieve(n);
	
}
