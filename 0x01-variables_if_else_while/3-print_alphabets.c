#include <stdio.h>

/**
 *
 * main - main function of a variable
 * Description:printing alphabets in lowercase
 *
 * Return: Return
 *
 */

int main(void)

{

	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)

		putchar(ch);

	for (CH = 'A'; CH <= 'Z'; CH++)

		putchar(CH);

	putchar('\n');

	return (0);

}
