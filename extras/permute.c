#define SIZE 4
void permute(char s[SIZE],int k, int m );

void main()
{

char s[5]="abcd";
permute(s,0,4);

}

void permute(char s[SIZE],int k, int m )
{
 int i;
  if(k==m)
   {
       for(i=0;i<SIZE;i++)
    {printf("%c",s[i]);}
    printf("\n");
   }
 else
 {
   for(i=k;i<m;i++)
    {
        char t;
        t=s[i];
       s[i] =s[m-1];
        s[m-1]=t;
        permute(s,k,m-1);
        t=s[i];
       s[i] =s[m-1];
        s[m-1]=t;

    }


 }


}
