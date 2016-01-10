#include<stdio.h>
int remainder=0;
void div(int p,int q);
void main()
{
int m=17,n=2;
printf("qoutient==%d\n",divide(m,n));
div(m,n);


}
int divide(int p,int q)//find p/q
{
  //printf("**\t");

   int quotient=1;
  int divider=q;
  if(p==q)
    {
      remainder=0;
      return 1;
    }
    if(p<q)
    {
      remainder=p;
      return 0;

    }

   if(p==0)
     {
       remainder=0;
       return 0;
     }
  if(q==0)
   { printf("Impossible...Infinite\n");exit(0);

   }
while(p>=q)
{printf("**\t");
  q=(q<<1);
  quotient=(quotient<<1);
}
q=q>>1;
quotient=quotient>>1;
quotient+=divide(p-q,divider);
printf("remainder=%d\n",remainder);
return quotient;
}
void div(int p,int q)//keep subtracting untitil divident is becomes less than divider idea.. 13/4 means 13=(4+4+4+1)
{

    int m=p;
if(p!=0)
{
  int qt=0;
  while(p>=q)
  {
    printf("***\t");
    p=p-q;qt++;
  }
  printf("\np=%d/q=%d== %d..remainder==%d",m,q,qt,p);
}else
printf("infiniote..denominator zero\n");
}
