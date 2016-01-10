
void main()
{

int a[5]={1,4,2,5,3};
Q_sort(a,0,4);
int i;
for(i=0;i<5;i++)
printf("%d",a[i]);

}
void Q_sort(int a[],int low,int high)
{
    int j;
    if(low<high)
    {
        j=partition2(a,low,high);
        Q_sort(a,low,j-1);
        low=j+1;//Q_sort(a,j+1,high);
    }
}
int partition(int a[],int low,int high)
{
    int i,j,key,t;
    i=low;
    j=high;
    key=a[i];
    while(1)
    {
        while(i<high && a[i]<=key)i++;//we r thinking that we hv a larger vale,,we want to put it to approprite position
        while(a[j]>key)j--;
        if(i<j)
        {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }else
        {
            t=a[low];
            a[low]=a[j];
            a[j]=t;
            return j;
        }
    }
}
int partition2(int a[],int low,int high)
{
    int key=a[high],t;
    int i=low-1,j=low;
    for(j=low;j<high;j++)
     {
         if(a[j]>=key)//make a[j]<=key for increasing order
           {
                i++;
            ///swap a[i] & a[j]
               t=a[i];
              a[i]=a[j];
        a[j]=t;
           }
     }
     ///swap a[i+1] with key=a[high]
            t=a[high];
            a[high]=a[i+1];
            a[i+1]=t;

         return i+1;
}
