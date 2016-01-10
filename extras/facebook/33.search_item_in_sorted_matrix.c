void main()
{
 int a[5][4]={{1,2,3,4},
              {3,4,5,6},
              {5,6,7,8},
              {9,12,13,14},
           };

int i,j,k,val=4;

i=0;j=3;

while(i>=0 && j>=0 && i<4 && j<4 )
{
   // printf("..Line ---%d",__LINE__);
   if(a[i][j]==val)
     {printf(" val=%d fouond at a[%d][%d]\n",val,i,j);i++;}//break;}
    else if(a[i][j]< val)
       i=i+1;
    else
     j=j-1;
}
}
