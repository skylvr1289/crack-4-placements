void main()
{
 int x=6;///print TRUE   X TIMES WITH A PROBABILITY X/100
  int n,i=0;
  while(i!=x)
 {
    n=rand()%100;
    if(n<x)
    {
       i++; printf("%d  TRUE\n",n);
    }

 }

}
