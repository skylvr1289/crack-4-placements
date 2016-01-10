typedef struct node{
int info;
struct node*left;
struct node*right;

}*NODEPTR;
NODEPTR ptree=0;
void add(int val);
void iterative_postorder(NODEPTR p);
void main()
{

  add(7);
  add(4);
   add(2);
    add(2);
     add(5);add(6);
    add(8);
     add(11);
inorder(ptree);
printf("\n");
iterative_inorder(ptree);
iterative_preorder(ptree);
iterative_postorder(ptree);
}
void add(int val)
{
 NODEPTR temp=malloc(sizeof(struct node));

 temp->right=0;
 temp->left=0;
 temp->info=val;

    if(ptree==0)
       {ptree=temp;printf("head==%d added\n",val);}
     else
{
 NODEPTR cur,pcur;
 cur=ptree;pcur=0;
 while(cur!=0)
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
  if(p)
  {
     inorder(p->left);
      printf("%d->",p->info);
       inorder(p->right);
  }

}
void iterative_inorder(NODEPTR p)
{
    NODEPTR stk[100],root=p;
    int top=0;
    printf("\niterative ..INEORDER....\n");
    while(root!=0)
     {
         while(root!=0)
         {
             if(root->right!=0)
                {
                    stk[top++]=root->right;
                }
                stk[top++]=root;
                root=root->left;
         }
         root=stk[--top];
         while(top!=0&&root->right==0)
          {
              printf("%d->",root->info);
              root=stk[--top];
          }
          printf("%d->",root->info);
              top--;
          root=root->right;
     }
}


void iterative_preorder(NODEPTR p)
{
    printf("\niterative ..PREORDER....\n");

 NODEPTR stk[100];
 int top=0;
if (p == 0) { return; }

 stk[top++]=p;
 while(top!=0)
 {
     p=stk[--top];
     printf("%d->",p->info);
     if(p->right!=0)// order is necessray....first right will be pusged
        stk[top++]=p->right;
     if(p->left!=0)
        stk[top++]=p->left;

 }
}

void iterative_postorder(NODEPTR p)
{
    printf("\niterative ..PostORDER....\n");
   struct
   {
       int lvisited:1 ;// 1 bit for lvisited initoialized as zero
       int rvisited:1;
       NODEPTR node;
   }stk[100];
   int top=0;
   stk[top++].node=p;
printf("%d....",stk[top].rvisited);
   while(top!=0)
   {/* Move to the right subtree if present and not visited */
       if(p->right!=0&& !stk[top].rvisited)//order is necessary ..first go to right direction
       {
           stk[top].rvisited=1;
           stk[top++].node=p;
           p=p->right;
             continue;
       }
       if(p->left!=0&& !stk[top].lvisited)
       {
           stk[top].lvisited=1;
           stk[top++].node=p;
           p=p->left;
          continue;
       }

       printf(" %d-> ", p->info);
       stk[top].lvisited=0;
       stk[top].rvisited=0;
       p=stk[--top].node;
    }
}
