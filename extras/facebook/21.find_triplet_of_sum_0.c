void main()
{
 int a[]={-4,-1,-1,-1,0,1,2};
 int i,j,k,first,last,sum_two,n=7,flag=0,pair=-100;
 for(i=0;i<n;i++)
 {
    first=i+1;
    last=n-1;
    if(a[i]==a[first])//restriction on more than two repeating no
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


    while(first<last)
    {
        sum_two=a[i]+a[first];

      if(sum_two+a[last]<0)// inmcrement ffirst
       first++;
       else if(sum_two+a[last]>0)
        last--;
        else
        {
          printf("..(%d ,%d,%d) \n",a[i],a[first],a[last]);
          first++;
          last--;
          if(a[first]==a[i])
               first++;

        }
    }
 }


}
