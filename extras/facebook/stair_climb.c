 int getWays(int n);
void main()
{
 int n=getWays(5);
 printf("no of ways -== %d",n);

}
 int getWays(int n)

   {
        int temp1=1,i;
        int temp2=2;
        n=n-2;
       int temp3;
      while(n>0)

      {
         temp3=temp1 +temp2;
         temp1=temp2;
          temp2=temp3;



         n--;

      }
      return temp2;
   }

