#include <stdio.h>
#include <conio.h>
int isSubset(char *a, char *b);
void main() {
    char str1[]="def";
     char str2[]="bcfed";
      if(isSubset(str1, str2)==0)
       {
        printf("\npresent");

       }
       else
        printf("\n not....present");
}
int isSubset(char *a, char *b)
{
     int letterPresent[256];
     int i;
for(i=0; i<256; i++)
 letterPresent[i]=0;
  for(i=0; a[i]!='\0'; i++)
  letterPresent[a[i]]++;
   for(i=0; b[i]!='\0'; i++)
      if(letterPresent[b[i]])
         {printf("%c",b[i]);return(0);}

    return(1);
     }
