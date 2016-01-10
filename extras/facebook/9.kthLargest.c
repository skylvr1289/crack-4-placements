int heap_size=10;
void max_heapify(int a[],int i);
void build_heap(int a[]);
void main()
{
int i,a[]={0,4,2,5,3,6,5,8,7,9,5};



  int k=5;
  //kthMax(a,k);
 selection(a,0,heap_size,5);
 for(i=1;i<heap_size;i++)
    printf("%d ",a[i]);
}
void max_heapify(int a[],int i)
{
  int l,r,largest,t;
  l=2*i;
  r=2*i+1;

  if(l<=heap_size&& a[l]>a[i])
    largest=l;
    else
    largest=i;

    if(r<=heap_size && a[r]>a[largest])
      largest=r;

      if(i!=largest)
      {
       //swap
       t=a[i];
       a[i]=a[largest];
       a[largest]=t;
       max_heapify(a,largest);

      }

}
void build_heap(int a[])
{
  int i,j,n=heap_size;
  for(i=n/2;i>0;i--)
    max_heapify(a,i);
}
void kthMax(int a[],int k)// complkexity= {O(N)+O(klgN)}=whicchever max of te two. worst case k==n so O(NlgN)
{
    build_heap(a);//o(N)
  int i=1,j=0,val[k+1];

  while(i<=k)//O(k*lgN)
  {
    val[j++]=a[1];
    i++;
    a[1]=a[heap_size];
    heap_size=heap_size-1;
    max_heapify(a,1);
  }
   printf("\n %dth max=%d\n",k,val[--j]);
   for(i=0;i<=j;i++)
    printf("...%d",val[i]);
}

int selection(int a[],int start,int end,int k)
{
    int pivot,i,t;
    pivot=(start+end)/2;
    //swap pivot  &end values
      t=a[end];
      a[end]=a[pivot];
      a[pivot]=t;

      pivot=end;

      i=start;
      while(i<pivot)
      {
         if(a[i]>a[pivot])
          {
              //swap
              t=a[pivot];
              a[pivot]=a[i];
              a[i]=t;
              pivot--;
          }
          else if(a[i]<a[pivot])
            i++;
        else
         {
             a[i]=a[pivot-1];
             a[pivot-1]=a[pivot];// bcoz a[pivot] was same as a[i] so.
             pivot--;
         }
      }
      if(pivot<end-k+1)
      {
          //wew can skip equal values..
          while(a[pivot]==a[pivot+1]&& pivot!=end-k+1)
            pivot++;

            if(pivot<end-k+1)
          selection(a,pivot+1,end,k);
      }
      else if(pivot>end-k+1)
      {
          //reduce k
           k=pivot-(end-k+1);
           selection(a,start,pivot-1,k);
      }
      else
      return;
}
