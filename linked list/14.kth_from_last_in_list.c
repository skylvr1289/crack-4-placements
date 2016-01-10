#include<stdio.h>
typedef struct node
{
int info;
struct node *next;
}*NODEPTR;
NODEPTR head1,tail1,head2,tail2,head3;

void add(int val,NODEPTR *head,NODEPTR *tail);///passing pointer otherwise in function it will not be able to change(head1->next)
void main()
{
head1=0;head2=0;
 tail1=0;tail2=0;

 add(1,&head1,&tail1);
 add(2,&head1,&tail1);
 add(3,&head1,&tail1);
 add(4,&head1,&tail1);
 add(5,&head1,&tail1);
 add(6,&head1,&tail1);
 add(7,&head1,&tail1);
 add(8,&head1,&tail1);

 add(1,&head2,&tail2);
 add(2,&head2,&tail2);
 add(3,&head2,&tail2);
 add(4,&head2,&tail2);
 add(5,&head2,&tail2);
 add(6,&head2,&tail2);
 add(7,&head2,&tail2);
 //add(8,&head2,&tail2);
  //add(8);
//add(9);
display(&head2);
kth_last(&head2,7);


}
void add(int val,NODEPTR *head,NODEPTR *tail)
{
    NODEPTR temp;
    temp=(int*)malloc((unsigned)sizeof(NODEPTR));
    temp->info=val;
    temp->next=0;
    if((*head)==0)
        {
            *head=temp;
            *tail=temp;
          // printf("\tadded");
        }
        else{
           (*tail)->next=temp;
           (*tail)=temp;
         //  printf("\t...added");

        }
}
void display(NODEPTR *head)
{
    printf("\n...Display......");
    NODEPTR temp;
    //temp=head;

    for(temp= *head;temp!=0;temp=temp->next)
       printf("%d -> ",temp->info);
}
void kth_last(NODEPTR *head,int k)
{
    int i,j;
    NODEPTR temp1,temp2;
    temp1=(*head);temp2=(*head);
     i=0;
     while(temp1!=0)
     {
         temp1=temp1->next;
         i++;
         if(i>k)
         temp2=temp2->next;
     }

    printf("..lsta se %dth..==%d",k,temp2->info);
}
