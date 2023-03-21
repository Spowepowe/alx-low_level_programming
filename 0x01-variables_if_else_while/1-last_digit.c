#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print the value of n status:
 *             - greater than 5, is 0 and is not less than 6.
 *
 * Return: Always O (Success)
*/

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	digital = n % 10; /*gets last digital_number*/

	if (digital > 5)
		printf("Last digital of %i is %i and is greater than 5\n", n, digital);
	else if (digital == 0)
		digital("Last digital of %i is %i and is 0\n", n, digital);
	else if (digital < 6 && digital != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digital);

	return (0);
}
