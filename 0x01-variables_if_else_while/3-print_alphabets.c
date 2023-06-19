#include<stdio.h>
/**
 * main - print all alphate
 * Return: 0 value
 */
int main(void)
{
	char M = 'a';
	char R = 'A';

	while (M <= 'z')
	{
		putchar(M);
		M++;
	}
	while (R <= 'Z')
	{
		putchar(R);
		R++;
	}
	putchar('\n');

	return (0);
}
