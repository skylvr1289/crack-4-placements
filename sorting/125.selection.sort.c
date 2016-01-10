
void main()
{
    int i, j, small,pos,temp=0;
 int flag;
 int a[]={1,2,3,4,5,6,5,9},n=8,t;
 for(i = 0; i < n; i++)
{
    small=a[i];
    pos=i;
    for(j = i+1; j < n; j++)
     {temp++;
         if(a[j] <small)
          {
            small=a[j];
            pos=j;
          }
     }
             t=a[i];
             a[i]=a[pos];
             a[pos]=t;
}
 printf("%d..\n",temp);
for(i = 0; i <n; i++)
     printf("%d\t",a[i]);

}

