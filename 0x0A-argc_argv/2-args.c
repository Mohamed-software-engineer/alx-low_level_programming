#include <stdio.h>
/**
 * main - print all arguments
 * @argc: count of arguments
 * @argv: array of char
 * Return:0 value
 */
int main (int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
