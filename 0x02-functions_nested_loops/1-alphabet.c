#include "main.h"
/**
 * print alphabet - prints the alphabet, in lowercase
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);

	_putchar('\n');
	return (0);
}
