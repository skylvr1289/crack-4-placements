void main()
{
int a[10]={1,2,3,4,4,4,5,6,7,7};

int i,j,k,l;
j=0;
for (i = 1; i < 10; i++)
 { if (a[i] != a[j])
  { j++;
   a[j] = a[i]; // Move it to the front

   }
   }for (i = 0; i < j+1; i++)
printf("%d\n",a[i]);
}

