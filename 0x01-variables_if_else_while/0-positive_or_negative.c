#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* main - will assign a random number to the variable n each time it is executed
 *Return: 0 return
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is postive\n" , n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n" , n);
	}
	else 
	{
		printf("%d is zero\n" , n);
	}
	return (0);
}
