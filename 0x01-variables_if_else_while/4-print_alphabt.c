#include <stdio.h>
/**
 * main - print alphapte
 * Return: 0 value
 */
int main(void)
{
	char R = 'a';

	while (R <= 'z')
	{
		if (R != 'q' && R != 'e')
		{
			putchar(R);
		}
		R++;
	}

	putchar('\n');

	return (0);
}
