void main()
{
 int a[]={-4,-1,-1,-1,0,1,2};
 int i,j,k,first,last,sum_two,n=7,flag=0,pair=-100;
 for(i=0;i<n-2;i++)
 {
   sum_two=a[i]+a[i+1];
   j=i+2;

    if(a[i]==a[i+1])//restriction on more than two repeating no
     {
         if(flag==1 && pair==a[i])
          {
              flag=1;pair=a[i];
              continue;
          } else
          {
              flag=1;pair=a[i];
          }
     }
   while(j<n&& a[j]!=(-sum_two))
   {
       j++;
   }
   if(j<n)//means found
    {
        printf("%d,%d,%d\n",a[i],a[i+1],a[j]);
    }

  }
}
