void main()
{
  int a[]={2,0,0,1,2,1,1,1,2,2,0,2,2};
   int start=0,end,l=(sizeof(a)/sizeof(a[0])-1);
   int i=0,j,t;end=l-1;

   while(a[i]==0)
    {start++;i++;}


   while(i<=end )//i<=end was a must condition...here..
   {
     if(a[i]==0)
     {
     //swap a[i]with a[start]
        t=a[i];
        a[i]=a[start];
        a[start]=t;
     i++;start++;
     }
     else if(a[i]==2)
      {
      //swap a[i] & a[end]
        t=a[i];
        a[i]=a[end];
        a[end]=t;
       end--;//doont increment i  here,, bezoz swapped value may be 0 also, so check it again..
      }
      else
      i++;
   }
   for(i=0;i<l;i++)
   printf("%d ",a[i]);
}
