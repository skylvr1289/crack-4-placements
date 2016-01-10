#define SIZE 5
#include<stdio.h>
typedef struct node
{
int info;
struct node*next;

}*NODEPTR;
void push(NODEPTR *s,int val);
int  pop(NODEPTR *s);
void main()
{
NODEPTR top1,top2;
top1=top2=(NODEPTR)0;
push(&top1,1);
push(&top1,2);
push(&top1,3);///implementig QUEUE behaviour....keep pushing into stack1 untip a deque comes.
push(&top1,4);/// then pop all elemts from stack1   push into stack2,, n pop .=dequeue





push(&top2,pop(&top1));
push(&top2,pop(&top1));
push(&top2,pop(&top1));
push(&top2,pop(&top1));

pop(&top2);
pop(&top2);
pop(&top2);
pop(&top2);


}
void push(NODEPTR *top,int val)
{
   NODEPTR temp=(NODEPTR)malloc(sizeof(struct node));
   temp->info=val;
   temp->next=0;
   if((*top)==0)
     {
         (*top)=temp;  printf("%d...pushed\n",val);
     }
     else{
     temp->next=(*top);
     (*top)=temp;
     printf("%d...pushed\n",val);
     }
}
int pop(NODEPTR *top)
{
    if((*top)==0)
       {
           printf("underflow...\n");return 0;
       }
    else
     {
         int val=(*top)->info;
         (*top)=(*top)->next;
         printf("poped..%d\n",val);
           return val;
         }
 }
