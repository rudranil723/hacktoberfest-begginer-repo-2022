#include<iostream>

using namespace std;
int main()
{
int a,i,j,k;
cout<<"enter number of rows\n";
cin>>a;
i=1;
while (i<=a)
{
    j=i;
    while (j>0)
    {
        cout<<j<<" ";
        j--;
    }
    cout<<endl;
    i++;     
}

return 0;
}