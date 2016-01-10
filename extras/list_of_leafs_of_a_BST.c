typedef struct node
{
    int info;
    struct node*left;
    struct node*right;
}*NODEPTR;
NODEPTR ptree=0;NODEPTR *list=0;
void add_node(int val);
void inorder(NODEPTR p);

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
inorder(ptree);

//convert2list(ptree,&predc,&list);
printf("\ndisplay list......]\n");
printf("..No of leafs==%d\n",count_leafs(ptree));
display(&list);
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
int count_leafs(NODEPTR p)
{
    static int count=0;
 if(p!=0)
 {


count_leafs(p->right);///postorder so that max valuue will come first and i will append in list
                     /// like stack so, min value will be on head of list at final
    if(p->left==0&&p->right==0)
       {
          count++;
           printf("leafs==  %d..count=%d\n",p->info,count);
           append_ll(&list,p);//append node p to GLOBAL list
       }
count_leafs(p->left);


}
return count;
}
