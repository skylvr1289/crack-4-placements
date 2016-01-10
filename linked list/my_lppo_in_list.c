#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}*NODEPTR;
NODEPTR head,tail;
void add(int val);
void detect_loop();
void remove_loop(NODEPTR loopnode);

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
add(6);add(7);add(8);
display();
head->next->next->next->next = head->next->next;
 detect_loop();
printf("\t...%d",__LINE__);
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
void detect_loop()
{
    NODEPTR p1,p2;
    p1=head;
    p2=head->next;
    while(p1!=0&&p2!=0)
    {
        if(p1==p2)
          {
              printf("\nloop found at val..%d",p1->info);
            remove_loop(p1);
           }
    p1=p1->next;
    p2=p1->next!=0?p1->next->next:p1->next;
    }
}
void remove_loop(NODEPTR loopnode)
{
    NODEPTR p1,p2;
    p1=head;

    while(1)
    {
       p2=loopnode;
       while(p2->next!=p1&&p2->next!=loopnode)
       {
           p2=p2->next;
       }
       if(p2->next==p1)
         break;
         else
         p1=p1->next;
    }
    p2->next=0;
    printf("\nloop removesdd...last node==%d",p2->info);
}
