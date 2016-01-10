#define LEFT(i) (i<<1)
#define RIGHT(i) ((i<<1)+1)
#define PARENT(i) ((i>>1))
                  /// MAX-HEAP implementation
int heap_size=10;
void build_heap(int a[]);
void max_heapify(int a[],int i);
void heap_sort(int a[]);
void increase_key(int a[],int i,int key);//this increments the value at ith position..
void main()
{
  int a[15]={0,16,14,10,8,7,9,3,2,4,1};
                         //max_heapify(a,2);///max heapify at given node

  increase_key( a,9,15);
  insert_key(a,89);
  heap_sort(a);
 int i;
 for(i=1;i<=11;i++)/// 11 coz we inserted 1 more ke
      printf("%d ",a[i]);
}
void max_heapify(int a[],int i)
{
printf("*\n");
  int l,r,largest;
  l=LEFT(i);
  r=RIGHT(i);
  if(l<=heap_size && a[l]>a[i])
      largest=l;
  else
      largest=i;

  if(r<=heap_size && a[r]> a[largest])
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
    for(i=n;i>=2;i--)//a[1] ko a[1] se replce krne ka kya malab so,,, upto 2
    {
        ///swap a[1] with a[i]
        a[1]=a[1]^a[i];
        a[i]=a[1]^a[i];
        a[1]=a[1]^a[i];
        heap_size--;
        max_heapify(a,1);

    }
}
void increase_key(int a[],int i,int key)
{
  if(a[i]>key)
   {
     printf("eror..key is less than value.");  return;
   }
  a[i]=key;
  while(i>1&& a[PARENT(i)]<a[i])
    {
        ///swap parent n a[i]
        a[i]=a[PARENT(i)]^a[i];
        a[PARENT(i)]=a[PARENT(i)]^a[i];
        a[i]=a[PARENT(i)]^a[i];

        i=PARENT(i);
    }
}
 void insert_key(int a[],int key)
 {
     heap_size=heap_size+1;
     a[heap_size]=-1000;
     increase_key(a,heap_size,key);
 }
