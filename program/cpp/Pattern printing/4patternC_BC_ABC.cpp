#include<iostream>

using namespace std;
int main()
{
int a,i,j;
cout<<"enter number for rows\n";
cin>>a;
char b='A';
i=1;
while (i<=a)
{
    j=1,b='A'+a-i;
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