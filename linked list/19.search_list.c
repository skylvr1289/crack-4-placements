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
 add(8,&head1,&tail1);
 add(4,&head1,&tail1);
 add(1,&head1,&tail1);
 add(7,&head1,&tail1);
 add(0,&head1,&tail1);
add(0,&head1,&tail1);
add(2,&head1,&tail1);
add(0,&head1,&tail1);

 //add(8,&head2,&tail2);
  //add(8);
//add(9);

display(&head1);search(&head1,0);
remove_duplicate(&head1);
display(&head1);
 printf("\n..display reverse list..\n");
read_back(&head1);
display(&head1);search(&head1,1);search(&head1,7);search(&head1,6);

}
void add(int val,NODEPTR *head,NODEPTR *tail)
{
    NODEPTR temp,ptr,prev;
    temp=(NODEPTR)malloc((unsigned)sizeof(NODEPTR));
    temp->info=val;
    temp->next=0;



              if((*head)==0||(*head)->info >= val)
                   {
                       //insert before head
                       temp->next=(*head);
                       (*head)=temp;
                       printf("head..added..%d\n",val);
                   }
                   else {
                       ptr=(*head);
                       while( ptr->next!=0&& ptr->next->info < val )
                   {
                       ptr=ptr->next;
                   }
                      temp->next=ptr->next;
                      ptr->next=temp;
                      printf("......**added..%d\n",val);
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

void remove_duplicate(NODEPTR *head)
{
    NODEPTR ptr,temp;
    temp=(*head);
while(temp->next!=0)
{
   if(temp->next->info==temp->info)
   {
       temp->next=temp->next->next;
     //  free(temp->next);
    }
    else
    temp=temp->next;
}
}
void read_back(NODEPTR *head)
{
    if((*head)==0)
    return;
    read_back(&((*head)->next));
      printf("<--%d ",(*head)->info);
}
void search(NODEPTR *head,int data)
{
  NODEPTR temp;int i=1,flag=0;
  for(temp=(*head);temp!=0;temp=temp->next,i++)
     {
      if(temp->info==data)
        {
          printf("\ndata=%d...found at loc==%d",temp->info,i);flag++;
        }
     }
     if(flag==0)
    printf("\ndata=%d not found..",data);


}
