#include<stdio.h>
typedef struct node{
int info;
struct node*next;

}*NODEPTR;
void print_intersection(NODEPTR *h1,NODEPTR *h2);
void add_node(NODEPTR *h,int val);
void display(NODEPTR h);
void main()
{
NODEPTR h1,h2;
h1=h2=0;
add_node(&h1,4);
add_node(&h1,8);
add_node(&h1,5);
add_node(&h1,6);
add_node(&h1,7);
add_node(&h1,13);

add_node(&h2,4);
add_node(&h2,5);
add_node(&h2,3);
add_node(&h2,2);
add_node(&h2,1);
display(h1);
display(h2);
print_intersection(&h1,&h2);
display(h2);
}
void add_node(NODEPTR *h,int val)
{
  NODEPTR cur,p,temp=(NODEPTR)malloc(sizeof(struct node));
  temp->next=0;
  temp->info=val;

  if((*h)==0)
  {
    (*h)=temp;
    printf("HEad added...\n");

  }
  else if((*h)->info>val)
  {
     temp->next=(*h);
     (*h)=temp;
     printf("added to beg..\n");

   }
   else
   {
      cur=(*h);
      while(cur->next!=0 && cur->next->info < val )
         cur=cur->next;
     temp->next=cur->next;
     cur->next=temp;

   }

}
void display(NODEPTR h)
{
    NODEPTR temp;
    for(temp=h;temp!=0;temp=temp->next)
       printf("%d->",temp->info);
       printf("\n");
}
void print_intersection(NODEPTR *h1,NODEPTR *h2)
{
    printf("INTERSECTION......\n");
    NODEPTR p1,p2;
    p1=(*h1);
    p2=(*h2);
    while(p1!=0 && p2!=0)
    {
        printf("**\n");

        while( p2->info > p1->info )//just increaase
              p1=(p1->next!=0?p1->next:0);



     while(p2->info < p1->info)///i m using while loops to increment unncesessary checks..
        p2=(p2->next!=0?p2->next:0);


        if(p1->info == p2->info)
           {
               printf("%d \t",p1->info);
               p1=p1->next!=0?p1->next:0;
               p2=p2->next!=0?p2->next:0;printf("LIne-==%d\n",__LINE__);
            }
            else if(p1->info < p2->info)//if whille loops are addeed..then extra else is not neended..
            {
                   p1=p1->next!=0?p1->next:0;
            }
            else
             p2=p2->next;
    }
}
