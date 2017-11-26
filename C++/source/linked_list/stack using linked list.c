#include <stdio.h>
struct stackll
{
	int data;
	struct stackll *next;
}*top=NULL;
struct stackll *push(struct stackll *top)
{
	struct stackll *temp=(struct stackll *)malloc(sizeof(struct stackll *));
	printf("\nEnter Number\n");
	scanf("%d",&temp->data);
	if (top==NULL)
		temp->next=NULL;
	else 
		temp->next=top;
	top=temp;
	return top;
}
struct stackll *pop(struct stackll *top)
{
	struct stackll *temp;
	if (top!=NULL)
	{
		temp=top;
		top=top->next;
		free(temp);
	}
	else
		printf("\nUnderflow\n");
	return top;
}
void display(struct stackll *top)
{
	while(top!=NULL)
	{
		printf("%d\n",top->data);
		top=top->next;
	}
}
main()
{
	top=push(top);
	top=push(top);
	top=pop(top);
	display(top);
}
