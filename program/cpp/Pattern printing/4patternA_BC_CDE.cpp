#include<iostream>

using namespace std;
int main()
{
int a,i,j;
char b='A';
cout<<"enter number for row\n";
cin>>a;
i=1;
while (i<=a)
{
    j=1,b='A'+i-1;
    while (j<=i)
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