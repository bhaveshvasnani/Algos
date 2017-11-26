//problem----enqueue,dequeue,front
#include <stdio.h>
struct queuell
{
	int data;
	struct queuell *next;
}*front=NULL,*rear=NULL;
struct queuell *enqueue(struct queuell *rear)
{
	struct queuell *temp=(struct queuell *)malloc(sizeof(struct queuell *));
	printf("\nEnter number\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if (front==rear && rear==NULL)
	{
		front=rear=temp;
	}
	else
	{
		rear->next=temp;
		rear=temp;
	}
	return rear;
}
struct queuell *dequeue(struct queuell *front)
{
	if (front!=NULL)
	{
		front=front->next;
	}
	else
	{
		printf("\nUnderflow\n");
	}
	return front;
}
void display(struct queuell *front,struct queue *rear)
{
	printf("\nDisplaying queue\n");
	struct queuell *temp=(struct queuell *)malloc(sizeof(struct queuell *));
	temp=front;
	while (temp!=rear)
	{
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);
}
main()
{
	//rear=enqueue(rear);
	//rear=enqueue(rear);
	//rear=enqueue(rear);
	display(front,rear);
	front=dequeue(front);
	display(front,rear);
}
