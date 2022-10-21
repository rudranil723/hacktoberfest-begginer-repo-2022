#include<iostream>

using namespace std;
int main()
{
int a,i,j;
char b='A';
cout<<"enter a number\n";
cin>>a;
i=1;
while (i<=a)
{
    j=1,b='A';
    while (j<=a)
    {
        cout<<b<<" ";
        j++;
        b++;
    }
    cout<<endl;
    i++;
}

return 0;
}