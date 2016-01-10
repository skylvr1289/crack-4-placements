#include<stdio.h>
void rev(char*s1,char*s2);

void main()
{
char s[]="Abhsihek kumarr yadav is my name..",*st,*tmp,*tmp2;
for(st=s;*st;st++);

rev(s,st-1);
printf("%s",s);

tmp=s-1;
tmp2=s;
while(tmp++<st)
{
    if((*tmp)==' '||(*tmp)=='\0')
      {rev(tmp2,tmp-1);tmp2=tmp+1;}

}

printf("\n%s",s);
}
void rev(char*beg,char*end)
{
  char t;
  while(beg<end)
  {
      t= (*beg);
      *beg++ = *end;
       *end-- = t;
  }
}

