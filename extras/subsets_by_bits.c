void main()
{//not complete..:P :( :(
int n=11;
print_sub_set(n);
//printf("%d..\n",set_bit_zero(11,3));
}

 int set_bit_zero(int n,int i)
{
   //set i'th set bit to zero..1011 me i=3 mens 4th bit here in 1011
  if(i<= count_set_bits(n))
  {

   int k=0,m=n,j=0;
   while(k<i && m)
   {
       if(m&1)
         k++;
         j++;m>>=1;
   }
   return (n - (1<<(j-1)));
  }else return n;
}
 void print_sub_set(int n)
 {
     printf("%d \n",0);
     printf("%d \n",n);
      int i,j,m,p,no_of_set_bits=count_set_bits(n);
   for(i=1;i<=no_of_set_bits;i++)
   {

       m=set_bit_zero(n,i);
        if(m)
       {
           printf("%d  ",m);
           printf("%d  ",n^m);
           //need a recursive call here..
          for(j=i+1;j<=count_set_bits(m);j++)
             {
                 p=set_bit_zero(n,j);
                 printf("%d  ",p); //printf("%d  ",p^n);
             }
           //print_sub_set(m);
       }
       printf("\n");

   }


 }
int count_set_bits(int n)
{
   int count=0;
   while(n)
   {
    n=(n&(n-1));count++;
  }
  return count;

}
