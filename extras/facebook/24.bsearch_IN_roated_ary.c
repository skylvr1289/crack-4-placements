void main()
{
  printf("%d", Bsearch_in_rotated());

}
int Bsearch_in_rotated()
{
int a[20]={10,9,8,7,1,2,3,4,5,6};
int i,j,mid,low,high,key=9;
low=0;high=9;
 while(low<=high)
 {
    mid=low+(high-low)/2;
    if(key==a[mid])
       return mid;
    if(a[mid]>=a[low])/// left half is strictl y increasing..
    {
        if(key>=a[low]&& key<a[mid])
           high=mid-1;
        else
           low=mid+1;
    }
     else///right half is increasing....
   {

       if(key>a[mid]&& key<=a[high])
           low=mid+1;
        else
           high=mid-1;
   }
 }
}
