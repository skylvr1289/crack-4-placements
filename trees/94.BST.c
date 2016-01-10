#include<stdio.h>
typedef struct node{
int info;
struct node*left;
struct node*right;
}*NODEPTR;
NODEPTR ptree=(NODEPTR)0;
void add(int val);
void inorder(NODEPTR p);
void main()
{
add(5);
add(6);
add(7);
add(10);
add(9);
add(8);
add(10);
inorder(ptree);
printf("\nmax Depth=%d",maxDpth(ptree));
printf("\n..isBST %d",isBST(ptree));

printf("\n max==%d",find_max(ptree));
delete_node(7);
//delete_node(4);
//delete_node(5);
//delete_node(6);

printf("\nINDOEDrr...\n");
inorder(ptree);
}
void add(int val)
{
  NODEPTR temp,cur,prev;
  temp=(NODEPTR)malloc(sizeof(struct node));
  temp->info=val;
  temp->left=0;
  temp->right=0;

  if(ptree==0)
  {
     ptree=temp;
     printf("head added..\n");
  }
  else
  {
    cur=ptree;
    prev=0;
     while(cur!=0)
     {prev=cur;
       if(val<cur->info)
        { cur=cur->left;}
        else
        {cur=cur->right;}
     }
     if(val<prev->info)
         {
              prev->left=temp; printf("added...%d\n",temp->info);
         }
    else
       {prev->right=temp; printf("added...%d\n",temp->info);}


  }
}
void inorder(NODEPTR p)
{
   if(p!=0)
{
    inorder(p->left);
    printf("%d\t",p->info);
    inorder(p->right);
}
}
int maxDpth(NODEPTR p)
{
    if(p==0)
    return 0;
 int h1,h2;
 h1=maxDpth(p->left);
 h2=maxDpth(p->right);
 return((h1>h2?h1:h2)+1);

}
int isBST(NODEPTR p)
{
    if(p==0)
     return 1;
     if((p->left!=0 &&p->left->info>p->info ) || (p->right!=0&&p->right->info<p->info))
         return 0;
      if(!isBST(p->left)||!isBST(p->right))
        return 0;

      return 1;
}
void lvl_odr_travl(NODEPTR p)
{
    printf("\n**lEVEL Order TRAAAAAAAAAAERSAL...***\N");
    NODEPTR queue[100]={(NODEPTR)0};
int    startPtr=0;
  int  ptr=0;
    while(p!=0)
    {
        printf("%d\t",p->info);
        if(p->left)
          queue[ptr++]=p->left;
        if(p->right)
          queue[ptr++]=p->right;
          p=queue[startPtr++];

    }
}
int delete_node(int val)
{
    NODEPTR pcur,cur,tmp;
    pcur=0;
    cur=ptree;
    if(cur==0)return 0;

    while(cur!=0&&cur->info!=val)
    {
        pcur=cur;
        cur=cur->info>val?cur->left:cur->right;

    }
    if(cur==0)//means value not found
    {
        printf("value not found in BST\n");return 0;
    }
    else if(cur==ptree&& cur->left==0)//incase if only 1 sided bst is n we r deleting root node
       ptree=cur->right;
    else if(cur==ptree&&cur->right==0)
       ptree=cur->left;


    else  if(cur->left==0)///if left is null
       {

         if( cur==pcur->left)
             pcur->left=cur->right;
         else
             pcur->right=cur->right;
        }
   else if(cur->right==0)///if right is null
      {
          if(cur==pcur->left)
               pcur->left=cur->left;
          else
               pcur->right=cur->left;
      }

    else if(cur->left!=0&&cur->right!=0)//if rigt n l are not null
     {//find the succesoor node..== max valu in the left of this node
          int t;
         t=find_max(cur->left);
         delete_node(t);
         cur->info=t;
     }
}
int find_max(NODEPTR p)
{
    NODEPTR prev;prev=p;
    while(p!=0)
    {
        prev=p;
        p=p->right;
    }
  //  printf("\n max==%d",prev->info);
    return prev->info;
}
