int rnd(float num);
void main()
{
    float n=-4.55;
    printf("%d",rnd(n));
}
int rnd(float num)
{
    return (int)(num < 0 ? (num - 0.5) : (num + 0.5));
}
