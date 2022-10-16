#include<iostream>
using namespace std;
void selection_sort(int arr[],int n)
{
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {   
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for (int i=0;i<n;i++)
    {   
        cout<<arr[i]<<" ";
    }
    
}
int main()
{
    int n;
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    cout<<"enter array elements"<<endl;
    for (int i=0;i<n;i++)
    {   cin>>arr[i];
    }
    selection_sort(arr,n);
}
