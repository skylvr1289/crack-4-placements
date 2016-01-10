void max_heapify(int a[],int i);
void build_heap(int a[]);
#define heap_size 10
void main()
{
 int i,a[]={0,1,2,4,4,5,6,4,8,8,9};
  build_heap(a);
for(i=0;i<heap_size;i++)
printf(" %d ",a[i]);
int x=4,k=6;

check_kth(a,x,k);

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
  if(r<=heap_size&& a[r]>a[largest])
    largest=r;

    //swap
    if(largest!=i)
   { t=a[i];
      a[i]=a[largest];
      a[largest]=t;
      max_heapify(a,largest);
    }
}
void build_heap(int a[])
{
  int i;
  for(i=heap_size/2;i>0;i--)
    max_heapify(a,i);
}
void check_kth(int a[],int x,int k)
{
    int count=0,aux[k],i=1,j=0,l,r,cur;
     if(a[1]>x)
          { count++;cur=i;}
    while(count<=k)
    {
       l=cur*2;
       r=cur*2+1;

       if(a[l]>x &&a[r]>x)
         {count=count+2;cur=l;aux[j++]=r;}
       else if(a[l]>x)
         {
             count++;cur=l;
         }
         else if(a[r]>x)
         {
             count++;cur=r;
         }
         else if(a[l]<x&&a[r]<x && j>=0)
           cur=aux[--j];
         else
           break;
    }
    if(count>=k)
     printf("\n no there are count=%d greater values than x=%d",count,x);
     else
      printf("\nyes x=%d is greater than or = k=%dth largest",x,k);
}
