
void main()
{
#define size 15
 int b[size],c[14];
int a[size]={111,921,811,433,636,333,601,795,851,427,816,416};
 int i,j,k=11,digits=3,exp=1;
while(exp<pow(10,digits))// while no of dgits=d
{// perform cout sort
 for(i=0;i<k;i++)
   c[i]=0;

 for(i=0;i<12;i++)
  c[a[i]/exp%10]++;

  for(i=1;i<=k;i++)
   c[i]=c[i]+c[i-1];

 for(i=11;i>=0;i--)
  {
    b[c[a[i]/exp%10]-1]=a[i];//-1 is necessary otherwise b[0] will become a grabage..
    c[a[i]/exp%10]--;
  }
    exp=exp*10;/// next time we will consider next left sided digits..
  for(i=0;i<12;i++)
    printf("%d  ",a[i]=b[i]);///dont forget to aassign b[] to a[] otherwise kya fayda hua whoile loop chalane ka. :P??
    printf("\n");
  }
}
