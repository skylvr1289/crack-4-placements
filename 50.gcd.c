void main()
{
gcd(3,8);
}
int gcd(int a,int b)
{
    int r;
    r=a%b;
    if(r==0)
      {printf("gcd...=%d",b);return b;}
      else
      gcd(b,r);
}
