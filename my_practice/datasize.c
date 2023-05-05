#include <stdio.h>

/**
*main - No Entry
*
*return: Always 0 (Success !)
*
*/

int main()
{
int myInt;
double myDouble;
float myFlo;
char myChar;

printf("%lu\n", sizeof(myInt));
printf("%lu\n", sizeof(myDouble));
printf("%lu\n", sizeof(myFlo));
printf("%lu\n", sizeof(myChar));

return 0;
}
