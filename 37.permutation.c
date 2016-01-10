#include<stdio.h>
#define SIZE 7
int cnt=0;
void main()
{
char s[3]={'a','b','c'};
int i,j,k;
for(i=0;i<3;i++)
 for(j=0;j<3;j++)
   for(k=0;k<3;k++)
      if(i!=j&&i!=k&&j!=k)
        printf("%c%c%c\n",s[i],s[j],s[k]);



     char list[7]={'a','b','c','d','e','f','g'};
     permute(list,0,7);
printf("\n...%d",cnt);
}
void permute(char l[SIZE],int k,int m)
{
    int i,j;char c;
    if(k==m)
       {
           for(i=0;i<SIZE;i++)
             printf("%c",l[i]);
             printf("\n");cnt++;
       }
       else{
           for(i=k;i<m;i++)
        {

         ///swap l[i] l[m-1]
         c=l[i];
         l[i]=l[m-1];
         l[m-1]=c;
         permute(l,k,m-1);

         c=l[m-1];
         l[m-1]=l[i];
         l[m-1]=c;
        }
       }
}
