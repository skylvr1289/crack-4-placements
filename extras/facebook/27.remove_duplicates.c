void main()

{
    char s[]="ababacadefga";
remove_duplicates(s);

}
void remove_duplicates(char *s)
{
  int present[257]={0};
  int start,i;
  for(start=0,i=0;s[i]!='\0';i++)
  {
    present[s[i]]++;
    if(present[s[i]]==1)//once
      s[start++]=s[i];//// save it back
  }
  s[start]='\0';
printf("%s",s);
}
