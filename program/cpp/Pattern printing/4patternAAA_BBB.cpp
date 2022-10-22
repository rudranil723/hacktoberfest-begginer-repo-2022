#include<iostream>

using namespace std;
int main()
{
int a,i,j;
cout<<"enter a number\n";
cin>>a;
char b='A';
i=1;
while (i<=a)
{
    j=1;
    while (j<=a)
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