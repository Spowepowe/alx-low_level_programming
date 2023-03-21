#include"main.h"

/**
 * print_last_digit - print last digit of a number.
 *
 * @n: takes number input
 *
 * Return: last_digit
*/

int print_last_digit(int n)
{
	int lastdigit;

	if (n < 0)
	n = -n;

	lastdigit = n % 10;

	if (lastdigit < 0)
		lastdigit = -lastdigit;

	_putchar(lastdigit + '0');

	return (lastdigit);
}

