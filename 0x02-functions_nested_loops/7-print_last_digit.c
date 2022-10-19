#include "main.h"
/**
 * print_last_digit- print the last digit of an interger.
 * @r: number to compute last digit.
 * Return: last digit
*/
int print_last_digit(int r)
{
	int last_digit;

	last_digit = r % 10;
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
