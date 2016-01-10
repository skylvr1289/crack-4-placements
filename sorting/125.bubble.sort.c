
void main()
{
    int i, j, temp=0;
 int flag;
 int a[]={1,2,3,4,5,6,5,9},n=8,t;
 for(i = 0; i < n; i++)
{
    flag = 0;
    for(j = 1; j < (n - i); j++)
     {
         if(a[j] >= a[j-1])
          {
             t=a[j];
             a[j]=a[j-1];
             a[j-1]=t;

              flag = 1;
         }temp++;;
     }

}
 printf("%d..\n",temp);
for(i = 0; i <n; i++)
     printf("%d\t",a[i]);

}

