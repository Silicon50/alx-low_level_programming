#include <stdio.h>
#include <stdlib.h>

struct node
{
	int data;
	struct node *next;
};
int main()
{
	struct node *head, *newnode, *temp, *add, *new;
	head = 0;
	int choice = 1, pos, i= 1;
	while(choice)
	{
		newnode = (struct node *) malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d", &newnode->data);
		if (head == 0)
		{
			head = temp = newnode;
		
		}
		else
		{
			temp->next = newnode;
			temp = newnode;
		}
		printf("Do you want to continue? pick ! or 0\n");
		scanf("%d", &choice);

	}
	temp = head;
	while (temp != 0)
	{
		printf("Data is %d\n", temp->data);
		temp = temp->next;
	}
	printf("Adding a new node to existing node\n");
	printf("Enter the new data\n");
	newnode = (struct node *)malloc(sizeof(struct node));
	scanf("%d", &newnode->data);
	add = head;
	head = newnode;
	newnode->next = add;
	
	temp = head;
	while (temp != 0)
	{	
		printf("values is %d\n", temp->data);
		temp = temp->next;
	}
	
	printf("Inserting data at any selected position\n");
	printf("Enter the position you wish to enter\n");
	scanf("%d", &pos);
	temp = head;
	newnode = (struct node *) malloc(sizeof(struct node));
	printf("Enter the data to insert\n");
	scanf("%d", &newnode->data);
	while(i < pos)
	{
		add = temp;
		temp = temp->next;
		i++;

	}
	add->next = newnode;
	newnode->next = temp;
	
	temp = head;
	while(temp != 0)
	{
		printf(" new values = %d\n", temp->data);
		temp = temp->next;
	}
}	
 
