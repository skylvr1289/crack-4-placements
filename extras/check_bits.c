void main()
{
//Question== 75
check(45,2,5);
//printf("%d",45&8);
}
void check(int n,int p,int q)
{
int r,s;
r=n&(1<<(p-1));
s=n&(1<<(q-1));
if( (r!=0 && s!=0)|| (r==0&&s==0))
  printf("both are same ");
  else
  printf("both r diff");

}
