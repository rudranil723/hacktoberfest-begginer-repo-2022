#include<iostream>

using namespace std;
int main()
{
int a,i,j;
cout<<"enter number for rows\n";
cin>>a;
i=1;
while (i<=a)
{
    j=1;
    while (j<i)
    {
        cout<<" ";
        j++;
    }
    j=1;
    while (j<=a-i+1)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
    
}

return 0;
}