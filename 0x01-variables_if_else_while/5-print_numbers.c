#include <stdio.h>
/**
 * main - entry point
 * Return: 0 if no error, non-zero if error.
 * */
int main(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

