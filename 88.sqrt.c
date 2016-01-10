float msqrt(float x);
void main()
{
    float f=5.0;
printf("..%f...==%f",msqrt(f),sqrt(f));
 }
float msqrt(float x)
{
  float r,f;
  r=x/2.0;
  f=x;
  while(f-r>0.001)
  {
      f=r;
      r=(r+x/r)/2.0;
  }
  return r;
}
