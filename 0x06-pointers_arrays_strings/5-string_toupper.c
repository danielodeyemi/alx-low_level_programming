#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a  string
 * to upper case
 * @str: an input string
 * Return: char pointer to converted string
 */
char *string_toupper(char *str)
{
	char *start = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= 32;
		str++;
	}
	return (start);
}
