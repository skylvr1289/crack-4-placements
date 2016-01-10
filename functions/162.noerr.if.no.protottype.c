#include <stdio.h>
#define s(x) (#x)
/* int foo(int
int foo2(int a, int b); */
int main(int a)
{
    int (*fp)(int a);
    char xrf;
printf("%s", #xrf);
 a = foo();
 a = foo2(1);
  exit(0);
   }
int foo(int a)
{
    #undef s
    #define s 10
    return(a);
     }
int foo2(int a, int b)
{
    return(a+b);
     }
