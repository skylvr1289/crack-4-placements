#define SIZE 9
void print_majority(int *a,int n);
void main()
{
int i,a[]={3,3,4,2,4,49,2,7,4},n=9;
print_majority(a,n);

for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
void print_majority(int *a,int n)
{
   //find max in araya a
   int i,j,k,min,max=min=a[0];
   for(i=1;i<n;i++)
   {
     if(a[i]>max)
      max=a[i];
      if(a[i]<min)
         min=a[i];
   }
   ////initialize count array to zero ..all lements

int ar[max+2];//initialize all elements to zeros
for(i=0;i<max+2;i++)
  ar[i]=0;

  for(i=0;i<n;i++)///count no  of times a element appears..
     ar[a[i]]++;

     int mx_C,mx_el;
     mx_C=ar[a[0]];
     for(i=0;i<n;i++)
      {
         if(ar[a[i]]>mx_C)
           {
              mx_C=ar[a[i]];
                mx_el=a[i];
           }
      }
      if(mx_C > n/2)
          printf("Mejority element ==%d..  apeareed %d times",mx_el,mx_C);
          else
           printf("Mejority element  NT found...\n ");


       printf("\n ** SORTED order of array....jst printing.\n");
       k=0;
        for(i=min;i<max+1;i++)
        {
            if(ar[i]>0)
            {
                for(j=0;j<ar[i];j++)
                  {printf("%d\t",i);a[k++]=i;}//also saving to  a[] in sorted preders
            }
        }printf("\n");
}
