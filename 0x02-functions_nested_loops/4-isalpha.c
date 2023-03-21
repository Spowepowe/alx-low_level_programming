#include "main.h"

/**
 * _isalpha - checks for alphabetic character lowercase or uppercase
 *
 * @c: takes input from other functions.
 *
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

