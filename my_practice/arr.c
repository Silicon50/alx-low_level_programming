#include <stdio.h>

int main()
{
int i, a[10], pos, num, size;
printf("Enter the size\n");
scanf("%d", &size);
printf("Enter the value of array\n");
for(i = 0; i < size; i++)
{
	scanf("%d", &a[i]);
}

for(i = 0; i<size; i++)
{
	printf("The values are %d\n ", a[i]);

}

printf("Changing the value at a given position\n");
printf("Enter the position \n");
scanf("%d", &pos);
printf("Enter the value you wish to insert\n");
scanf("%d", &num);

for(i = size-1; i >= pos-1; i--)
{
	a[i+1] = a[i];
}
a[pos-1] = num;
size++;

for(i = 0; i < size; i++)
{
	printf("The values are %d\n", a[i]);
}
}

