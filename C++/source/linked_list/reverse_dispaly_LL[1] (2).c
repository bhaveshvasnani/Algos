#include <stdio.h>
struct node
	{
		int data;
		struct node *next;
	};
struct node *head,*last,*n1;
int n;
struct node* create_list(struct node *head,int n);
void display(struct node *head);
void display_reverse(struct node *head);
void main()
{
	printf("Number of nodes required\n");
	scanf("%d",&n);
	head=NULL;
	head = create_list(head,n);
	last=n1;
	display(head);
	printf("\nDisplaying linked list in reverse order\n");
	reverse_display(head);
}
struct node* create_list(struct node *head,int n)
{
	struct node *temp;
	int i;
	n1=(struct node *)malloc(sizeof(struct node *));
	printf("Enter number\n");
	scanf("%d",&n1->data);
	n1->next=NULL;
	head=n1;
	for (i=0;i<n-1;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node *));
		printf("Enter number\n");
		scanf("%d",&temp->data);
		temp->next=NULL;
		n1->next=temp;
		n1=temp;
	}
	printf("List created\n");
	return head;
}
void reverse_display(struct node *head)
{
    if(head==NULL)
        return;
    reverse_display(head->next);
    printf("%d\t", head->data);
}
void display(struct node *head)
{
	struct node *a;
	a=head;
	while(a!=NULL)
    {
    printf("%d\t",a->data);
    a=a->next;
    }
}
