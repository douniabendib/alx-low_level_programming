#include "main.h"
#include <ctype.h>

/**
 * _islower- check if char is lowercase.
 * @c: is the char be checked.
 * Return 1 if c is lowercase,otherwise 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
