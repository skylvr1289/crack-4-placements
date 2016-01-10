char *bangla(char*s);
void main()
{

char *p,s[20]="458973958";
p=bangla(s);
printf("%s",p);


}
char *bangla(char*s)
{
   char*p=malloc(300);
   *p='\0';
   int l=strlen(s),i=1;
   while(i<= l)
   {
       if(i<3)
         {
          *--p=s[l-i++];

         }
        else if(i==3)
        {
        *--p='a';
        *--p='t';
        *--p='a';
        *--p='h';
        *--p='s';
        *--p=s[l-i++];
        }
        else if(i==4)
        {

         *--p='r';
        *--p='a';
        *--p='j';
        *--p='a';
        *--p='h';
        *--p=s[l-i++];
        }
        else if(i==6)

    {
        *--p='h';
        *--p='k';
        *--p='a';
        *--p='l';
        *--p=s[l-i++];
          }
          else if(i==8)

    {
        *--p='i';
        *--p='t';
        *--p='u';
        *--p='k';
        *--p=s[l-i++];
          }
          else
          *--p=s[l-i++];
          }
   return p;
   }

