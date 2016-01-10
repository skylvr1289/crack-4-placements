#include <stdlib.h>

void main()
{
int a[4]={1,2,3,4},sum=0,i;
int b[4];
memcpy(b,a,16);
for(i=0;i<4;i++)
printf("%d\t",b[i]);
}
