#include<stdio.h>
typedef struct node
{
char info;
struct node*left;
struct node*right;
}*NODEPTR;
NODEPTR post_2_tree(char seq[]);
int isnumSymbol(char c);
float evaluate(NODEPTR p);
void main()
{
    NODEPTR ptree;
char postfix[]="123^4++";//USE NUM VALUES BW 0-9
ptree=post_2_tree(postfix);
//printf("%c",ptree->left->info);
inorder(ptree);
printf("\n***resutlt==%f",evaluate(ptree));

}
NODEPTR post_2_tree(char seq[])
{
int i,k=0;NODEPTR st[100];
NODEPTR temp;
   for(i=0;seq[i]!='\0';i++)
  {
      temp=(NODEPTR)malloc(sizeof(struct node));
  temp->info=seq[i];
  temp->left=temp->right=0;

   if(isnumSymbol(seq[i]))
      st[k++]=temp;
    else
   {   temp->right=st[--k];
       temp->left=st[--k];
       st[k++]=temp;
    }
    }
 return st[--k];
}
int isnumSymbol(char c)
{
    if(c>='0'&&c<='9')
     return 1;
     else
     return 0;
}
void inorder(NODEPTR p)
{
    if(p!=0)
    {
        inorder(p->left);
        printf("%c",p->info);
        inorder(p->right);
    }
}
float evaluate(NODEPTR p)
{
    float res;
    switch(p->info)
    {
        case '+':return evaluate(p->left)+evaluate(p->right);break;
        case '-':return evaluate(p->left)-evaluate(p->right);break;
        case '*':return evaluate(p->left)*evaluate(p->right);break;
        case '/':return evaluate(p->left)/evaluate(p->right);break;
        case '^':return pow(evaluate(p->left),evaluate(p->right));break;
       default:
             return (p->info-'0');
    }
}
