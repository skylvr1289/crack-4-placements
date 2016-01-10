typedef struct node{
 struct node*next;
 void *info;

}*NODEPTR;
NODEPTR listI=0,listC=0,listS=0,listF=0;
void insert(NODEPTR *list,void *data,unsigned int n);
void print(NODEPTR *list,void(*f)(void*));
void printInt(void *integer);
void printChar(void *data);
void printStr(void *data);
void main()
{
int i[]={4,5,2,7,4,8,9},j;
for(j=0;j<7;j++)
insert(&listI,(i+j),sizeof(int));

print(&listI,printInt);

char c[]={'a','b','c','d'};
for(j=0;j<4;j++)
insert(&listC,(c+j),sizeof(char));/// or we coud hv written &c[j]

print(&listC,printChar);
//insert(&listI,(i+1),sizeof(int));
char *s[]={"abhishek","avneejhgjhghjgjhgjhgjsh","chunu","shanker"};
for(j=0;j<4;j++)
insert(&listS,s[j],strlen(s[j])+1);/// or we coud hv written &c[j]
print(&listS,printStr);




}
void insert(NODEPTR *list,void *data,unsigned int n)
{
  NODEPTR temp=malloc(sizeof(struct node));
  temp->info=malloc(n);
  temp->next=0;
  int i;
  for(i=0;i<n;i++)
     *(char *)(temp->info + i) = *(char *)(data + i);

//printf("\n..LIN-----%d",__LINE__);

if((*list)==0)
 (*list)=temp;
 else
   {
     temp->next=(*list);
     (*list)=temp;
    }
}
void print(NODEPTR *list,void(*f)(void*))
{
    NODEPTR temp;temp=(*list);
    while((temp))
     {
         (*f)(temp->info);
          temp=temp->next;
     }
     printf("\n");
}
void printInt(void *integer)
{
    printf("%d ->",*(int*)integer);
}
void printChar(void *data)
{
    printf("%c ->",*(char*)data);
}
void printStr(void *data)
{
    printf("%s ->",(char*)data);
}
