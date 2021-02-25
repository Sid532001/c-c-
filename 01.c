int transitionPoint(int arr[],int n)
{
   int low =0,high =n-1;
   int mid;
   while(low<=high)
   {
       mid = low+(high-low)/2;
       if(arr[mid]==0)
       {
           low=mid+1;
       }
       if(arr[mid]==1)
       {
           high = mid-1;
       }
   }
   
   if(arr[mid]==1)
     return mid;
   else
     return mid+1;
}