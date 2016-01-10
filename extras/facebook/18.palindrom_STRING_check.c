void main()
{
    char s[]="abacdcaba";
    check_palindrome(s);
}

void check_palindrome(char *s)
{
 int start=0,end,l=strlen(s);
 end=l-1;
 while(start<end &&s[start++]==s[end--] );

 if(start==l/2)
  printf("YEs A Plaindrome");
  else
   printf("NO. nOt A Plaindrome");
}

