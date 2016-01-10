#include<stdio.h>
void main()
{
#define size 101
 int b[size],c[7];// a[] contains elements. c contains counts... of no of 1s in binary no of a[i]
int a[size],i;

for(i=0;i<=size;i++)
   a[i]=i;

 int j,k=7;
// perform cout sort
 for(i=0;i<k;i++)//initialize all count to zeros..
   c[i]=0;

 for(i=0;i<size;i++)
  c[no_of_ones(a[i])]++;

  for(i=1;i<=k;i++)
   c[i]=c[i]+c[i-1];

 for(i=size-1;i>=0;i--)
  {
    b[c[no_of_ones(a[i])]-1]=a[i];//-1 is necessary otherwise b[0] will become a grabage..
    c[no_of_ones(a[i])]--;
  }
  for(i=0;i<size;i++)
    printf("%d\n",b[i]);
    printf("\n");
  }

int no_of_ones(int n)
{
 int count=0;
 while(n)
 {
   n=(n&(n-1));
   count++;
 }
 return count;
}
