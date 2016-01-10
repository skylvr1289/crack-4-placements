#include <stdio.h>

int main()
{
float f=0.0f;
int i;
for(i=0;i<10;i++)
f =+ 0.1f;
if(f==1.0f)
printf("f is 1.0f\n");
else
printf("f is NOT 1.0f\n");
return 0;
}
