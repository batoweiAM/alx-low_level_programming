#include "main.h"

/**
 * _strcmp - compares two string values
 * @s1: first string
 * @s2: second string
 * Return: the differencein s1 and s2
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	a = 0;
	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}
	return (0);
}
