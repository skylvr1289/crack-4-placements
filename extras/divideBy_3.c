char *convertBase(int n,int base);
unsigned int  div3(unsigned int m);

void main()
{
char *s;
s=convertBase(1112,3);
printf("s==%s\n",s);
printf("%d\n",div3(1112));
printf("divisible by 3== %d\n",divisibleBy3(12));
}
char *convertBase(int n,int base)
{
   char *s=malloc(30);
   *s='\0';
   while(n)
   {
   *--s="0123456789ABCDEF"[n%base];
   n=n/base;
   }
   return s;
}
unsigned int  div3(unsigned int m) {
   unsigned long long n = m;
   n += n << 2;
   n += n << 4;
   n += n << 8;
   n += n << 16;
   return (n+m) >> 32;
}

int divisibleBy3(int n)
{
    int odd=0,even=0;
    if(n<0) n=-n;
    if(n==0)return 1;
    if(n==1) return 0;
    while(n)
    {
        if(n&1)
         even++;
         n>>=1;
         if(n&1)
           odd++;
           n>>=1;
    }

   return  divisibleBy3(even-odd);
}
