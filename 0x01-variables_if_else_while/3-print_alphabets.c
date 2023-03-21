#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - print alphabet in lowercase then in uppercase
 *             - followed by a new line
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';

	/*lowercase a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}

	/*uppercase A - Z*/
	while (CH <= 'Z')
	{
		putchar(CH);
		++CH;
	}
	putchar('\n');

	return (0);
}
