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
 add(8,&head2,&tail2);
  //add(8);
//add(9);

display(&head1);
display(&head2);
copy(&head3,&head1);
display(&head3);
int c=compare(&head3,&head2);
if(c==1)
printf("\t*  Equal");
else printf("\t* Unequal");

free_nodes(&head3);
printf("...%d",head3->info);
//display(&head3);

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
int compare(NODEPTR *head1,NODEPTR *head2)
{
    static int flag;
    if((*head1)==0&& (*head2)==0)
        flag=1;
    else{
           if((*head1)==0 || (*head2)==0)
             flag=0;
            else if((*head1)->info!=(*head2)->info)
               flag=0;
            else
               compare(&(*head1)->next,&(*head2)->next);
    }
    return flag;
}
void copy(NODEPTR *head_new,NODEPTR *head)
{
   if(*head!=0)
   {
       (*head_new)=(NODEPTR *)malloc(sizeof(NODEPTR *));
       (*head_new)->info=(*head)->info;
       (*head_new)->next=0;
       copy(&((*head_new)->next),&((*head)->next));
   }
printf("\n....copied");
}
void free_nodes(NODEPTR *head)
{
    NODEPTR nxt,temp2;
    temp2=(*head);
    while(temp2!=0)
    {
        nxt=temp2->next;
        free(temp2);
        temp2=nxt;
        //printf("\n..freed...%d",temp2->info);
    }
    temp2=0;head=0;
    printf("\n...clean n Clear...");
}
