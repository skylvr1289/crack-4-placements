void main()
{
int a[]={0,1,0,0,1,1,1,1,0};
int i,j,k,n=9;
int count0=0,count1=0,index,lindex;


for(i=0;i<n;i++)
 {
      count1=0;count0=0;
   for(j=i;j<n;j++)
    {
            if(a[j]==0)
              count0++;
           else
            count1++;

            if(count0==count1)
          {index=i;lindex=j;printf("interval %d to %d  has %d <--1&0\n",index,lindex,count0);}
    }
 }
}

