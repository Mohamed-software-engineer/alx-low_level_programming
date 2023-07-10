#include <stdio.h>
#include <stdlib.h>
/**
 * get_minimum_coins - get minimum coins
 * @cents: integer variable
 * Return: count
 */
int get_minimum_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = sizeof(coins) / sizeof(coins[0]);
	int count = 0;
	int i = 0;

	for (; i < num_coins; i++)
	{
		count += cents / coins[i];
		cents %= coins[i];
	}
	return (count);
}
/**
 * main - change cents to coin
 * @argc: counter to arguments
 * @argv: array of strings
 * Return:0
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	{
		int min_coins = get_minimum_coins(cents);

		printf("%d\n", min_coins);
	}

	return (0);
}
