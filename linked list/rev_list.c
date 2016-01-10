#include<stdio.h>
typedef struct node
{
   int info;
   struct node *next;
}*NODEPTR;
NODEPTR head,tail;
void add(int val);
void main()
{
 head=0;
 tail=0;
 add(1);
 add(2);
 add(3);
 add(4);
 add(5);
 add(6);
display();
reverse();
display();
 add(7);
 add(8);
  add(9);
 add(10);
 display();
}
void add(int val)
{
    NODEPTR temp;
    temp=(int*)malloc((unsigned)sizeof(NODEPTR));
    temp->info=val;
    temp->next=0;
    if(head==0)
        {
            head=temp;
            tail=temp;

        }
        else{
           tail->next=temp;
           tail=temp;
        }
}
void display()
{
    printf("\n...Display......");
    NODEPTR temp;
    temp=head;
    for(temp=head;temp!=0;temp=temp->next)
       printf("\t%d",temp->info);
}
void reverse()
{
    printf("\n reversed...");
    NODEPTR temp,p,q,r;
    p=head;
    tail=p;
    q=p->next;
    p->next=0;
    while(q!=0){
       r=q->next;
       q->next=p;
       p=q;
       q=r;
    }
    head=p;
}
