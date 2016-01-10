void main()
{
  printf("%d", Bsearch_in_rotated());
//not working if liess ein first left half..
}
void Bsearch_in_rotated()
{
int a[20]={7,8,9,10,1,2,3,4,6};
int i,j,mid,low,high,key=9;
low=0;high=8;
 while(low<=high)
 {
    mid=(low+high)/2;printf("mid==%d\n",mid);
    if(key==a[mid])
       {break;}
    if(a[mid]>=a[low])/// left half is strictl y increasing..
    {

        if(key>=a[low]&& key<a[mid])
         {
            high=mid-1; printf("going left.low==%d high=%d\n.\n",low,high);
         }
        else
           {
               low=mid+1;  printf("going left.low==%d high=%d\n.",low,high);
           }
    }
     else///right half is increasing....
   {

       if(key>a[mid]&& key<=a[high])
          {
             low=mid+1;printf("going right..low==%d high=%d\n",low,high);
          }
        else
          {
             high=mid-1; printf("going right..low==%d high=%d\n",low,high);
          }
   }
 }
}
