void main()
{
    char s[]="this is a string to be splitted into strin gs of length 6 each";
    char dest[7];
    int i,k,j,l;
    l=strlen(s);
    k=6;
    i=0;
    while(s[i]!='\0')
    {
        strncpy(dest,(s+i),k);
        dest[k]='\0';
        printf("%s\n",dest);
        i=i+k;
    }
}
