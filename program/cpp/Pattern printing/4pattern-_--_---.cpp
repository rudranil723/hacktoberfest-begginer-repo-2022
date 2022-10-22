#include<iostream>

using namespace std;
int main()
{
int a,i,j;
cout<<"enter a number\n";
cin>>a;
i=0;
while (i<a)
{
    j=0;
    while (j<=i)
    {
        cout<<"*";
        j++;
    }
    cout<<endl;
    i++;
}


return 0;
}