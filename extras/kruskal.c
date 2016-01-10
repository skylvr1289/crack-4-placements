#include<stdio.h>
#include"conio.h"
#include"stdlib.h"
typedef struct node
{
  int data;
  int key;
  struct node*par;
}*NODEPTR;
NODEPTR nodes[30];
typedef struct edge
{
   int weight;
   struct node*src;
   struct node*dest;
}*EDGEPTR;
EDGEPTR edges[30][30];

void makeset(int i)
{
  nodes[i]=(NODEPTR)malloc(sizeof(struct node));
  nodes[i]->data=i;
  nodes[i]->key=9999;
  nodes[i]->par=NULL;
}
void main()
{
  int i,j,k,w,n,q[30],adm[30][30],temp,count=0,min;

  printf("Enter no of vertices=nodes\n");
   scanf("%d",&n);
            for(i=0;i<=n;i++)
                {
                    for(j=0;j<=n;j++)
                    {
                        adm[i][j]=0;
                    }
                }
  for(i=1;i<=n;i++)
    makeset(i);

  for(i=1;i<=n;i++)
  {
    q[i]=i;
    for(j=i+1;j<=n;j++)
      {
        printf("enter weight btween %d & %d :",i,j);
         scanf("%d",&w);
         if(w==0)
          w=9999;

           edges[i][j]=(EDGEPTR)malloc(sizeof(struct edge));
           edges[i][j]->weight=w;
           edges[i][j]->src=nodes[i];
           edges[i][j]->dest=nodes[j];
           adm[i][j]=1;
           adm[j][i]=1;
      }
  }
  j=1;nodes[1]->key=0;
  while(count<n)
   {
       printf("j= %d  ...",j);
       q[j]=0;
     temp=j;

      for(k=1;k<=n;k++)
      {
        if(adm[temp][k]==1&& q[k]==k)//edge exists n k not visited
           {
             if(edges[temp][k]->weight<nodes[k]->key)
                 {
                   nodes[k]->par=nodes[temp];
                   nodes[k]->key=edges[temp][k]->weight;
                 }
           }
    }count++;
     ///this is wrong.... we shud select that j whose key is minimum at the tmime..
      for(k=1;k<=n;i++)
      {
          if(q[k]!=0&& nodes[k]->key<=nodes[j]->key)
            j=k;
      }
}
for(j=2;j<=n;j++)
{
   k=(nodes[j]->par)->data;
   printf(" \n%d-->%d : wt =%d",k,j,edges[k][j]->weight);
}
}

