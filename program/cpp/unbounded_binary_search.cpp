#include <bits/stdc++.h>
using namespace std;

int binary(int *arr,int y,int lo,int hi)
{
    int mid;
    while(lo<=hi)
    {
        mid = lo+(hi-lo)/2;
        if(arr[mid]==y) return mid;
        if(arr[mid]<y) lo = mid+1;
        if(arr[mid]>y) hi = mid-1;
    }
    return -1;
}

int index(int *arr,int y)
{
    if(arr[0]==y) return 0;
    int i=1;
    if(arr[i]==y) return 1;
    while(arr[i]<y)
    {
        if(arr[i]==y) return i;
        i*=2;
    }
    return binary(arr,y,i/2+1,i-1);
}

int main()
{
    cout<<"Enter the number to search: ";
    int x;
    cin>>x;
    int arr[]={2,5,8,9,47,55,68,79,82,
                102,150,193,369,2489,4895,6589,7859,
                9586,12589,14258,16893,17856,19523,
                23568,26895,35896,45893,85695};
    cout<<index(arr,x);
    return 0;
}
