#include<stdio.h>
void main()
{
int a[]={11, -12, 15, -3, 8, -9, 1, 8, 10, -2};
int i,k,l,j,maxS,sum,n=10;
maxS=-10000;
for(i=0;i<n;i++)//this prog will work only if sum is a +ve no...
{
    sum=0;
    for(j=i;j<n;j++)
        {
            sum=sum+a[j];
           maxS=maxS>sum?maxS:sum;
        }
 }
  printf("%d",maxS);
}

