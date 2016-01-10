
typedef struct node{
 int info;
 struct node* next;

}*NODEPTR;
NODEPTR list=0;

void main()
{
    add(3);
     add(4);
      add(5);
       add(6);
show_rev(list);


}
void add( int val)
{
  NODEPTR temp=malloc(sizeof(struct node));
  temp->info=val;
  temp->next=0;

  if(list==0)
    list=temp;
    else
    {
      temp->next=list;
      list=temp;

    }
}
void show_rev(NODEPTR p)
{
  if(p==0)
   return;

   show_rev(p->next);
    printf("%d<-",p->info);
}
