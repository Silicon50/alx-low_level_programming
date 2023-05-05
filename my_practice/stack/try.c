#include <stdio.h>
#include <stdlib.h>

struct node
{	
	int data;
	struct node *list;
};
struct node *top = 0;
void push(int);
void display();
void peek();
void pop();
int main()
{
	push(3);
	push(4);
	push(10);
	display();
	peek();
	pop();
	peek();
	display();

}
void push(int x)
{
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	newnode->data = x;
	newnode->list = top;
	top = newnode;
}
void display()
{
	struct node *temp;
	temp = top;
	if(temp == 0)
	{	
		printf("An Empty list\n");
	}
	else
	{
		while(temp != 0)
		{	
			printf("Data = %d\n", temp->data);
			temp = temp->list;
		}
	}
}	
void peek()
{
	printf("The peek = %d\n", top->data);
}
void pop()
{
	printf("Deleted %d\n", top->data);
	top= top->list;
}

