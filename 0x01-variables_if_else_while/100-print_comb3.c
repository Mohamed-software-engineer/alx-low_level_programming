#include <stdio.h>
/**
 * main - print tow digite
 * Return: 0 value
 */
int main(void)
{
	int a = 0;
	int b = 0;

	while (a < 10)
	{
		b = a + 1;
		if (a != b)
		{
			while (b < 10)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a < 8)
				{
					putchar(',');
					putchar(' ');
				}
				b++;
			}
		}
		a++;
	}

	putchar('\n');

	return (0);
}
