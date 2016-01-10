void print(void (*f)(void*p));
void printint(void *integer);
void printstring(void *str);
void main()
{int *a=9;
  print(printint);

}

void print(void (*f)(void*p))
{
int i=7;
  (*f)(i);
}

void printint(void *integer)
{
    printf("%d",(int*)(integer));
}

void printstring(void *str)
{
    printf("%s",(char*)(str));
}
