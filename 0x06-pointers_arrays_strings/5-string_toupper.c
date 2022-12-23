#include "main.h"
/**
 * string_toupper - check the code for Holberton School students
 * @str: String to be reversed
 * Return: Always 0.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
