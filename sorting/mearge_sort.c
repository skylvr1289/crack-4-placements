void main()
{
//mearge sort
int i,a[8]={1,2,8,9,4,6,7},b[8],c[8];
mearge_sort(a,7);
//partition(a,b,c,7);
//mearge(a,b,c,4,3);
for(i=0;i<7;i++)
  printf("%d  ",a[i]);


}
void mearge_sort(int a[],int size)
{
    if(size>1)
{
   int b[size/2+1],c[size/2+1],size_b,size_c;
   partition(a,b,c,size);//partition
   if(size&1)
     size_b=size/2 +1;
     else
     size_b=size/2;

   size_c=size-size_b;
///sort
   mearge_sort(b,size_b);printf("line---%d.. \n",__LINE__);
   mearge_sort(c,size_c);
///merge
   mearge(a,b,c,size_b,size_c);
    }else
    return;
}
void mearge(int a[],int b[],int c[],int size_b,int size_c)
{
  int i=0,j=0,k=0;
  while(i<size_b&&j<size_c)
  {
    if(b[i]<c[j])
    {
       a[k++]=b[i++];
    }
   else if(b[i]==c[j])
   {
      a[k++]=b[i++];
   }
   else
   {
     a[k++]=c[j++];
   }
  }
  /// dont forget below lines... u generally forget this..wat ifm<n or n<m... rest of the elments should be added naaa?ri8.
  ///
  while(i<size_b)
   a[k++]=b[i++];
   while(j<size_c)
    a[k++]=c[j++];

}
void partition(int *a,int *b,int *c,int size)
{
int i,j,k=0;
if(size>0)
{


  if(size&1)//odd
  {
    for(i=0;i<=size/2;i++)
       b[i]=a[i];

       for(j=i;j<size;j++)
         c[k++]=a[j];
  }
  else//even size
  {
     for(i=0;i<size/2;i++)
     {
       b[i]=a[i];c[i]=a[i+size/2];
     }


  }
}

}
