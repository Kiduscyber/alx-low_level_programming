#include "main.h"

/**
 * string_toupper - a function that change all lowerce to uppercase
 * @n: pointer
 * Return: void
 */

char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (void);
}
