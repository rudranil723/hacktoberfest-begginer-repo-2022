#include<iostream>

using namespace std;
int main()
{
int a,i,j;
char b='A';
cout<<"enter number of rows\n";
cin>>a;
i=1;
while (i<=a)
{
    j=1;
    while (j<=i)
    {
        cout<<b<<" ";
        j++;
    }
    cout<<endl;
    i++;
    b++;
    
}

return 0;
}