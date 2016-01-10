void main()
{
    int a[5]={1,2,3,4,5};
   printf("loc==a[%d]", binarySearch(a,5,5));
}
int binarySearch(int arr[],int size, int item)
{
     int left, right, middle; left = 0; right = size-1;
      while(left<=right)
      { middle = ((left + right)/2);
      if(item == arr[middle])
      {
           return(middle); }
      if(item > arr[middle])
      {
          left = middle+1; }
       else {
            right = middle-1;
            }
             }
       return(-1);
        }
