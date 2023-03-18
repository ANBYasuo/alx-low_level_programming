#include <stdio.h>
/**
* main - is the main unit function
* Return: 0 (Success)
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');
return (0);
}
