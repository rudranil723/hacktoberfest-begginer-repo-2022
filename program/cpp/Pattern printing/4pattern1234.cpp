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
       j=1;
       while (j<=a)
       {
           cout<<j<<" ";
           j++;
       }
       cout<<endl;
       i++;     
   }
   
return 0;
}