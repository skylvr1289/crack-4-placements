int  list[]={123,456,212,142,251,362,152,352},n=8;
    int check_mat(int a[]);
     void print_mat(int mat[]);
void main()
{
  int mat[3];
  int i,j,k,l,col1,found=0;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      for(k=0;k<n;k++)
        {
          if(list[i]!=list[j] && list[i]!=list[k] && list[j]!=list[k])//al distinct not a!=b && !=c this does not mean  b!=c ..it may be b=c
           {
               col1=(list[i]/100)*100+(list[j]/100)*10+(list[k]/100);// check for 1st colum if exists then only send check
               if(search(list,col1))
                  {
                      mat[0]=list[i];
                      mat[1]=list[j];
                      mat[2]=list[k];

                      if(check_mat(mat)!=0)
                      {
                         printf("matrix exists..\n");
                         print_mat(mat);found=1;
                      }
                  }


            }
        }
        if(!found)
        {
            printf("matrix does NOT exists... .\n");
        }
}
 void print_mat(int mat[])
        {
            printf("\n.....printing Matrix....\n");
          int i;
          for(i=0;i<3;i++)
            printf("....%d\n",mat[i]);

        }
    int check_mat(int a[])
    {
      int i,j;
      int col1,col2,col3,dig1,dig2;
      int a1,b1,c1,a2,b2,c2,a3,b3,c3;
      a1=(a[0]/100);
      a2=(a[1]/100);
      a3=(a[2]/100);

      b1=((a[0]/10)%10);
      b2=((a[1]/10)%10);
      b3=((a[2]/10)%10);

      c1=(a[0]%10);
      c2=(a[1]%10);
      c3=(a[2]%10);



      col1=a1*100+a2*10+a3;
      col2=b1*100+b2*10+b3;
      col3=c1*100+c2*10+c3;

      dig1=a1*100+b2*10+c3;
      dig2=c1*100+b2*10+a3;
        //printf("%d %d %d\n %d %d\n",col1,col2,col3,dig1,dig2);


    if(search(list,col2)&&search(list,col3)&&search(list,dig1)&&search(list,dig2))
       return 1;
    else
       return 0;

    }
    int search(int a[],int val)
   {
     int i;
     for(i=0;i<n;i++)
       {
         if(a[i]==val)
          return 1;
       }
         return 0;
   }
