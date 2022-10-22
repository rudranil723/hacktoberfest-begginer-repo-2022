#include<iostream>

using namespace std;
int main()
{
int a,i,j;
cout<<"enter a number\n";
cin>>a;
i=1;
while (i<=a)
{
    j=1;
    while (j<a+1-i)
    {
        cout<<" ";
        j++;
    }

    j=1;
    while (j<=i)
    {
        cout<<j;
        j++;
    }    

    j=j-2;
    while (j>0)
    {
        cout<<j;
        j--;
    }

    cout<<endl;
    i++;
    
}

return 0;
}