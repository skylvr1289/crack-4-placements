#include<stdio.h>
typedef struct node{
int info;
struct node*next;
}*NODEPTR;

void main()
{
NODEPTR front1,rear1,front2,rear2;
front1=rear1=front2=rear2=0;
  enqueue(&front1,&rear1,5);
  enqueue(&front1,&rear1,8);
  dequeue(&front1,&rear1);

}
void enqueue(NODEPTR *front,NODEPTR *rear,int val)
{
  NODEPTR temp=(NODEPTR)malloc(sizeof(struct node));
  temp->info=val;
  temp->next=0;
  if((*rear)==0)
   {
     (*rear)=temp;
     (*front)=temp;
      printf("added...%d\n",val);
   }
   else
   {
     temp->next=(*rear);
     (*rear)=temp;
     printf("added...%d\n",val);
   }
}
int dequeue(NODEPTR *front,NODEPTR *rear)
{
   if((*front)==0)
    { printf("empty....Q\n");return -1;}

     else if((*front)==(*rear))
     {
        int val=(*front)->info;
        (*front)=(*rear)=0;printf("....deleted...%d\n",val);
        return val;
     }
     else{
      int val=(*front)->info;
     (*front)=(*front)->next;printf("....deleted...%d\n",val);
     return val;
     }
}
