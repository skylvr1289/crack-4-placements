int main()
{
    //iea is 110101 rotate by 2 bits.. then get a m=110100,s=n-m==01 shift s by 4 bits 010000, right shift n by  2bits now add both.
int n,m,l,c,s,result;
n=429;c=4;l=no_of_bits(n);
m=(n>>c);                     //  printf("m=%d\n",m);
m=(m<<c);                    //printf("m=%d\n",m);
s=n-m;                      //printf("s=%d\n",s);
s=(s<<(l-c));              //printf("s=%d\n",s);
n=(n>>c);                 //printf("n=%d\n",n);
result=(n+s);            //printf("n+s=%d\n",n+s);
printf("resiult==%d..no of bits==%d==%d",result,no_of_bits(result),l);
}
int no_of_bits(int n)
{
    int count=0;
    while(n)
    {
        n>>=1;
        count++;
    }
    return count;
}
