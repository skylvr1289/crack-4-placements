void main()
{

char s[]="avon sees nova";
char*p1,*p2;int l=0,m=0;
p1=s;
p2=s;
while(*p2!='\0')
 {p2++;l++;}
 while(*p1++==*--p2&&m<l/2)
 {
   m++;
   //printf(".\n");
 }
  if(m==(l/2))
     printf("palindrome  l=%d,m=%d",l,m);
     else
     printf("not a palindrome..l=%d,m=%d",l,m);
}
