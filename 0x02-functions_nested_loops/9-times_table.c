#include "main.h"
/**
 *times_table - prints the 9 times table, starting with 0.
 *
 *Return: always 0 success.
*/
void times_table(void)
{
	int a, b, mn;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			mn = a * b;
			_putchar(44);
			_putchar(32);
			if (mn <= 9)
			{
				_putchar(32);
				_putchar(mn + 48);
			}
			else
			{
				_putchar((mn / 10) + 48);
				_putchar((mn % 10) + 48);
			}
		}
		_putchar('\n');
		return (0);
	}
}
