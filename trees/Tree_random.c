#include<stdio.h>
typedef struct node{
int info;
struct node*left;
struct node*right;

}*NODEPTR;
NODEPTR ptree;
NODEPTR create_tree(int val);
void add_left(NODEPTR root,int val);
void add_right(NODEPTR root,int val);
void add(int val);
void main()
{
ptree= create_tree(5);
NODEPTR l,r;

add_left(ptree,4);
add_right(ptree,3);
l=ptree->left;
r=ptree->right;
add_left(l,9);
add_right(l,8);
add_left(r,19);
add_right(r,18);

preorder(ptree);
printf("\ninoredr...\t");
inorder(ptree);
}
NODEPTR create_tree(int val)
{
    NODEPTR p;
    p=malloc(sizeof(struct node));
    p->left=0;
    p->right=0;
    p->info=val;
    return p;
}
void add_left(NODEPTR root,int val)
{
   if(root==0)
     printf("\ninvalid root");
    else if(root->left!=0)
        printf("invalid insertion..at this node");
     else
    root->left=create_tree(val);
}
void add_right(NODEPTR root,int val)
{
     if(root==0)
        printf("\ninvalid root");
     else if(root->right!=0)
        printf("invalid insertion..at this node");
     else
        root->right=create_tree(val);
}
void inorder(NODEPTR p)
{
    if(p==0)
    return;
    inorder(p->left);
      printf("%d\t",p->info);
    inorder(p->right);
}
void preorder(NODEPTR p)
{
    if(p==0)
    return;
    printf("%d\t",p->info);
    preorder(p->left);
    preorder(p->right);
}
void postorder(NODEPTR p)
{
    if(p==0)
    return;
    postorder(p->right);
    postorder(p->left);
      printf("%d\t",p->info);

}
