#define SIZE 5
#include<stdio.h>
typedef struct stack
{
int top;
int item[SIZE];

}stack;
void push(stack *s,int val);
int pop(stack *s);
void main()
{
stack s;
s.top=-1;
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
push(&s,3);
pop(&s);pop(&s);pop(&s);pop(&s);pop(&s);pop(&s);pop(&s);
}
void push(stack *s,int val)
 {
   if(s->top==SIZE-1)
      printf("OVERFLOW...\n");
      else
      {
        s->item[++(s->top)]=val;
        printf("pushed...%d\n",val);
      }
}
int pop(stack *s)
{
  if(s->top==-1)
     printf("UNDERFLOW\n");
     else
     {
      printf("poped..%d\n",s->item[s->top--]);
     }

}
