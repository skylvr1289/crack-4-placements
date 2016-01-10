int exchange_evn_odd_digits(int n);
void main()
{
    exchange_evn_odd_digits(12345);
}
int exchange_evn_odd_digits(int n)//
{

  int i=0,r1,r2,sum=0,sub_no=0,m=n;
  while(m>9)
  {
     r1=m%10;m=m/10;
     r2=m%10;m=m/10;
     sum=r2+r1*10;
     sum=sum*pow(100,i);
     sub_no+=sum;
     i++;
  }
  sum=(m);//in case of odd digit left 2m-m=m
  sum*=(float)pow(100,i);
  sub_no+=sum;
  n=sub_no ;
  printf("\n%d",n);
return n;
}
