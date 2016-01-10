#include<stdio.h>
typedef struct node
{
    int visited;
    int bf;
    int info;
    struct node*left;
    struct node*right;
}*NODEPTR;
 NODEPTR ptree;
 void add(int val);
 void DFS(NODEPTR p);

void main()
{

ptree=0;
add(4);
add(2);
add(1);
add(7);
setBF(ptree);
 lvl_order(ptree);
 printf("\n\***DFS......\n");
 DFS(ptree);
}
void add(int val)
{
    NODEPTR temp=malloc(sizeof(struct node)),pcur,cur;
    temp->info=val;
    temp->right=0;
    temp->left=0;
    temp->bf=0;
    temp->visited=0;
    cur=ptree;
    if(cur==0)
      {ptree=temp;return;}

          pcur=0;
          while(cur!=0)
          {
               pcur=cur;
               cur=cur->info>val?cur->left:cur->right;
          }
          if(val>pcur->info)
             pcur->right=temp;
             else
             pcur->left=temp;

}
void inorder(NODEPTR p)
{
    if(p!=0)
    {
        inorder(p->left);
        printf("%d...bf=%d\t",p->info,p->bf);
        inorder(p->right);
    }
}
int setBF(NODEPTR p)
{
    int l,r,count=1;
    if(p==0)
    return 0;
    else
    {
        l=setBF(p->left);
        r=setBF(p->right);
        if(l>r)
        count+=l;
        else
        count+=r;
    }
    p->bf=r-l;
    return count;
}
void lvl_order(NODEPTR p)//bfs
{
    NODEPTR tmp,queue[100]={0};
    int start=0,startPtr=0;

    while(p)
    {
        printf("  %d...BF=%d\t",p->info,p->bf);
        if(p->left)
          queue[start++]=p->left;
        if(p->right)
          queue[start++]=p->right;

          p=queue[startPtr++];
    }
}
void DFS(NODEPTR p)
{
    if(p!=0)
    {
        printf("%d",p->info);
        p->visited=1;
        if(p->left)
          if(p->left->visited==0)
            DFS(p->left);

        if(p->right)
           if(p->right->visited==0)
               DFS(p->right);


    }
}
