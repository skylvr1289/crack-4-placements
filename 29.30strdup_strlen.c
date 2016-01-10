#include<stdio.h>

void main()
{
char s1[]="abhsihek",s2[]="kumar";
my_strcat(s1,s2);
printf("%s",s1);

}
void my_strcat(char*s1,char*s2)
{

    while(*s1!='\0')
           s1++;
    while(*s2!='\0')
      *s1++=*s2++;
      *s1='\0';

}
