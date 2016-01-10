#include<stdio.h>
#define SIZE 40
void print_spiral(int n);
 int a[40][40];
void main()
{
 int N=4;
 int a[40][40];
 print_spiral(N);


}
void print_spiral(int n)
{
  int c=1;
  int i,j,k;
  for(i=0,j=n-1;j>=0;j--,i++)
  {
      for(k=i;k<j;k++) a[i][k]=c++;
      for(k=i;k<j;k++) a[k][j]=c++;
      for(k=j;k>i;k--) a[j][k]=c++;
      for(k=j;k>i;k--) a[k][i]=c++;

  }
for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
  printf("%3d ",a[i][j]);
  printf("\n");
 }



}
