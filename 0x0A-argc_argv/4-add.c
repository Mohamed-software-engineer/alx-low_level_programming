#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isNumber - check if element is digit
 * @str: array of char
 * Return: 0 or 1 if not digit
 */
int isNumber(const char *str)
{
	int i = 0;

	if (str[0] == '-')
		i = 1;
	for (; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
			return (0);
	}
	return (1);
}
/**
 * main - sum numbers
 * @argc: counter to arguments
 * @argv: array of strings
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (!isNumber(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		if (num > 0)
			sum += num;
	}

	printf("%d\n", sum);

	return (0);
}
