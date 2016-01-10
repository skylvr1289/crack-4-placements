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
  add(7);
  //add(8);
//add(9);

display();
mid();
mid2();


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
void mid()
{
    NODEPTR mid,temp,prev_mid;
     int i=0,k=0;
     temp=head;
     mid=head;

    while(temp->next!=0)
     {
         temp=temp->next->next?temp->next->next:temp->next;
          prev_mid=mid;
           mid=mid->next;i++;
     }

   printf("\nmid==%d",mid->info);

   for(temp=head,k=0;temp!=0;temp=temp->next,k++);

if(k%2==0)
   printf("\nmid2==%d",prev_mid->info);


}
void mid2()
{
    NODEPTR mid,temp;
    int i;
    mid=head;
    for(i=1,temp=head;temp!=0;temp=temp->next,i++)
    {
        if(i==1)
          mid=head;
          else if((i%3)==1)
           mid=mid->next;

    }
    printf("\n......mid=%d",mid->info);
}
