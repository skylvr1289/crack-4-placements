#include<stdio.h>
void main()
{
int n, a[8][50]={0},c[100],count;
int one,two,three,four,five,six,seven,i,j;
one=two=three=four=five=six=seven=0;
for(i=1;i<100;i++)
{
   n=no_of_ones(i);
   switch(n)
   {
       case 1: a[1][one++]=i;break;
       case 2: a[2][two++]=i;break;
       case 3: a[3][three++]=i;break;
       case 4: a[4][four++]=i;break;
       case 5: a[5][five++]=i;break;
       case 6: a[6][six++]=i;break;
       case 7: a[7][seven++]=i;break;
       default:printf("smthing wrong...\n");break;
   }

}
count=0;
for(i=1;i<8;i++)
 {
     j=0;
     while(a[i][j]!=0)
     {
         c[count++]=a[i][j];
         printf("%d \t",a[i][j++]);;

     }
   printf("\n\n");
 }
 for(i=0;i<count;i++)
 {
   printf("%d\n",c[i]);
 }
 }


no_of_ones(int n)
{
 int count=0;
 while(n)
 {
   n=(n&(n-1));
   count++;
 }
 return count;
}
