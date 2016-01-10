  float log2(float y);
void main()
{
    printf("%f",log2(129.0));
}
float log2(float y)
{

int m=0,n=0;
  float x;

while(y>=2.0)
{
  y=y/2.0;
  m++;// m will save integer part of ln(y)  sinec initial Y= (2^m)*y;, where y is after m divisions of orginal Y
}
while(y-1>=0.00001)
{
    y=sqrt(y);
    n++;
}
// we can see for smaller nos...    ln(n+1)=n/(ln2)=n*1.4426
x=m+pow(2,n)*(y-1)*1.4426;
return x;
}
