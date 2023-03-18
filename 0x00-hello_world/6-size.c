#include <stdio.h>
/**
* main - is a function that prints sizes
* Return: 0 (Success)
*/
int main(void)
{
int a;
long int x;
long long int y;
char c;
float f;
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(x));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(y));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
return (0);
}
