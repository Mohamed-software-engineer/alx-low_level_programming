#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of argument
 * @argv: array of stirngs
 * Return: 0 value
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
