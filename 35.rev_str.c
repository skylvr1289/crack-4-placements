#include<stdio.h>
char* rev(char*s);
void reverse(char*s);
void main()
{
char s[100]="Abhsihek kumarr yadav is my name..",*s2;
reverse(s);
printf("%s",s);

s2=rev(s);
printf("\n%s",s2);
}


void reverse(char*s)
{
    int l=strlen(s);
    int i;
    char t;
    for(i=0;i<l/2;i++)
    {
        //swap ith n l-i-1 th
       t=s[i];
       s[i]=s[l-i-1];
       s[l-i-1]=t;
    }
}
char* rev(char*s)
{
     char*ptr;
    ptr=(char*)malloc(strlen(s)+1);
    *ptr='\0';
    while(*s!='\0')
       *--ptr=(*s++);
    return ptr;

}
