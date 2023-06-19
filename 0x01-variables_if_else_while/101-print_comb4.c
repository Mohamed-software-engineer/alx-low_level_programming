#include <stdio.h>
/**
 * main - print two digite
 * Return: 0 value
 */
int main(void)
{
	int a = 0;
	int b = 0;
	int c = 0;

	while (a < 10)
	{
		b = a + 1;
		if (a != b)
		{
			while (b < 10)
			{
				c = b + 1;
				if (b != c)
				{
					while (c < 10)
					{
						putchar(a + '0');
						putchar(b + '0');
						putchar(c + '0');
					if (a < 7)
					{
						putchar(',');
						putchar(' ');
					}
						c++;
					}
				}
				b++;
			}
		}
		a++;
	}
	putchar('\n');

	return (0);
}
