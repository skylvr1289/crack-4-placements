void main()
{
    int yr=1600;
 printf("%d",leap(yr));

    }
    int leap(int yr)
    {
        return (yr%4==0&&(yr%100!=0||yr%400==0));
    }
