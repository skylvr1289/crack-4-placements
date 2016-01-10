#include<stdio.h>
typedef struct node
{
int info;
struct node *prev;
struct node *next;
}*NODEPTR;
NODEPTR head,tail;
void add(int val);
void display();
void main()
{

head=0;
tail=0;
add(1);
add(2);
add(3);
add(4);
add(5);

display();
rev();printf("%d",__LINE__);
display();
}
void add(int val)
   {
       NODEPTR temp,cur;
       temp=(NODEPTR)malloc((unsigned)sizeof(NODEPTR));

       temp->next=0;
       temp->prev=0;
        temp->info=val;
       if(head==0)
       {
           head=temp;
           tail=temp;

           printf("\nhead added..");
        }
        else
        {
           // for(cur=head;cur->next!=0;cur=cur->next);
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
            printf("\nelemnt added..%d",val);
        }
   }
void display()
{
    printf("\n..Display..");
    NODEPTR temp;
    for(temp=head;temp!=0;temp=temp->next)
       printf("\t%d",temp->info);
}
void rev()
{
    NODEPTR temp,p,q,r;
    p=head;
    q=tail;
    if(head==0&&tail==0)
      return;
    for(temp=head;temp!=0;)
    {
        r=temp->next;
        temp->next=temp->prev;
        temp->prev=r;
        temp=r;
    }
    head=q;
    tail=p;
}
