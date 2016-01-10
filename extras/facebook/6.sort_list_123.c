void main()
{
 int a[]={1,2,1,2,2,1,1,2,3,3,2,3};

sort(a,12);
}
void sort(int a[],int n)
{
  int i=0,start=0,end=n-1,t;
    //if(a[0]==1)
     //{i++,start++;}
    while(i<=end)//dont write i<n here..
    {

      if(a[i]==1)
        {
         //swap
        // if(a[start]!=1)/// need not swap if both
          {
              t=a[i];
              a[i]=a[start];
              a[start]=t;
          }
          start++;
           i++;
        }
        else if(a[i]==3)
        {
          //swap
           if(a[end]!=a[i])/// need not swap if both are same
           {
              t=a[i];
              a[i]=a[end];
              a[end]=t;
           }
          end--;
        }
         else//2
           i++;
    }
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
}
