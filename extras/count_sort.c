#include<stdio.h>
void main()
{
 int a[30]={1,2,0,0,2,2,1,1,1,1,0,2,0,2,0,0,0,1,1,1,1,2,2,2,2,0,0,1,0,1};
 int min,max,mid;
 int l=0,m=0,r=0;
 int i,j,k;
 //find min and max..
 min=max=a[0];
 for(i=1;i<30;i++)
 {
    if(a[i]<min)
      min=a[i];
    if(a[i]>max)
      max=a[i];
 }
//now count hte no of three terms..into l,m,r
for(i=0;i<30;i++)
 {
      if(a[i]==min)
        l++;
      else if(a[i]==max)
        r++;
      else
       {mid=a[i]; m++;}
 }
//printf("l=%d,m=%d,r=%d",l,m,r);
 for(i=0,j=0,k=0;i+j+k<l+m+r;i++,j++,k++)
  {
  a[i]=min;
  a[j+l]=mid;
  a[k+l+m]=max;
  }
  for(i=0;i<30;i++)
   printf("%d\t",a[i]);
}
