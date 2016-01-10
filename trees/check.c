#include <stdio.h>
/* int foo(int
           */
#define DEBUG(args) (printf("DEBUG: "),printf args)

int main()
{
   int n=8,m=9;
   DEBUG(("n is %d m= %d\n", n,m));
}

