void main()
{
 char s[]="abhceabhidefghiabhikumaryadaava",sub[]="abhi";
 int i,j,k,l1=strlen(s),l2=strlen(sub);

   for(i=0;i<l1-l2+1;)
   {
       j=1;
      if(s[i]==sub[0])
      //check
      {
         while(s[i+j]==sub[j]&& j<=l2)j++;
         if(j==l2)
          {printf(" *%s*  found.. at a[%d] to a[%d]\n",sub,i,i+j-1);break;}
          else
           printf(" skipped..j==%d \n",j);
      } i=i+j;

   }

}
