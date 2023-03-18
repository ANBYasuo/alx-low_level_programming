#include <stdio.h>
/**
* main - is the main unit function
* Return: 0 (Success)
*/
int main(void)
{
	char Alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	for ( ; i < sizeof(Alpha) ; i++)
	{
	if (Alpha[i] == '\0')
		putchar('\n');
	else
		putchar(Alpha[i]);
	}
return (0);
}

