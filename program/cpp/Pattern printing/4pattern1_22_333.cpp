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
    while (j<=i)
    {
        cout<<i<<" ";
        j++;
    }
    cout<<endl;
    i++;
    
}


return 0;
}