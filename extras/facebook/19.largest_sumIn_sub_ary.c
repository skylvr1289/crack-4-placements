 void largest_sum(int a[],int n);
 void largest_sum2(int a[],int n);
void main()
{
 int a[]={1,-1,-1,0,2,3,5};

largest_sum(a,7);
largest_sum2(a,7);




}
 void largest_sum(int a[],int n)
 {
 int i,j,k,l,max=-100,sum=0,index=0,lindex=0;
 for(i=0;i<n;i++)
 {sum=0;
   for(j=i;j<n;j++)
    {
       sum+=a[j];
    }

         if(sum>=max)
          {max=sum;index=i;lindex=j-1;}

 } printf("Method O(n^2)-->max=%d .. from i=%d ..to %d",max,index,lindex);
}

void largest_sum2(int a[],int n)
{
    int index_sum[n][2];
    int i,j,k,sum,max,indexF,indexT;
    index_sum[0][0]=0;
    index_sum[0][1]=a[0];
    for(i=1;i<n;i++)
    {
     if((index_sum[i-1][1]+a[i])>a[i])
     {
         index_sum[i][0]=index_sum[i-1][0];
         index_sum[i][1]=(index_sum[i-1][1]+a[i]);
     }
     else{
        index_sum[i][0]=i;
         index_sum[i][1]=a[i];
     }
    }
    max=index_sum[0][1];
    for(i=1;i<n;i++)
    {
        if(index_sum[i][1]>=max)
         {
           max=index_sum[i][1]; indexF=index_sum[i][0];  indexT=i;
         }
    }
    printf("\nEmthod2.O(n)--> max_sum= %d .. from %d to %d ",max,indexF,indexT);
}
