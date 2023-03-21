#include "main.h"
/**
* _islower - check the code
* @c: letter input
* Return: 0 for uppercase letter, 1 for lowercase letter
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
