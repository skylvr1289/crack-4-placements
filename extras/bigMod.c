
  #include<stdio.h>
int bigmod ( long long a, int p, int m );
      main()

      {

      printf("%d",bigmod(7,2004,13));
      }
int bigmod ( long long a, int p, int m )
{
    if ( p == 0 )return 1; // If power is 0 ( a ^ 0 ), return 1

    if ( p & 1 ) // If power is odd, a ^ 7 = a * a ^ 6
    {
        return ( ( a % m ) * ( bigmod ( a, p - 1, m ) ) ) % m; // Multipication      may exceed int range
    }
    else
    {
        long long c = bigmod ( a, p / 2, m ); // Multipication may exceed int range
        return ( c * c ) % m;
    }
}
