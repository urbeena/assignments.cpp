#include<stdio.h>
#include<malloc.h>
void create ();
void view()
{
	
}
struct node
{
	int data;
	struct node*next;	
};
struct node *head = NULL, *tail=NULL;



int main()
{
	int ch;
	while(1)
	{
		printf("enter 1 for create 2 for view , 3 for exit");
		scanf("%d", &ch);
		if(ch==1) create();
		if(ch==2) view();
		if(ch==3) break;
	}
		
}




void create ()
{ struct node*temp;
int i,n;
printf("enter the nodes u want to create");
scanf("%d", &n);
for(i=0;i<n;i++)
{
	temp = (struct node*)malloc(sizeof(struct node));
	printf("enter data");
	scanf("%d", &temp ->data);
	temp->next=NULL;
		if(head==NULL)
	{
		head = temp ;
		tail = temp;
	}
	else
	{
		temp->next = temp;
	    tail = temp;
	}
}
	
}





