void main()
{
  int a[]={2,5,3,0,2,3,0,3},i;
  count_sort(a,8,5);
  for(i=0;i<8;i++)
   printf("%d ",a[i]);

}
void count_sort(int a[],int size,int k)// k is the value...which is max in the aaray...no elemnt greater than k=O(n)
{
  int b[size+1],c[k+2];
int i,j;
 ///initialize count aarray to zero
for(i=0;i<=k;i++)
  c[i]=0;

  for(i=0;i<size;i++)
    c[a[i]]++;

    //count no of items b4 each element.
    for(i=1;i<=k;i++)
      c[i]+=c[i-1];

      // insert into resultant array
      for(i=size-1;i>=0;i--)
        {
         b[c[a[i]]-1]=a[i];//-1 wa necessay othewise b[0] cant be obtained..
         c[a[i]]--;
        }

        for(i=0;i<size;i++)
         {
          a[i]=b[i];
         }
}
