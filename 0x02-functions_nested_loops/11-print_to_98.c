#include <stdio.h>
/**
 * print_to_98 - print all natural from n to 98.
 * @n: input number
 * Return: no return
*/
void print_to_98(int n)
{
	if (n > 9)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}