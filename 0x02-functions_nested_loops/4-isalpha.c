#include "main.h"
/**
* _isalpha - check the code
* @c: letter input
* Return: 0 for non-letter, 1 for letter
*/
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
