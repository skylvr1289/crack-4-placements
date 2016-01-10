
void main()
{
int i;
char ar[]="abcd";
 print_my_power_set(ar,4);
}
void print_my_power_set(char ar[],int n)
{
    int i,j,k;//,size=pow(2,n);
    int size= (int)pow(2,n);
    int a[size+1];

    for(i=0;i<size;i++)
     a[i]=i;

    count_sort(a,6,size);//sort a[] according to no of ones in a[i] count sort also maintains the order/sequence n which nos came

for(i=0;i<size;i++)
{
  j=0,k=a[i];
  printf("{ ");
  while(k>0)
  {
    if(k&1)
      printf("%c ",ar[j]);
      k=(k>>1);
      j++;
  }
  printf("}\n");
}
}
int no_of_ones(int n)
{
    int count=0;
    while(n)
    {
        n=(n&n-1);count++;
    }
return count;
}
void count_sort(int a[],int k,int size)
{
    int b[size+1],c[k+1],i,j;

    for(i=0;i<=k;i++)
     c[i]=0;

     for(i=0;i<size;i++)
     c[no_of_ones(a[i])]++;

      for(i=1;i<=k;i++)
       c[i]=c[i]+c[i-1];

       for(i=size-1;i>=0;i--)
      {
          b[c[no_of_ones(a[i])]-1]=a[i];
          c[no_of_ones(a[i])]--;//i always forget to reduce count araya..

      }
        for(i=0;i<size;i++)
         a[i]=b[i];//i alwas forget to assign it to a[]
}
