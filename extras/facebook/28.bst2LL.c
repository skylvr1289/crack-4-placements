typedef struct node
{
    int info;
    struct node*left;
    struct node*right;
}*NODEPTR;
NODEPTR ptree=0;
void add_node(int val);
void inorder(NODEPTR p);
void convert2list(NODEPTR p,NODEPTR *predc,NODEPTR *list);
void display();
void main()
{NODEPTR *list=0;
NODEPTR *predc=0;
add_node(4);add_node(3);
add_node(2);
add_node(5);
add_node(1);
add_node(3);
add_node(9);

inorder(ptree);

convert2list(ptree,&predc,&list);
printf("\ndisplay list......]\n");
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
void convert2list(NODEPTR p,NODEPTR *predc,NODEPTR *list)
{
  if(p==0) return;
  convert2list(p->left,predc,list);
    ///p->left=(*predc);//un  necessary line may be useful if dbly ll.
  if((*predc))
   (*predc)->right=p;
  else
    (*list)=p;
                             ///for dbly link liat nt working
                            //list->left = p;
                           //p->right = list;
   (*predc)=p;// p is now pred for right tree
    convert2list(p->right,predc,list);
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
