 #include<stdio.h>
int M[2][2]={{1,0},{0,1}};
int A[2][2]={{1,1},{1,0}};
 int C[2][2]={{0,0},{0,0}};
 int perfectSqr(float n);
 void matM(int n);
 void mul(int flag);
void main()
{

printf("%d\n",fib(2));//1,1,2,3,5,8,13,21,34
int n=9;
matM(n-1);
printf("%d th fibonacci no.. %d\n",n,M[0][0]);
printf("%d th fibonacci no.. %d\n",n,fib2(n));

printf("\nif %d is..perfect  square...%d\n",120,perfectSqr(120.0));
printf("\nif %d is fbonacci no..%d\n",34,chkFib(34));
}

 int fib(int n)
 {
      return n<=2?1:fib(n-1)+fib(n-2);
 }
 void matM(int n)
 {
     if(n>1)
     {
         matM(n/2);
         mul(0);//m*m
     }
     if(n%2!=0)
     mul(1);//m*{1,1,1,0}
 }
void mul(int flag)
{
    int i,j,k,t;
    if(flag==0)//m*m
    {
        for(i=0;i<2;i++)
           for(j=0;j<2;j++)
              {C[i][j]=0;
                  for(k=0;k<2;k++)
                    C[i][j]+=M[i][k]*M[k][j];
              }

    }
    if(flag==1)
    {
  for(i=0;i<2;i++)
           for(j=0;j<2;j++)
              {C[i][j]=0;
                  for(k=0;k<2;k++)
                    C[i][j]+=A[i][k]*M[k][j];
              }

    }
    for(i=0;i<2;i++)
           for(j=0;j<2;j++)
              M[i][j]=C[i][j];
}
int perfectSqr(float n)
{
    return ((int)sqrt(n))*((int)sqrt(n))==n?1:0;
}
int chkFib(int n)
{
    return (perfectSqr(5*n*n+4)||perfectSqr(5*n*n-4))?1:0;

}
int fib2(int n)
{
    float n1=pow(((1+sqrt(5))/2) , n);
    float n2=pow(((1-sqrt(5))/2), n);
    return ((n1-n2)/sqrt(5));
}
