void rotate_right2(int a[],int size,int r);
void rotate_right(int a[],int size,int r);
void main()
{
int a[]={0,1,2,3,4,5,6};
int i,n=7;
rotate_right(a,n,3);

}
void rotate_right1(int a[],int size,int r)
{
  int ar[size],i,j,k;
  i=0;
  j=size-r;
  k=0;
  while( j<size)
  {
      ar[i++]=a[j++];
  }
  while(k<size-r)
  {
      ar[i++]=a[k++];
  }
  for(i=0;i<size;i++)
  printf("%d ",ar[i]);
}
void rotate_left(int a[],int size,int r)
{
    int start=0,end=r,i,t;//alw make a diff b/w start & end =r
    while(end<size)
    {
        //swap
        t=a[start];
        a[start++]=a[end];
        a[end++]=t;
    }
    //
    while(start<size-1)
    {
        ///swap
        t=a[start];
        a[start]=a[start+1];
        a[start+1]=t;
        start++;
    }
    for(i=0;i<size;i++)
  printf("%d ",a[i]);
}
void rotate_right(int a[],int size,int r)
{
    int start=size-1,end=size-r-1,t,i;
    while(end>=0)
    {
        t=a[start];
        a[start--]=a[end];
        a[end--]=t;
    }
    while(start>0)
     {
        t=a[start];
        a[start]=a[start-1];
        a[start-1]=t;
        start--;
     }
     for(i=0;i<size;i++)
  printf("%d ",a[i]);
}
