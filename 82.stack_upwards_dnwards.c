void main()
{
int a=5;
int b=6;
printf("a==  %u   ,b== %u",&a,&b);
if(&a < &b)
  printf("\nstack growing downwards...");
  else
 printf("\nstack growing upwards...");
 }
