#include "main.h"
/**
 * main - prints the alphabet, in lowercase
 */
void print_alphabet(void)

int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}

	_putchar('\n');
	return (0);
}
