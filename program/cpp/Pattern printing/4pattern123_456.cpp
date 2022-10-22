#include<iostream>

using namespace std;
int main()
{
int a,i,j,k;
cout<<"enter a number\n";
cin>>a;
i=0;
k=1;
while (i<a)
{
    j=1;
    while (j<=a)
    {
        cout<<k<<" ";
        j++;
        k++;
    }
    cout<<endl;
    i++;
}

return 0;
}