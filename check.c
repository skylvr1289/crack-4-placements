//WAP to implement Prim's algorithm

#include"stdio.h"
#include"conio.h"
#include"stdlib.h"
struct node
{
	int key;
	int data;
	struct node *par;
};
struct node *n[20];
struct edge
{
	int wt;
	struct node *src,*des;
};
struct edge *e[20][20];
void makeset(int i)
{
     n[i]=(struct node *)malloc(sizeof(struct node));
     n[i]->data=i;
     n[i]->key=9999;
     n[i]->par=NULL;
}
int main()
{
	int tn,i,adm[20][20],q[20],s,j,w,temp,k;
	printf("Enter the total no. of nodes ");
	scanf("%d",&tn);
	for(i=0;i<=tn;i++)
	{
		for(j=0;j<=tn;j++)
		{
			adm[i][j]=0;
		}
	}
	printf("\nEnter the weights for the following edges ::\n");
	for(i=1;i<=tn;i++)
	{
		makeset(i);
		q[i]=i;
		for(j=i+1;j<=tn;j++)
		{
			printf("%d  %d: ",i,j);
			scanf("%d",&w);
			if(w==0)
			w=9999;
			e[i][j]=(struct edge *)malloc(sizeof(struct edge));
			e[i][j]->wt=w;
			e[i][j]->src=n[i];
			e[i][j]->des=n[j];
			adm[i][j]=1;
			adm[j][i]=1;
		}
	}
	j=1;
	while(j<=tn)
	{
		q[j]=0;newj=j;
		temp=j;
		for(k=1;k<=tn;k++)
		{
			if(adm[temp][k]==1 && q[k]==k)
			{
				if(e[temp][k]->wt<n[k]->key)
				{
					n[k]->par=n[temp];
					n[k]->key=e[temp][k]->wt;

				}
			}
		}
	j++;//this is wrong... we shiud select
	}
	for(j=2;j<=tn;j++)
	{
		k=(n[j]->par)->data;
		printf("output is %d : %d - %d\n",k,j,e[k][j]->wt);
	}
}
