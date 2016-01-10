#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}*NODEPTR;
NODEPTR head,tail;
void add(int val);
void bblsort(int size);
void main()
{
 head=0;
 tail=0;
 add(5);
 add(1);
 add(4);
 add(3);
 add(2);
 add(6);
display();
bblsort(6);
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
void bblsort(int size)
{

    int i,j;
    NODEPTR p0,p1,p2,p3;
   for(i=1;i<size;i++)
   {
       p0=0;
       p1=head;
       p2=head->next;
       p3=p2->next;

      for(j=1;j<=size-i;j++)
          {
             if(p1->info > p2->info)
             {
                 p1->next=p3;
                 p2->next=p1;
                 if(head==p1)
                   head=p2;
                  if(p0>0)
                    p0->next=p2;
                p0=p2;
                p2=p1->next;
                p3=p3->next!=0?p3->next:0;
             }else{
             p0=p1;
             p1=p2;
             p2=p3;
             p3=p3->next!=0?p3->next:0;
             }
          }
   }
}

