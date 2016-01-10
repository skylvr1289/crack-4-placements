#define LEFT(i) (i<<1)
#define RIGHT(i) ((i<<1)+1)
#define PARENT(i) ((i>>1))
                  /// MAX-HEAP implementation
int heap_size=10;
void build_heap(int a[]);
void max_heapify(int a[],int i);
void heap_sort(int a[]);
void main()
{
  int a[]={0,5,3,10,10,84,19,6,22,9,1};
                         //max_heapify(a,2);///max heapify at given node
 heap_sort(a);
 int i;
 for(i=1;i<=10;i++)
      printf("%d ",a[i]);
}
void max_heapify(int a[],int i)
{
printf("*\n");
  int l,r,largest;
  l=LEFT(i);
  r=RIGHT(i);
  if(l<=heap_size && a[l]>a[i])// make a[l]<a[i] to build a min_heap
      largest=l;
  else
      largest=i;

  if(r<=heap_size && a[r]> a[largest])// make a[r]<a[largest] to build a min_heap
      largest=r;
  if(largest!=i)
     {
       a[i]=a[i]^a[largest];
       a[largest]=a[i]^a[largest];
       a[i]=a[i]^a[largest];

     max_heapify(a,largest);
     }
}
void build_heap(int a[])
{
   int i,n=heap_size;
   for(i=n/2;i>=1;i--)
     max_heapify(a,i);
}
void heap_sort(int a[])
{
    build_heap(a);
    int i,n=heap_size;
    for(i=n;i>=2;i--)//a[1] ko a[1] se replce krne ka kya malab so,,,  i is upto 2
    {
        ///swap a[1] with a[i]
        a[1]=a[1]^a[i];
        a[i]=a[1]^a[i];
        a[1]=a[1]^a[i];
        heap_size--;
        max_heapify(a,1);

    }
}
