#define size 3
void main()
{
int a[]={3,2,1};
permute(a,0,size);

}
void permute(int a[],int k,int m)
{
   int i,t;
  if(k==m)
    {
        printf("k==%d  ",k);
      for(i=0;i<size;i++)
        printf("%d ",a[i]);
        printf("\n\n");
    }
    else
    {
       for(i=k;i<m;i++)
       {
         //sawap
         if(a[i]!=a[m-1])// if it is only 1 elemt , we need not swap it with itself unnecessarily
           {
               printf("Upper....swapping %d.. %d\n",a[i],a[m-1]);
               t=a[i];
               a[i]=a[m-1];
               a[m-1]=t;
           }
                     permute(a,k,m-1);//permute again
             //swap/
          if(a[i]!=a[m-1])
           {printf("Lower...swapping %d.. %d\n",a[i],a[m-1]);
               t=a[i];
               a[i]=a[m-1];
               a[m-1]=t;
           }

       }
    }
}
