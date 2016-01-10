#include<stdio.h>
typedef struct node{
int info;
struct node*left;
struct node*right;

}*NODEPTR;
NODEPTR ptree;
void kthMax(NODEPTR p,int k);
void kthMin(NODEPTR p,int k);
void delete_tree(NODEPTR p);
void kthInorder_node(NODEPTR p,int k,NODEPTR *nth);
int no_of_leafs(NODEPTR p);
int height(NODEPTR p);
void mirror(NODEPTR p);
void delete_tree(NODEPTR p);
void main()
{
add(8);
add(2);
add(3);
add(7);
add(4);
add(14);
delete_tree(ptree);
add(8);
add(2);
add(3);
add(7);
add(4);add(4);
add(14);


kthMax(ptree,5);
kthMin(ptree,5);

printf("\ninorder traversal....\t");
inorder(ptree);
mirror(ptree);
printf("\ninorder traversal...of mirror...\t");
inorder(ptree);
printf("\nheight==%d",height(ptree));
printf("\nno of nodes==%d\n",no_of_nodes(ptree));

NODEPTR *nth;
kthInorder_node(ptree,4,&nth);//will go to nth
//printf("***%d",(*nth)->info);
mirror(ptree);
printf("\n*isBST***%d\n",isBST(ptree));
printf("\n** no of lefs==%d",no_of_leafs(ptree));


}
void add(int val)
{
     NODEPTR p=(NODEPTR)malloc(sizeof(struct node));
     NODEPTR cur,temp,prev;
           p->left=0;
           p->right=0;
           p->info=val;
    if(ptree==0)
       {
           ptree=p;

       }
       else
       {
             prev=0;
             cur=ptree;
             while(cur)
             {
                 prev=cur;
               cur=(val<cur->info)?cur->left:cur->right;
             }
             if(val>prev->info)
                 prev->right=p;
                 else
                 prev->left=p;
         }
}
void inorder(NODEPTR p)
{
    static int k=0;
    if(p!=0)
    {
        inorder(p->left);
           printf("%d\t",p->info);k++;
        inorder(p->right);
    }
}
void kthMax(NODEPTR p,int k)
{
    static int c=0;
    if(p==0)
      return;
    kthMax(p->right,k);
    c++;
    if(c==k)
      printf("%d'th MAx**%d\n",k,p->info);
      kthMax(p->left,k);
}
void kthMin(NODEPTR p,int k)
{
    static int c2=0;
    if(p==0)
      return;
    kthMin(p->left,k);
    c2++;
    if(c2==k)
      printf("%d 'th MIn**%d\n",k,p->info);
      kthMin(p->right,k);
}
int height(NODEPTR p)
{
     int h1=0,h2=0;
    if(p==0)
        return 0;

    h1=height(p->left);
    h2=height(p->right);
     printf("h1==%d,h2=%d\n",h1,h2);
     return ((h1>h2?h1:h2)+1);
}
int no_of_nodes(NODEPTR p)
{
    if(p==0)
    return 0;
    else
    return(no_of_nodes(p->left)+no_of_nodes(p->right)+1);
}
void delete_tree(NODEPTR p)
{

    if(p!=0)
    {
        delete_tree(p->left);
        delete_tree(p->right);
        printf("\n node %d deleted...",p->info);
        p->left=0;
        p->right=0;
     if(p==ptree)//we will have to delkelte the root node specially...
       {
          printf("delete head"); ptree=0;
       }
        //free(p);
    }

}
void mirror(NODEPTR p)
{
    NODEPTR temp;
    if(p==0)
       return;
       else
       {mirror(p->left);
mirror(p->right);
          temp=p->right;
          p->right=p->left;
          p->left=temp;

       }
}
void kthInorder_node(NODEPTR p,int k, NODEPTR *nth)
{ static int k1=0,found=0;
if(!found)
   {

 if(p!=0)
    {
        kthInorder_node(p->left,k,nth);
           k1++;
           if(k1==k)
             {
                found =1;
                (*nth)=p;
                printf("\nthe %dth node is==%d.. &==%u\n",k,(*nth)->info,&p);
            }
        kthInorder_node(p->right,k,nth);
    }
   }
//return (NODEPTR)0;
}

int isBST(NODEPTR p)
{
    if(p==0) return 1;
    if(p->left!=0 && p->left->info >p->info)
      return 0;
    if(p->right!=0&& p->right->info <p->info)
      return 0;
      if(!isBST(p->left)|| !isBST(p->right))
        return 0;

     return 1;
}
int no_of_leafs(NODEPTR p)
{    static int count=0;
    if(p!=0)
    {
        no_of_leafs(p->left);
        if(p->left==0&&p->right==0)
            count++;

            no_of_leafs(p->right);
    }
    return count;
}
