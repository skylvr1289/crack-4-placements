#include<stdio.h>
void main()
{
int a[]={5,6,7,8,9,10,11,1,2,3,4};/* this searches an elemnt in roated sorted array in logn time.
                      Logic: we will find such a pivot for which aall elemnts to its right are less than this..so obviously
     we will get point of rotation. we will apply binary search on thse two sorted arrays.. formed by left n right of pivot.
                                */
printf("%d",PivotBsearch(a,0,10,11));

}

int findPivot(int a[],int low,int high)
{
   int mid=(low+high)/2;
    if(a[mid]>a[mid+1])
      return mid;
    if(a[mid]>a[0])
       return findPivot(a,mid+1,high);
    else
    return findPivot(a,low,mid-1);
 return -1;
}
int PivotBsearch(int a[],int low,int high,int val)
{
   int pivot=findPivot(a,low,high);
   if(a[pivot]==val)
     return pivot;
    if(val<a[0])
      return Bsearch(a,pivot+1,high,val);
    else
     return Bsearch(a,low,pivot-1,val);
    return -1;
}
int Bsearch(int a[],int low,int high,int val)
{
    if(high>=low)
    {
        int mid=(low+high)/2;
    if(a[mid]==val)
      return mid;
    if(a[mid]>val)
      return Bsearch(a,low,mid-1,val);
    else
      return Bsearch(a,mid+1,high,val);

    }
    printf("not found...\n");
   return -1;
}
