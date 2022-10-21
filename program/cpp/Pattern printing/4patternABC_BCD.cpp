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
    char b='A';
    j=1,b=b+i-1;
    while (j<=a)
    {
        cout<<b<<" ";
        b++;
        j++;
    }
    cout<<endl;
    i++;
    
}

return 0;
}