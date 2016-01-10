#define size 30
int a[size];
int top=-1;
void main()
{
    int i,j,k;
 char s[]="((((((A+B)))A)+C))";
 for(i=0;s[i]!='\0';i++)
 {
     if(s[i]=='(' && s[i+1]=='(')
        push(-i);
     if(s[i]=='(' && s[i+1]!='(')
        push(i);

     if( s[i]==')' && s[i-1]==')'&&top_value() <=0)
        {
            s[i]=' ';
            s[-pop()]=' ';
        }
      if(s[i]==')' &&top_value() >0)
        pop();
 }
 display();
printf("%s",s);

}
void push(int val)
{
  if(top<size)
    a[++top]=val;
}
int pop()
{
    int val;
  if(top!=-1)
     val=a[top--];

    return val;
}
void display()
{
  int i=top;
  while(i>=0)
   printf("%d ",a[i--]);
   printf("\n");

}
int top_value()
{
    if(top!=-1)
     return a[top];
     else return 0;
}
