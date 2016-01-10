#include<stdio.h>
char* mystrcpy(char*dst,char*src);
void main()
{
    char s[]="abhishek",*s2;
mystrcpy(&s2,"bhi");printf("%s\n",&s2);
mystrcpy(s,"bhi");printf("%s\n",s);

printf("\n%d",my_strcmp("abhi","abhi"));

my_substr("abhihsehkkumar",s,0,10);
printf("\nsbstr..%s",s);
}
char* mystrcpy(char*dst,char*src)
{
    char*ptr;
    ptr=dst;
    while((*src)!='\0')
      {
          (*dst)=(*src);
          dst++;src++;
      }
      *dst='\0';
   return ptr;
    }
 int my_strcmp(const const char*s1,const char*s2)
 {
     while(*(s1)==*(s2)){
       if(*s1=='\0')
          return 0;
        s1++;s2++;
     }
     return(*s1-*s2);
 }
void my_substr(const char*str,char*sub,int loc,int sublen)
{
    while(sublen>0)
    {
    *sub++=*(str++ +loc);
   sublen--;
    }
    *sub='\0';
}
