#include <stdio.h>
/**
 * main- write a program that prints its name, followed by a new line.
 * if you rename the program, it will print the new naame, without having to
 * compile it again
 * You should not remove the path before the name of the program
 *
 * @argc: This is the argument count
 * @argv: This is the argument vector
 *
 * Return: This return to 0
 */
int main(int argc, char *argv[])
{
	printf("%\n", argv[0]);
	(void)argc;
	return (0);
}