#include "main.h"
/**
 *_abs - computes the absolute value of an integer.
 *@r: the interger to compute absolute value.
 *Return: returns the abs value.
*/
int _abs(int r)
{
	int k = r;
	int absvalue;

	if (k < 0)
	{
		k = k * (-1);
	}
	absvalue = k;
	return (absvalue);
}
