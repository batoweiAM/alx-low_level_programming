#include <stdio.h>
/**
 * main - entry point
 * Return: 0 success, non-zero fail
 **/
int main(void)
{
	int n, a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (n = '0'; n <= '9'; n++)
			{
				if (a < b && a < n)
				{
					putchar(a);
					putchar(b);
					putchar(n);
					if (a == '7' && b == '8' && n == '9')
					{
						break;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
