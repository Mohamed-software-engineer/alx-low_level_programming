#include <stdio.h>
/**
 * main - print all two two digite
 * Return: 0 value
*/
int main(void)
{
	int a = 0;
	int b = 1;

	while (a <= 99)
	{
		while (b <= 99)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}
		a++;
		b = a + 1;
	}
	 putchar('\n');

	return (0);
}
