#include<stdio.h>
#define max_line 1000
void main()
{
char* file_path_from="./a.txt";
char* file_path_to="./acpy.txt";
FILE* f_from;
FILE* f_to;
char buf[max_line+1];

f_from=fopen(file_path_from,"r");
f_to=fopen(file_path_to,"w+");

//........

while(fgets(buf,max_line+1,f_from))
   if(fputs(buf,f_to))// {exit(1);}
   fputs("helllooo",f_to);
   int i=0;
   for(i=0;i<100;i++)
   {
           char s[]="i m abhishek\n";
        fputs(s,f_to);
   }
}
