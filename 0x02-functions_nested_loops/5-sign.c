#include "main.h"
/**
 *print_sign - print the sign of a number.
 *@n: Number to be checked.
 *Return: Always 0.
*/
int print_sign(int n)
{
	int n;

	n = print_sign(98);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(n + '0');
	 _putchar('\n');
	 n = print_sign(0);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(n + '0');
	 _putchar('\n');
	 n = print_sign(0xff);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(n + '0');
	 _putchar('\n');
	 n = print_sign(-1);
	 _putchar(',');
	 _putchar(' ');
	 _putchar(n + '0');
	 _putchar('\n');
	 return (0);
}
