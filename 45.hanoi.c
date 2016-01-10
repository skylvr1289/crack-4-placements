main()
{
    hanoi(3,'a','b','c');
}
void hanoi(int n, char from,char to,char temp)
{
    if(n>0)
    {
        hanoi(n-1,from,temp,to);
        printf("move disk %d from %c to %c\n ",n,from,to);
        hanoi(n-1,temp,to,from);
    }
}
