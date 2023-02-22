#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c).
 * return 0 otherwise
 * Return 1 if c is lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
