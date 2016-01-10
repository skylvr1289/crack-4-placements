void main()
{
    //we are keeping srat pointer on 1 , as soon we get nearest 0, we replace it with this 1,
 int a[]={0,0,0,1,0,1,1,1,1,0,0,0,0};
  int start=0,end=12,i=0,t;
  if(a[0]==0)
        {i++;start++;}
  while(i<=12)
  {
     if(a[i]==0)// swap n move both i & start
    {
    //swap a[i] with a[start]
    t=a[i];
    a[i]=a[start];
    a[start]=t;
      start++;i++;
    }
    else/// 1 skip if 1
    {
      i++;

    }

  }
  for(i=0;i<12;i++)
  printf("%d ",a[i]);

}
