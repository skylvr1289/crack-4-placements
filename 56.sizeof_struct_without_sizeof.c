void main()
{
struct node{

int i,j;
float f;
};
struct node *p=0;
int size= ((char*)(p+1)-(char*)p);
printf("%d",size);
}
