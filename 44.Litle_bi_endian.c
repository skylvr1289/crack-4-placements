void main()
{
union {
		int i;
		char c[4];
	} x;
	x.i = 258;//x.i==256 then -==0
	if(x.c[1] == 1)
		printf("little-endian &c[3] =%d  &i=%d\n",&(x.c[2]),&(x.i));
	else	printf("big-endianc0=%d  c1=%d\n",x.c[0],x.c[1]);

int p = 1;
	if(*(char *)&p == 1)
		printf("little-endian\n");
	else	printf("big-endian\n");

}
