#include<stdio.h>
//char* convert(int num,int base);
void main()
{

   my_strstr("abhishehisk",8,"his",3);



convert(100000,2);
}
void my_strstr(char*str,int l,char*sub,int m)//complexity==O(n*n)
{
    printf("string== %s\t..sub == %s\n",str,sub);
    int i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<m,*(sub+j)==str[i+j];j++);//both way we can write a string..pointer.
        if(j>=m)
        printf("\nmatch found from%d to %d\n",i+1,i+m);
    }
}
void convert(int num,int base)
{
    char ptr[1];
    char*s;
    s=ptr;
    *s='\0';
    while(num>0)
    {
        *--s="0123456789abcdef"[num%base];
        num=num/base;
    }
printf("%s",s);
//return s;
}
