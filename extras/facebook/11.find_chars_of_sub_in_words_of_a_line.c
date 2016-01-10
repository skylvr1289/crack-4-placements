void main()
{

 char sub[]="abh";
 char line[]="abhiabek is a gaood baaoy";// if we hv to find only presence it's ok..
 int i,j,k,count,l=strlen(sub);
 char present[257]={0};
 for(i=0;sub[i]!='\0';i++)
   present[sub[i]]++;

   i=0;
   for(i=0;line[i]!='\0';i++)
   {
      count=0;j=i;
      while(line[i]!=' ')
       {
         if(present[line[i]]==1)/// will also increment count  if same charater repeated in word
           count++;

             i++;
            if(count==l)
             {
                printf("found in word at index  line[%d]=%c count==%d\n",j,line[j],count);
                break;
             }
       }
       if(count!=l && count>0)
         printf("somthing found in word at index line[%d]=%c\n",j,line[j]);


   }
   printf("%c %c %c",line[0],line[11],line[18]);
}
