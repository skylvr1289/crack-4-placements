#include <stdarg.h>
 int myfunction(char *first_argument,...)
 {
     int length;
      va_list argp;
      va_start(argp, first_argument);
  char *p; length = strlen(first_argument);
  while((p = va_arg(argp, char *)) != 0)
  {
      length = length + strlen(p);
  }
  va_end(argp);

return(length);
 }
 int main()
 { int length;
 length = myfunction("Hello","Hi","Hey!",(char *)0);//the last 0 is to notice taht no more arguments..
 printf("%d",length);
 return(0);
 }
