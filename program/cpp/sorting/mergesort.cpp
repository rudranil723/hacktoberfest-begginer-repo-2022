#include <bits/stdc++.h>
using namespace std;
void mergesort(int arr[],int n)
{
    if(n<2)
        return;
    int mid=n/2;
    int left[mid];
    int right[n-mid];
    for(int i=0;i<mid;i++)
        left[i]=arr[i];
    for(int i=mid;i<n;i++)
        right[i-mid]=arr[i];
    mergesort(left,mid);
    mergesort(right,n-mid);
    int i=0,j=0,k=0;
    while(i<mid && j<n-mid)
    {
        if(left[i]<=right[j])
            arr[k++]=left[i++];
        else
            arr[k++]=right[j++];
    }
    while(i<mid)
        arr[k++]=left[i++];
    while(j<n-mid)
        arr[k++]=right[j++];
}
int main()
{
    int arr[] = {5, 2, 7, 9, 1};
    int n = sizeof(arr) / sizeof(int);
    mergesort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}
