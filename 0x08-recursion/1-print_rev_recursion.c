#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * @s: input
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	putchar(*s);
}
