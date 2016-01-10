void main()
{
int a[10]={1,2,3,4,5,4,5,6,7,3};

int i,j,k,l;
for(i=0;i<10;i++)
{
    for(j=0;j<10;j++)
        {
          if(a[i]==a[j]&&i!=j)
            printf("duplicate found..at loc %d..==val=%d\n",i,a[i]);

        }
}


}
