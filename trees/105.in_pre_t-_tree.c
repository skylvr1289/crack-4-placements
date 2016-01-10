#include<stdio.h>
static char in[]="gdhbeiafjc";
static char pre[]="abdgheicfj";
static char t[100][100]={'\0'};
void str_cpy(char dest[],char src[],int pos,int start,int end);
void print_t();
int hpos=0;
int posn;
void main()
{
  int i,j,k;

  for(i=1;i<strlen(in);i++)
  {
      if(in[i]== pre[0])
        {

             str_cpy(t[1],in,1,i,i);
             str_cpy(t[2],in,2,0,i-1);
             str_cpy(t[3],in,3,i+1,strlen(in));
            print_t();
    }
  }// Now construct the remaining tree
for(i=1;i<strlen(pre);i++)
{
    for(j=1;j<=hpos;j++)
    {
        if(strchr(t[j],pre[i])!=0&&strlen(t[j])!=1)
        {
            for(k=0;k<strlen(t[j]);k++)
               {
                   if(t[j][k]==pre[i])
                     {posn=k;break;}
               }
               printf("splitting ..[%s] for pre[%d]\n",t[j],i);
               str_cpy(t[2*j],t[j],2*j,0,posn-1);
               str_cpy(t[2*j+1],t[j],2*j+1,posn+1,strlen(t[j]));
               str_cpy(t[j],t[j],j,posn,posn);
               print_t();
        }
    }
}

}
void str_cpy(char dest[], char src[], int pos, int start, int end)
{
    char mysrc[100]; strcpy(mysrc,src);
 dest[0]='\0';
 strncat(dest,mysrc+start,end-start+1);
  if(pos>hpos)hpos=pos;
   }

void print_t()
{
    int i;
    for(i=1;i<=hpos;i++)
      printf("t[%d]==[%s]\n",i,t[i]);
      printf("\n");
}
