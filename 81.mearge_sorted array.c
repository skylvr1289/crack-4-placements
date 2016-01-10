void main()
{///some errrors a re coming..
int a[4]={1,3,5,7};
int b[6]={2,3,6,9,10,12};
int c[12];
int i=0,j=0,k=0,m=4,n=6;
while(i<m&&j<n)
{
    if(a[i]<b[j])
    {
         c[k++]=a[i];
         i++;
    }
     else if(a[i]==b[j])
     {
         c[k++]=a[i];
         i++;j++;
     }
    else
    {
        c[k++]=b[j];
         j++;
    }

}
while(i<m)
c[k++]=a[i++];
while(j<n)
 c[k++]=b[j++];
for(i=0;i<k-1;i++)
printf("%d\t",c[i]);
}

