typedef struct node
{
    int info;
    struct node*left;
    struct node*right;
}*NODEPTR;
NODEPTR ptree=0;NODEPTR *list_lvl=0;
void add_node(int val);
void inorder(NODEPTR p);
void print_level(NODEPTR p,int level_no);
void append_ll(NODEPTR *head,NODEPTR p);/// to append a node to new list

void display();
void main()
{
NODEPTR *predc=0;
add_node(4);
add_node(2);
add_node(5);
add_node(1);
add_node(3);
add_node(9);
add_node(10);
add_node(11);
add_node(12);


printf("\n... list of leafs..\n");

int i,h=6;///decreasing order= post order is necessary otherwise it will change initial nodes & u ill hv trouble of repeatation
for(i=h;i>=1;i--)
  {  printf("Level [%d]  ",i);
      print_level(ptree,i);
      printf("\n");
  }
printf("\n... list of level nodes..\n");
display(&list_lvl);

//printf("**%d",ptree->left->info);
//inorder(ptree);
//convert2list(ptree,&predc,&list1);
printf("\ndisplay Inoreder......]\n");

inorder(ptree);// ofcourse it will change the original tree bcoz ki u r not using exta space for creating new list
}
void add_node(int val)
{
    NODEPTR temp=malloc(sizeof(struct node));
    temp->info=val;
    temp->left=0;
    temp->right=0;
    if(ptree==0)
    {
        ptree=temp;
    }
    else
    {
        NODEPTR cur,pcur;
        cur=ptree;pcur=0;

        while(cur)
        {
            pcur=cur;
            cur=val>cur->info?cur->right:cur->left;
        }
        if(val>pcur->info)
         pcur->right=temp;
         else
         pcur->left=temp;
    }
}
void inorder(NODEPTR p)
{
    if(p!=0)
    {
        inorder(p->left);
        printf("%d ->",p->info);
        inorder(p->right);
    }
}

void display(NODEPTR *list)
{
    NODEPTR temp=(*list);
    while(temp!=0)
    {
        printf("%d ",temp->info);
        temp=temp->right;
    }
}

void append_ll(NODEPTR *head,NODEPTR p)
{

   if((*head)==0)
      (*head)=p;
    else
    {
        p->right=(*head);//like a stack;
        (*head)=p;
    }
}


void print_level(NODEPTR p,int lvl)
{
 if(p)
 {
         if(lvl==1)
         {  printf("%d -->",p->info);
            append_ll(&list_lvl,p);
          }
         else
         {
            print_level(p->left,lvl-1);
            print_level(p->right,lvl-1);
         }
 }
}
