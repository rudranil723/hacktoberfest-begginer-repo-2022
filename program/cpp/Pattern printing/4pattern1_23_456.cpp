#include<iostream>

using namespace std;
int main()
{
int a,i,j,k;
cout<<"enter number of rows\n";
cin>>a;
i=1;
k=1;
while (i<=a)
{
    j=1;
    while (j<=i)
    {
        cout<<k<<" ";
        j++;
        k++;
    }
    cout<<endl;
    i++;
    
}

return 0;
}