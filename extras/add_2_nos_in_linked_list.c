#include<stdio.h>
typedef struct node{
int info;
struct node*next;
}*NODEPTR;
void add_node(NODEPTR *head,int val);
NODEPTR sum_LL(NODEPTR *head1,NODEPTR *head2);
void main()
{
NODEPTR head1,head2,head3,head4,head5;
head1=head2=head3=0;
add_node(&head1,1);
add_node(&head1,1);
add_node(&head1,1);



add_node(&head3,3);
add_node(&head3,3);
add_node(&head3,3);
add_node(&head3,3);
add_node(&head3,3);
add_node(&head3,3);


//display(head1);
display(&head1);
display(&head2);
display(&head3);
//printf("%d...",head2);
head4=sum_LL(&head1,&head2);
head5=sum_LL(&head3,&head4);

display(&head5);

}
void add_node(NODEPTR *head,int val)//stack type adding..ie. into head..
{
  NODEPTR temp=(NODEPTR)malloc(sizeof(struct node));
   temp->next=0;
   temp->info=val;
   if((*head)==0)
    {
      (*head)=temp;
     // printf("added..%d\n",val);
    }
    else
    {
      temp->next=(*head);
      (*head)=temp;
     //printf("added..%d\n",val);
    }
}
void reverse_LL(NODEPTR *head)
{

NODEPTR p,q,r,temp;
  p=(*head);
  q=p->next;
  p->next=0;
  while(q!=0)
  {
      r=q->next;
      q->next=p;
      p=q;
      q=r;
  }
  (*head)=p;
}
void display(NODEPTR *head)
{
    printf("displaying..LIST..\n");
    NODEPTR temp;
    for(temp=(*head);temp!=0;temp=temp->next)
      printf("%d-->",temp->info);
      printf("\n");

}

NODEPTR sum_LL(NODEPTR *h1,NODEPTR *h2)
{

     // display(*h1);
NODEPTR h3;
h3=0;

    if((*h1)==0)
    {
        h3=(*h2);return h3;
     }
    else if((*h2)==0)
     {
        h3=(*h1);return h3;
     }
    else
    {
        //reverse the sstring to add strating from unit digit..s
      reverse_LL(&(*h1));
      reverse_LL(&(*h2));
      //display(&(*h1));
      //display(&(*h2));

      NODEPTR p1,p2;
      p1=(*h1);
      p2=(*h2);
      int sum=0,carry=0,digit;
      while(p1!=0&& p2!=0)
      {
          sum=p1->info+p2->info+carry;
          digit=sum%10;
          carry=sum/10;
          add_node(&h3,digit);//printf("line....%d\n",__LINE__);
          p1=p1->next;
          p2=p2->next;
      }
      if(p1!=0)//p1 has longer length
      {
          while(p1!=0)
          {
             sum=p1->info+carry;
             digit=sum%10;
             carry=sum/10;
             add_node(&h3,digit);
             p1=p1->next;
          }
      }else if(p2!=0)
      {
          while(p2!=0)
          {
             sum=p2->info+carry;
             digit=sum%10;
             carry=sum/10;
             add_node(&h3,digit);
             p2=p2->next;
          }
      }
      if(carry!=0)//// if at he end carry is left only(it will be=1)
        add_node(&h3,carry);

    //reverse back the original strings
      reverse_LL(&(*h1));
      reverse_LL(&(*h2));

      return h3;
    }
}
