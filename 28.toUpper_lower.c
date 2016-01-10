#include<stdio.h>
char toUpper(char c);
char toLower(char c);
void main()
{
printf("%c\n",toUpper('x'));
printf("%c\n",toLower('H'));
printf("%d",'a');
}
char toUpper(char c)
{
   if(c>='a'&&c<='z')
      c=c+('A'-'a');
      return c;
}
char toLower(char c)
{
    if(c>='A'&&c<='Z')
       c=c+('a'-'A');
       return c;
}
