
void main()
{

int a[5]={5,4,2,2,1};
insertion_sort(a,5);
int i;
for(i=0;i<5;i++)
printf("%d",a[i]);

}
void insertion_sort(int a[], int n)
 {
     int i, j, item;
     for(i = 0; i < n; i++)
 {
        item = a[i];
         j = i - 1;
       while(j >=0 && item < a[j])
       {
       a[j + 1] = a[j]; j--; }
        a[j + 1] = item;
   }
    }
