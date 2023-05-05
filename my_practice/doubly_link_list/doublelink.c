#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *prev;
	struct node *next;
};

int main()
{
	struct node *head, *newnode, *temp;
	int choice = 1;
	head = 0;
	while(choice)
	{	
		newnode = (struct node*) malloc(sizeof(struct node));
		printf("Enter the value of the data \n");
		scanf("%d", &newnode->data);
		newnode->prev = newnode->next = 0;
		if(head == 0)
		{	
			head = temp = newnode;
		}
		else
		{
			temp->next = newnode;
			newnode->prev = temp;
			temp = newnode;
		}
		printf("Do you want to create a new node ? click 1\n");
		scanf("%d", &choice);
	}
	temp = head;
	while(temp->next != 0)
	{
		printf("The data is %d\n", temp->data);
		temp = temp->next;
	}
}
