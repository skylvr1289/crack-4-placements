char* bin(int n);
void main()
{
    char *p;
bits(100003);
p=bin(8);
printf("\n** %s..length==%d",p,strlen(p));
}
void bits(int n)
{
    if(n)
   {
        int r=n%2;
        bits(n/2);
       // bits(n>>=1);
        printf("%d",r);
   }

}
char* bin(int n)
{
    char*p=malloc(30);
    *p='\0';
    while(n)
    {
        (*--p)="01"[n%2];//beacause we can write a[i] to i[a] also...same bvalue..here it is string ...
        n=n/2;//do not 4get this .u generaaly forget this..
    }
    //printf("\n%s",p);
    return p;
}
