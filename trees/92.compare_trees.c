#include<stdio.h>
typedef struct node{
int info;
struct node*left;
struct node*right;

}*NODEPTR;
NODEPTR ptree1,ptree2;
void kthMax(NODEPTR ptree1,NODEPTR p,int k);
void delete_tree(NODEPTR ptree1,NODEPTR p);
void add(NODEPTR ptree,int val);
void main()
{
add(ptree1,1);
add(ptree1,2);
add(ptree1,3);
add(ptree1,7);
add(ptree1,4);
delete_tree(ptree1);



kthMax(ptree1,5);
kthMin(ptree1,5);

printf("\ninorder traversal....\t");
inorder(ptree);

printf("\nheight==%d",height(ptree));
printf("\nno of nodes==%d\n",no_of_nodes(ptree));

}
void add(NODEPTR ptree,int val)
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
    if(p!=0)
    {
        inorder(p->left);
           printf("%d\t",p->info);
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
     if(p->left){h1=height(p->left);}
     if(p->right){h2=height(p->right);}
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
NODEPTR ptree=p;
    if(p!=0)
    {
        delete_tree(p->right);
        delete_tree(p->left);
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
