#include <stdio.h>
#include <stdlib.h>

void push(int x)
{
	struct node *top = 0;
	struct node *newnode;
	newnode = (struct node *) malloc(sizeof(struct node));
	newnode->data = x;
	top = newnode;
}

	
