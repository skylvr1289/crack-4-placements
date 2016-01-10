void main()
{
int a[10]={1,2,4,8},b[4]={3,4,5,6},i;
mearge(a,b,4);
for(i=0;i<8;i++)
printf("%d ",a[i]);
}
void mearge(int a[],int b[],int n)//mearge b ibto a[]// both are sorted..make b[] to contain all values greater than all element in in a[]
{
   int i,j,t;
   for(i=0;i<n;i++)
   {
     if(a[i]>b[0])
     {
      t=b[0];
      b[0]=a[i];
      a[i]=t;
     }
     for(j=1;j<n;j++)
     {
        if(b[j]<b[j-1])
         {
         t=b[j];
         b[j]=b[j-1];
         b[j-1]=t;
         }
     }
   }
for(i=0;i<n;i++)
a[n+i]=b[i];


}
