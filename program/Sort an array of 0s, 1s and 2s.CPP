 void sort012(int a[], int n)
    {
        // code here 
        //take three pointer
        int low=0;
        int mid=0;
        int high=n-1;//at last
        while(high>=mid)// jb tk mid high ko cross krega
        {
         if(a[mid]==0){
             swap(a[low],a[mid]);
             low++;
             mid++;
         }
         else if (a[mid]==1){
             mid++;
         }
         else{
             swap(a[mid],a[high]);
             high--;
         }
        }
