#include <math.h>
int chk(float a,float b);
void main()
{

printf("%d",chk(2.33,2.35));
float f1=4.51000001,f2=4.510002;

printf("%f",abs(f1));
}
int chk(float a,float b)
{
   return  (fabs(a - b) <=  0.01* fabs(a));
}
