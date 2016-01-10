#define SIZE 4
void power_set(char s[SIZE]);

void main()
{

char s[]="abc";
int l=strlen(s),t;
int i,j,k,pn=pow(2,l);
char str[pn][l+1];


for(i=0;i<pn;i++)
{
    if(i==0)
      str[i][0]='\0';
  /*  else if((i&(~i+1))==i)//power of two
      {
          k=0;t=i;
          while(t)
          {
              t>>=1;
              k++;
          }
          str[i][0]=s[l-k];
          str[i][1]='\0';
      }*/   //use this if he says to improve code...
      else{
           j=0;k=0;t=i;
          while(t)
          {
              if(t&1)
               {
                 str[i][k]=s[l-j-1];  k++;
               }
              t>>=1;j++;//k for new string pointer str[][]....,j for old string s[]
          }str[i][k]='\0';//dont forget to putt null at end of string..
      }



}
for(i=0;i<pn;i++)
{
    printf("%s\n",str[i]);
}
}
