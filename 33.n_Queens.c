#include<stdio.h>
#define N 4
int t[N+2]={-1};
static int cnt=0;
void main()
{
queens(1);
 printf("\n..%d solutionas..",cnt);
}
void queens(int i)
{
    for(t[i]=1;t[i]<=N;t[i]++)
    {
        if(empty(i))
       {
            if(i==N)
             {
                 print_solution();
                 //exit(0);
             }
            else
               queens(i+1);
        }
    }
}

int empty(int i)
{
    int j=1;
    while(t[i]!=t[j]&&abs(t[i]-t[j])!=(i-j) && j<N)
    j++;
    return(i==j?1:0);
}void print_solution()
{
    int i;cnt++;
    for(i=1;i<=N;i++)
      printf("t[%d]==[%d]\n",i,t[i]);
      printf("\n");
}
