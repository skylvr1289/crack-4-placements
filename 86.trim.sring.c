void trim(char*s);
void main()
{
int a=5;
char s[30]="hello     i m   abhi";
trim(s);
 }
void trim(char*s)
{
    char p[30];//=malloc(100);

  int i=0;
    for(;*s!='\0';s++)
    {
        if((*s)!=' ')
          p[i++]= *s;

    }
    p[i]='\0';
    printf("\n%s",p);printf("%d",__LINE__);
    //return p;

}
